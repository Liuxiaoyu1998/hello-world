#include <iostream>
#include <cmath>
using namespace std;

class palindrome{
	public:
		palindrome(int m) {
			this->m = m;
			this->n = 0;
			this->sum = m;
			this->bit = 0;
			this->flag = true;
			this->a[0] = 0;
		} 
		~palindrome() {};
		
		void divide() {
			m = sum;
			bit = 0;
			while(m != 0) {
				a[bit] = m % 10;
//				cout << a[bit] << " ";
				m /= 10;
				bit++;
			}
//			cout << endl; cout << "bit=" << bit << endl; 
		};
		
		bool judge() {
			flag =  true;
			int mbit = bit / 2;
			for(int i = 0; i < mbit; i++) {
				if(a[i] == a[bit-1-i]) {
					continue;
				}
				else {
					flag = false;
					break;
				}
			}
//			cout << "judge flag=" << flag << endl;
			return flag;
		};
		
		bool changeandadd() {
			m = sum;
			n = 0;
			for(int i = 0; i < bit; i++) {
				n = n*10 + a[i];
//				cout << "n=" << n << endl;
			}

			double num = double(m) + double(n);
			if (log(num) / log(2) >= 31) {
				return false;
			}
			else {
//				cout << "legal" << endl;
				sum += n;
//				cout << "sum=" << sum << endl;
				return true;
			}
		};
		
		void output() {
			cout << sum << endl;
		}
		
	private:
		int m, n, sum, bit;
		bool flag;
		int a[10];
};


int main() {
	int m;
	cin >> m;
	palindrome pd(m);
	while(1) {
		pd.divide();
		if(pd.judge() == false) {
			if(pd.changeandadd() == false) {
				cout << "No" << endl;
				break;
			}
			else {
				continue;
			}
		}
		else {
			pd.output();
			break;
		}
	}
	
	return 0;
}

