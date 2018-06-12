#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
class sum_of_stepnumbers{
	public:
		sum_of_stepnumbers(int a, int n) {
			this->a = a;
			this->n = n;
			this->carry = 0;
			this->temp = 0;
		}
		~sum_of_stepnumbers() {}
		void result() {
			for(int i = 0; i < n; i++) {
				temp = a*(n-i);
				numbit.push((temp+carry)%10);
				carry = (temp+carry)/10;
			}
			if(carry > 0) numbit.push(carry);
			while(!numbit.empty()) {
				cout << numbit.top();
				numbit.pop();
			}
			cout << endl;
		}
		
	private:
		stack<int> numbit;
		int a, n;
		int carry, temp;
};

int main() {
	int a, n;
	while(~scanf("%d %d", &a, &n)) {
		sum_of_stepnumbers anumber(a, n);
		anumber.result();
	}
	return 0;
}
