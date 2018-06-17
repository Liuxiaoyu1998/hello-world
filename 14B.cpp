#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
class minarea_matrix {
	public:
		minarea_matrix(int M, int N, int K) {
			this->M = M; this->N = N; this->K = K;
			memset(matrix, 0, sizeof(matrix));
			memset(ansarr, 0, sizeof(ansarr));
			this->cnt = 0; this->temp = M*N;
			this->allsum = 0;
		}
		~minarea_matrix() {}
		void getdata() {
			for(int i = 0; i < M; i++) {
				for(int j = 0; j < N; j++) {
					scanf("%d", &matrix[i][j]);
					allsum += matrix[i][j];
				}
			}
		}
		bool islegal() {
			if(allsum >= K) return true;
			else return false;
		}
		void combine(int p, int q) {
			memset(add, 0, sizeof(add));
			this->p = p; this->q = q;
			for(int j = 0; j < N; j++) {
				for(int i = p; i <= q; i++) {
					add[j] += matrix[i][j];
				}
			}
//			cout << "add:" << endl;
//			for(int i = 0; i < N; i++) {
//				cout << add[i] << "  ";
//			}
//			cout << endl;
		}
		int min(int x, int y) {
			return x<y?x:y;
		}
		void findmin() {
			ans = M*N;
		    start = 0, end = 0;
		    sum = 0; 
		    while(end < N) {  
		        if(sum < K)  
		            sum += add[end];  
		        while(sum >= K) {  
		            ans = min(ans, (q-p+1)*(end-start+1));  
		            sum -= add[start];
					start++;  
		        }  
		        end++;
		    //    cout << ans << "   ";
		    }
		    if(ans < temp) temp = ans;
		    //cout << endl;  		     
		}
		int merge() {
			return temp;
		}
	private:
		int M, N, K;
		int matrix[100][100];
		int add[100], ansarr[100];
		int allsum;
		int start, end;
		int p, q;
		int ans, sum, cnt, temp;
};

int main() {
	int M, N, K;
	while(~scanf("%d %d %d", &M, &N, &K)) {
		minarea_matrix mm(M, N, K);
		mm.getdata();
		if(mm.islegal() == true) {
			for(int p = 0; p < M; p++) {
				for(int q = p; q < M; q++) {
					mm.combine(p, q);
					mm.findmin();
				}
			}
			cout << mm.merge() << endl;
		}
		else printf("-1\n");
	}
	return 0;
}

/*
3 3 4
1 1 0
1 1 0
1 0 0
---

*/
