#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 30
using namespace std;

class IPjudgement{
	public:
		IPjudgement(char s[]) {
			strcpy(this->s, s);
		}
		~IPjudgement(){}
		int judging() {		
			int x[4];
			int n;
			int m = sscanf(s, "%d.%d.%d.%d%n", &x[0], &x[1], &x[2], &x[3], &n);
			if (m != 4 || s[n] != '\0') {
				cout << "NO" << endl;
				return -1;
			}	
			int i;
			for (i = 0; i < 4; i++) {
				if (x[i] < 0 || 255 < x[i]) break;
			}
			if (i < 4) {
				cout << "NO" << endl;
				return -1;
			}		
			char t[N];
			sprintf(t, "%d.%d.%d.%d", x[0], x[1], x[2], x[3]);
			if (strcmp(s, t) != 0) {
				cout << "NO" << endl;
				return -1;
			}
			cout << "YES" << endl;
		}
		
	private:
		char s[N];
};

int main() {
	while (1) {
		char s[N];
		fgets(s, N, stdin);
		int len = strlen(s);
		if (len > 0 && s[len - 1] == '\n') s[len - 1] = 0;	
		if(strcmp("End of file", s) == 0) break;
		IPjudgement IPsample(s);
		if(IPsample.judging() == -1) continue;
	}
	return 0;
}

