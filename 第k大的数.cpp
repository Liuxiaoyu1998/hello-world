#include <iostream>
#include <string>
using namespace std;

class numberk{
	public:
		numberk() {
			this->N = 0;
			this->k = 0;
			this->a[0] = 0;
		};
		~numberk() {};
		
		void getdata() {
			cin >> N >> k;
			for(int i = 0; i < N; i++) {
				cin >> a[i];
			}
		}
		
		void sort();
		void output() {
			cout << a[k - 1] << endl;
		}
		
	private:
		int N;
		int a[100];
		int k;	
};

void numberk::sort() {
	for (int i = 0; i < N; i++) {
		int b = a[i];
		int j;
		for (j = i - 1; j >= 0; j--) { // ≤Â»Î≈≈–Ú 
			if (b < a[j]) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		} 
		a[j + 1] = b;
	}
}

int main() {
	numberk nk;
	nk.getdata();
	nk.sort();
	nk.output();
	
	return 0;
}
