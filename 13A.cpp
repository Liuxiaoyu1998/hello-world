#include <iostream>
#include <string.h>
using namespace std;
class trees_along_river {
	public:
		trees_along_river(int L) {
			memset(number, 0, sizeof(number));
			this->L = L; 
			this->sum = L+1;
		}
		~trees_along_river() {}
		
		void pullout(int l, int r) {
			for(int i = l; i <= r; i++) {
				number[i] = 1;
			}
		}
		void left() {
			for(int i = 0; i < L; i++) {
				if(number[i]) sum--;
			} 
			cout << sum << endl;
		}
		
	private:
		int L;
		int number[10000];
		int sum;
};

int main() {
	int T;
	cin >> T;
	while(T--) {
		int L, M;
		cin >> L >> M;
		trees_along_river trees(L);
		while(M--) {
			int l, r;
			cin >> l >> r;
			trees.pullout(l, r);
		}
		trees.left();
	}
	return 0;
}
