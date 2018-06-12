#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class compression_coding{
	public:
		compression_coding(int N){
			this->N = N;
		}
		~compression_coding(){}
		
	private:
		int N;
};
int main() {
	int N;
	cin >> N;
	int n = N / 8;
	int a[n];
	int b[N];
	int b1[8];
	
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		int c, j; 
		for (j = 7; j >= 0; j--) {//转二进制 
			c = a[i] % 2;
			b1[j] = c;
			a[i] = a[i] / 2;		//j = -1
		}
		j++;
		for (int k = i * 8; k < (i + 1) * 8; k++) {
			b[k] = b1[j];
			j++;
		}
	}	
	
	int d[8001], e[8001];//d记录开头是0/1 e记录有多少个0/1 
	int m = 0;
	memset(e, 0, 8001);
	d[m] = b[0];
	for (int i = 0; i < N; i++) {
		if (d[m] == b[i]) {
			e[m]++;
		}
		else {
			m++;
			d[m] = b[i];
			e[m]++;
		}
	}

	int f[m + 1][8];
	for (int i = 0; i < m + 1; i++) {
		f[i][0] = d[i];
		int c, j; 
		for (j = 7; j > 0; j--) {//转二进制 
			c = e[i] % 2;
			f[i][j] = c;
			e[i] = e[i] / 2;
		}	
	}
	
	int g[m + 1];
	for (int i = 0; i < m + 1; i++) {
		g[i] = 0;
		for (int j = 0; j < 8; j++) {
			g[i] = g[i] + f[i][j] * pow(2, 7 - j);
	//		printf("%d ", g[i]);
		}
	//	printf("\n");
	} 
	
	for (int i = 0; i < m + 1; i++) {
		cout << g[i] << " ";
	}
	
	return 0;
}
