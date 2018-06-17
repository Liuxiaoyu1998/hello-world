#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
class exponential_of_two {
	public:
		exponential_of_two(int n) {
			this->n = n;
			this->k = 0;
			memset(breakdown, 0, sizeof(breakdown));
		}
		~exponential_of_two() {}
		
		void givedata() {
			strcpy(brokenparts[0], "2(0)");
			strcpy(brokenparts[1], "2");
			strcpy(brokenparts[2], "2(2)");
			strcpy(brokenparts[3], "2(2+2(0))");
			strcpy(brokenparts[4], "2(2(2))");
			strcpy(brokenparts[5], "2(2(2)+2(0))");
			strcpy(brokenparts[6], "2(2(2)+2)");
			strcpy(brokenparts[7], "2(2(2)+2+2(0))");
			strcpy(brokenparts[8], "2(2(2+2(0)))");
			strcpy(brokenparts[9], "2(2(2+2(0))+2(0))");
			strcpy(brokenparts[10], "2(2(2+2(0))+2)");
			strcpy(brokenparts[11], "2(2(2+2(0))+2+2(0))");
			strcpy(brokenparts[12], "2(2(2+2(0))+2(2))");
			strcpy(brokenparts[13], "2(2(2+2(0))+2(2)+2(0))");
			strcpy(brokenparts[14], "2(2(2+2(0))+2(2)+2)");
		}
		void seperate() {
			int temp;
			for(int i = 14; i >= 0; i--) {
				if(n == 0) break;
				temp = pow(2, i);
				if(n >= temp) {
					n-=temp;
					breakdown[k] = i;
				//	cout << "breakdown" << k << "=" << i << endl;
					k++;
				} 
			}
		//	cout << "k= " << k << endl;
		}
		void show() {
			for(int i = 0; i < k-1; i++) {
				cout << brokenparts[breakdown[i]] << "+";
			}
			cout << brokenparts[breakdown[k-1]] << endl;
		}
		
	private:
		int n;
		char brokenparts[15][30];
		int breakdown[10];
		int k;
};

int main() {
	int n;
	while(~scanf("%d", &n)) {
		exponential_of_two exp(n);
		exp.givedata();
		exp.seperate();
		exp.show();
	}
	return 0;
}

