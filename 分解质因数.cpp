#include <iostream>
using namespace std;

class primefactorization{
	public:
		primefactorization() {
			num = 0;
		} 
		~primefactorization() {};
		
		void input() {
			cin >> num;
		};
		void factorize() {
			if(num == 1) {
				cout << 1 << endl;
				return;
			}
			for(int i = 2; i <= num; ) {
				if (num % i == 0) {
					num = num / i;
					if(num != 1) {
						cout << i << "*";
					}
					else {
						cout << i << endl;
					}
				}
				else {
					i++;
				}
			}
		};
		
	private:
		int num;
};

int main() {
	int n;
	cin >> n;
	while(n--) {
		primefactorization pf;
		pf.input();
		pf.factorize();
	}
	
	return 0;
}
