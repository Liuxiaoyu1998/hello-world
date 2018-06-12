#include <iostream>
#include <string.h>
using namespace std;
class divisors{
	public:
		divisors(int N) {
			this->N = N;
			memset(sum, 0, sizeof(sum));
		}
		~divisors() {}
		
		void getnum() {
			for(int i = 0; i < N; i++) {
				cin >> a[i];
			} 
		}
		void out() {
			for(int i = 0; i < N; i++) {
				for(int j = 1; j <= a[i]; j++) {
					if(a[i]%j == 0) sum[i]++;
				}
			}
			for(int i = 0; i < N; i++) cout << sum[i] << endl;
		}
		
	private:
		int N;
		int a[1001];
		int sum[1001];
};

int main() {
	int N;
	cin >> N;
	divisors dv(N);
	dv.getnum();
	dv.out();
	
	return 0;
}
