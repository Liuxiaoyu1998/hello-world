#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class missile_interception {
	public:
		missile_interception(int k) {
			this->k = k;
			memset(missiles, 0, sizeof(missiles));
			memset(llength, 0, sizeof(llength));
			this->ans = 1;
		}
		~missile_interception() {}
		void getdata() {
			for(int i = 0; i < k; i++) {
				scanf("%d", &missiles[i]);
				llength[i] = 1;
			}
		}
		void lds() {
			for(int i = 1; i < k; i++) {
				for(int j = i-1; j >= 0; j--) {
					if(missiles[j] >= missiles[i] && llength[j]+1 > llength[i]) {
						llength[i] = llength[j]+1;
					}
				}
				if(ans < llength[i]) ans = llength[i];
			}
			cout << ans << endl;
		}
		
	private:
		int k;
		int missiles[25];
		int llength[25];
		int ans;
};

int main() {
	int k;
	while(~scanf("%d", &k)) {
		missile_interception mi(k);
		mi.getdata();
		mi.lds();
	}
	return 0;
}
