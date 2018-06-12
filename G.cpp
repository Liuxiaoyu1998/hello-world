#include <iostream>
#include <iomanip>
using namespace std;

class tax{
	public:
		tax(int n) {
			this->n = n - 3500;
			this->pay = 0;
		}
		~tax() {}
		
		bool taxornot() {
			if(n <= 0) return false;
			else return true;
		}
		double gettax() {
			if(n <= 1500) pay = n*0.03;
			else if(n <= 4500) pay = n*0.1 - 105;
			else if(n <= 9000) pay = n*0.2 - 555;
			else if(n <= 35000) pay = n*0.25 - 1005;
			else if(n <= 55000) pay = n*0.3 - 2755;
			else if(n <= 80000) pay = n*0.35 - 5505;
			else pay = n*0.45 - 13505;
			return pay;
		}
		
	private:
		int n;
		double pay;
};

int main() {
	int n;
	cin >> n;
	tax tx(n);
	if(tx.taxornot() == false) cout << "0.00" << endl;
	else cout <<fixed << setprecision(2) << tx.gettax() << endl;
	
	return 0;
}
