#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class setapples {
	public:
		setapples(int M, int N) {
			this->M = M;
			this->N = N;
			memset(f, 0, sizeof(f));
		}
		~setapples() {}
		
		void set() {
			int m, n;
			for(m = 0; m <= M; m++) {
				for(n = 0; n <= N; n++) {
					if(m == 0 || n == 0) f[m][n] = 0;
					//else if(m == n) f[m][n]++;
					else if(m > 0 && n == 1) f[m][n] = 1;
					else if(m < n) f[m][n] = f[m][m];
					else f[m][n] = f[m][n - 1] + f[m - n][n];
				}
			}
//			for(m = 0; m <= M; m++) {
//				for(n = 0; n <= N; n++) {
//					cout << f[m][n] << " ";
//				}
//				cout << endl;
//			}
			cout << f[M][N] << endl;
		}
		
	private:
		int M, N;
		int f[21][21];
};


int main() {
	int M, N;	// m苹果 n盘子 1 <= m,n <= 20 可以有空盘 
	while(~scanf("%d %d", &M, &N)) {
		setapples sa(M, N);
		sa.set();
	}
	return 0;
}
/*
f[m][n] = f[m][n - 1] + f[m - n][n];
        = 1 // m== 0 || n == 1
        = 0 // m < 0
f[m][n - 1]相当于第一盘子中为0，只用将数分成n - 1份即可。
因为0不会大于任何数，相当于f[m][n - 1]中的方案前面加一个为0的盘子，
而且不违背f的定义。所以f[m][n - 1]一定是f[m][n]的方案的一部分，即含有0的方案数。
f[m - n][n]相当于在每个盘子中加一个数1。因为每个盘子中加一个数1不会
影响f[m][n - 1]中的方案的可行性，也不会影响f的定义。所以f[m - n][n]
一定是f[m][n]的方案的一部分，即不含有0的方案数。

5 3
0 0 0 0
0 1 1 1
0 1 1 1
0 1 2 2
0 1 2 3
0 1 3 4
*/
