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
	int M, N;	// mƻ�� n���� 1 <= m,n <= 20 �����п��� 
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
f[m][n - 1]�൱�ڵ�һ������Ϊ0��ֻ�ý����ֳ�n - 1�ݼ��ɡ�
��Ϊ0��������κ������൱��f[m][n - 1]�еķ���ǰ���һ��Ϊ0�����ӣ�
���Ҳ�Υ��f�Ķ��塣����f[m][n - 1]һ����f[m][n]�ķ�����һ���֣�������0�ķ�������
f[m - n][n]�൱����ÿ�������м�һ����1����Ϊÿ�������м�һ����1����
Ӱ��f[m][n - 1]�еķ����Ŀ����ԣ�Ҳ����Ӱ��f�Ķ��塣����f[m - n][n]
һ����f[m][n]�ķ�����һ���֣���������0�ķ�������

5 3
0 0 0 0
0 1 1 1
0 1 1 1
0 1 2 2
0 1 2 3
0 1 3 4
*/
