#include <iostream>
#include<queue>
#include <string.h>
using namespace std;
class minenergy {
	public:
		minenergy(int n) {
			this->n = n;
			this->temp = 0;
			memset(a, 0, sizeof(a));
		}
		~minenergy() {}
		void getdata() {
			for(int i = 0; i < n; i++) {
				cin >> a[i];
			}
		}
		void calculate() {
			for(int i = 0; i < n; i++) {
				temp += a[i];
				q.push(temp); 
			}
		}
		void result() {
			temp = q.top();
			if(temp < 0) temp = -temp;
			cout << temp << endl;
		}
		
	private:
		int n;
		long long int a[50001];
		long long int temp;
		priority_queue< long long int,vector<long long int>,greater<long long int> > q;
};

int main() {
	int n;
	cin >> n;
	minenergy robot(n);
	robot.getdata();
	robot.calculate();
	robot.result();
	return 0;
}
