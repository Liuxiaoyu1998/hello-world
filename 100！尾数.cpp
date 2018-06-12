#include <iostream>
#include <string.h>
using namespace std;

class factorial{
	public:
		factorial(int a){
			n = a;
			count = 0;
		};
		~factorial(){};
		int output();
		
	private:
		int n;
		int count;
};

int factorial::output() {
	int t = 0, f = 0;
	for(int i = 2; i <= n; i = i + 2) {
		int j = i;
		while(j % 2 == 0) {
			j = j / 2;
			t++;
		}
	}
	for(int i = 5; i <= n; i = i + 5) {
		int j = i;
		while(j % 5 == 0) {
			j = j / 5;
			f++;
		}
	}
	if(t > f) {
		return f;
	}
	else {
		return t;
	}
}

int main() {
	factorial fac(100);
	cout << fac.output() << endl;
		
	return 0;
}
