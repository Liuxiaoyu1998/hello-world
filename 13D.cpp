#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <deque>
#include <memory.h>
using namespace std;
class code_of_maya {
	public:
		code_of_maya(int N) {
			this->N = N;
			memset(visited, 0, sizeof(visited));
			cur_lel = 1, nxt_lel = 0, ret = 0;
			found = false;
		}
		~code_of_maya() {}
		void getdata() {
			cin >> str;
			record.push_back(str);
		}
		bool match(const string &str1) {
		    for(int i = 0; i <= N-4; i ++) {
		        if(str1.substr(i, 4) == "2012")
		            return true;
		    }
		    return false;
		}
		int hash_func(string cur) {
		    int res = 0;
		    for(int i = 0; i < N; i++) res = res*3+cur[i]-'0';
		    return res;
		}
		void operating() {
			while(!record.empty()) {
	            string cur = record.front();
	            record.pop_front();
	            cur_lel --;
	
	            if(match(cur)) {
	                found = true;
	                cout << ret << endl;
	                break;
	            }
	
	            for(int i = 0; i < N-1; i ++) {
	                swap(cur[i], cur[i+1]);
	                int hash_val = hash_func(cur);
	                if(!visited[hash_val]) {
	                    visited[hash_val] = true;
	                    record.push_back(cur);
	                    nxt_lel ++;
	                }
	                swap(cur[i], cur[i+1]);
	            }
	
	            if(cur_lel == 0) {
	                cur_lel = nxt_lel;
	                nxt_lel = 0;
	                ret ++;
	            }
	        }
		}
		void judge() {
			if(!found)
            cout << -1 << endl;
		}
		
	private:
		string str;
		int N;
		bool visited[1600000];
		deque<string> record;
		int cur_lel, nxt_lel, ret;
        bool found;
};
int main() {
	int N;
    while(scanf("%d", &N) != EOF) {
    	code_of_maya code(N);
        code.getdata();
        code.operating();
        code.judge();
    }
    return 0;
}
