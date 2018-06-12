#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n; //JSON 数据的行数和查询的个数
	char json[m][81];
	char inquiry[n][81];
	for(int i = 0; i < m; i++) {
		fgets(json[i], 81*sizeof(char), stdin);
		int len = strlen(json[i]);
		if (json[len - 1] == '\n') json[len - 1] = 0;
	}
	for(int i = 0; i < n; i++) {
		fgets(inquiry[i], 81*sizeof(char), stdin);
		int len = strlen(inquiry[i]);
		if (inquiry[len - 1] == '\n') inquiry[len - 1] = 0;
	}
	
	
	for(int i = 0; i < n; i++) {
//		int fullstop = 0;
//		for(int i1 = 0; i1 < strlen(inquiry[i]); i1++) {
//			if(inquiry[i][i1] == '.') fullstop++;
//		}
//		int target[fullstop][20];
		char target[5][15];
		int cnt = sscanf(inquiry[i], "%s.%s.%s.%s.%s", target[0], target[1], target[2], target[3], target[4]);
		for(int j = 0; j < m; j++) {
			for(int k = 0; k < strlen(json[j]); k++) {
				
			} 
		}
	}
	
	return 0;
}
