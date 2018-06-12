#include <iostream>
#include <string.h>
using namespace std;

class sequence{
	public:
		sequence(char s[], char t[]) {
			strcpy(this->s, s);
			strcpy(this->t, t);
			ss = strlen(s) - 1;
			tt = strlen(t) - 1; 
		}
		~sequence() {}
		
		bool islegal() {
			if(ss < tt) return false;
			else return true;
		}
		void istheresub() {
			if (ss == tt) {
				if (strcmp(s, t) == 0) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else {
				int i; int j = 0;
				for (i = 0; i < ss; i++) {
					if (j == tt) break;
					if (s[i] == t[j]) j++;
				}
				if (j < tt) cout << "NO" << endl;
				else cout << "YES" << endl;
			}
		}
		
	private:
		char s[100]; char t[100];
		int ss; int tt;
};

int main() {
	char s[100];
	char t[100];
	cin >> s >> t; 
	sequence sq(s, t);
	if(sq.islegal() == false) {
		cout << "NO" << endl;
	}
	else {
		sq.istheresub();
	}
		
	return 0;
}
