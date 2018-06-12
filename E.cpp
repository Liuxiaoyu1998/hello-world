#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;

class divisor{
	public:
		divisor(char s[]) {
			strcpy(this->aa, s);
			memset(a, sizeof(a), 0);
			this->k = 0;
		}
		~divisor() {}
		
		void strtoint() {
			int head = 0, tail = 0, length = 0;
			for (int i = 0; i < strlen(aa); ) {
				head = i; //cout << "head " << head << endl;
				while (aa[i] != ',' && aa[i] != '\0') {
					i++;
				}
				tail = i; //cout << "tail " << tail << endl;
				i++;
				length = tail - head;
				char b[10];
				strncpy(b, aa + head, length); 
				b[length] = '\0';
				//cout << "b=" << b << endl;				
				a[k] = atoi(b);
				//cout << "a=" << a[k] << endl;
				k++;
			}
		}
		void sorting() {	//²»ÓÃÅÅÐò 
			sort(a, a+k);
		}
		int gcd(int m, int t) {
		    if(t == 0) return m;
		    return gcd(t, m % t);
		}
		int operation() {
			int r = gcd(a[0], a[1]);
			//cout << "r=" << r << endl;
			for(int i = 2; i < k; i++) {
				r = gcd(r, a[i]);
			//cout << "r=" << r << endl;
			}
			return r;
		}
		
	private:
		int a[100];
		char aa[100];
		int k;
};

int main() {
	int n;
	cin >> n;
	while(n--) {
		char s[100];
		cin >> s;
		divisor dv(s);
		dv.strtoint();
		dv.sorting();
		cout << dv.operation() << endl;
	}
	
	return 0;
}
