#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
class AplusB_on_Mars {
	public:
		AplusB_on_Mars(char a[], char b[]) {
			strcpy(this->a, a);
			strcpy(this->b, b);
//			for(int i = 0; i < strlen(a); i++) cout << a[i];
//			cout << endl;
//			for(int i = 0; i < strlen(b); i++) cout << b[i];
//			cout << endl;
			memset(prime, 0, sizeof(prime));
			memset(a, 0, sizeof(a));
			memset(b, 0, sizeof(b));
			
			this->c = 0;
		}
		~AplusB_on_Mars() {}
		
		void getprime() {
			//cout << endl << "---" << endl;
			int cnt = 0; int n = 2;
			int flag;
			while(cnt <= 25) {
				flag = 1;
				for(int i = 2; i <= sqrt(n); i++) {
					if(n % i == 0) {
						flag = 0;
						break;
					}
				}
				if(flag) {
					prime[cnt] = n;
				//	cout << n << " ";
					cnt++;
				}
				n++; 
			}
			//cout << "---" << endl;
		}
		bool islegal() {
			if(strcmp(a, "0") == 0 || strcmp(b, "0") == 0) return false;
			else return true;
		}
		void getmarsnum() { 
			memset(aa, 0, sizeof(aa));
			memset(bb, 0, sizeof(bb));
			int k; int j = 0;
			for(int i = strlen(a)-1; i >= 0; i--) {
				k = 0;
                while(a[i] != ',') {
					aa[j] += (a[i]-'0')*pow(10,k);
					//cout << aa[j] << endl;
					k++;
                    i--;
                  	if(i < 0) break;
                }
                j++;
            }
            j = 0;
            for(int i = strlen(b)-1; i >= 0; i--) {
				k = 0;
                while(a[i] != ',') {
					bb[j] += (b[i]-'0')*pow(10,k);
					//cout << bb[j] << endl;
					k++;
                    i--;
                	if(i < 0) break;
                }
                j++;
            }
		}
		void plus() {
			memset(cc, 0, sizeof(cc));
			c = 0;
			int count;
			for(int i = 0; i <= 25; i++) {
                cc[i] = (aa[i]+bb[i]+c)%prime[i];
                c = (aa[i]+bb[i]+c)/prime[i];
            }
            for(int i = 99; i >= 0; i--) {
            	if (cc[i] != 0) {
            		count = i;
            		break;
				}
			}
            for(int i = count; i > 0; i--) {
            	cout << cc[i] << ',';
        	}
            cout << cc[0] << endl;
		}
		
	private:
		char a[100], b[100];
		int prime[26];
		long long int aa[100], bb[100], cc[100]; int c;
};

int main() {
	char a[50], b[50];
	while(1) {
		cin >> a >> b;
		AplusB_on_Mars abm(a, b);
		if(abm.islegal() == true) {
			abm.getprime();
			abm.getmarsnum();
			abm.plus();
		}
		else break;
	}
	
	return 0;
}

/*
input
1,0 2,1
4,2,0 1,2,0
1 10,6,4,2,1
0 0

out
1,0,1
1,1,1,0
1,0,0,0,0,0
*/
