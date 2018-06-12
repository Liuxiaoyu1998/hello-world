#include <iostream>
using namespace std;
class change_to_one{
	public:
		change_to_one(int n) {
			this->cnt = 0;
			this->cur = n;
		}
		~change_to_one() {}
		
		bool isone() {
			if(cur == 1) return true;
			else return false;
		}
		int count() {
			return cnt;
		}
		void operate() {
			if(cur%2 == 0) cur /= 2;
			else cur = (3*cur+1)/2;
			cnt++;
		}
		
	private:
		int cnt, cur;
};

int main() {
	int n;
	while(1) {
		cin >> n;
		if(n == 0) break;
		change_to_one cto(n);
		while(1) {
			if(cto.isone() == true) {
				cout << cto.count() << endl;
				break;
			}
			else {
				cto.operate();
			}
		}
	}
	return 0;
}
