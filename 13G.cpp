#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;  
class matrix_rotation {
	public:
		matrix_rotation(int n) {
			this->n = n;
			flag = 0;
			memset(mtx1, 0, sizeof(mtx1));
			memset(mtx2, 0, sizeof(mtx2));
			data[0] = -1; data[1] = 0; data[2] =90; data[3] =180; data[4] = 270;
		}
		~matrix_rotation() {}
		
		void getmatrix() {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					cin >> mtx1[i][j];
				}
			}
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					cin >> mtx2[i][j];
				}
			}
			//
//			for(int i = 0; i < n; i++) {
//				for(int j = 0; j < n; j++) {
//					cout << mtx1[i][j] << " ";
//				}
//				cout << endl;
//			}
		}
		void judge() {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					if(mtx1[i][j] == mtx2[i][j]) flag = 1;
					else {
						flag = 0;
						break;
					}
	//				cout << "1: " << flag << " " << endl;
				}
				if(flag == 0) break;
			}
			if(flag == 1) return;
			
			int i1, j1, i2, j2;
			for(j1 = 0, i2 = 0; j1 < n, i2 < n; j1++, i2++) {
				for(i1 = n-1, j2 = 0; i1 >= 0, j2 < n; i1--, j2++) {
					if(mtx1[i1][j1] == mtx2[i2][j2]) flag = 2;
					else {
						flag = 0;
						break;
					}
	//				cout << "2: " << flag << " " << endl;
				}
				if(flag == 0) break;
			}
			if(flag == 2) return;
			
			for(i1 = n-1, i2 = 0; i1 >= 0, i2 < n; i1--, i2++) {
				for(j1 = n-1, j2 = 0; j1 >= 0, j2 < n; j1--, j2++) {
					if(mtx1[i1][j1] == mtx2[i2][j2]) flag = 3;
					else {
						flag = 0;
						break;
					}
	//				cout << "3: " << flag << " " << endl;
				}
				if(flag == 0) break;
			}
			if(flag == 3) return;
			
			for(j1 = n-1, i2 = 0; j1 >= 0, i2 < n; j1--, i2++) {
				for(i1 = 0, j2 = 0; i1 < n, j2 < n; i1++, j2++) {
					if(mtx1[i1][j1] == mtx2[i2][j2]) flag = 4;
					else {
						flag = 0;
						break;
					}
	//				cout << "4: " << flag << " " << endl;
				}
				if(flag == 0) break;
			}
		}
		void result() {
	//		cout << "flag " << flag << endl;
			cout << data[flag] << endl;
		}
		
	private:
		int mtx1[9][9], mtx2[9][9];
		int n, flag;
		int data[5];
};
int main() {
	int n;
	while(~scanf("%d", &n)) {
		matrix_rotation mr(n);
		mr.getmatrix();
		mr.judge();
		mr.result();
	}

	return 0;
}  

