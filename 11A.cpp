#include<iostream>
#include<queue>
using namespace std;
int main() {
	int n;
	cin >> n;
	queue<int> q;
	while(n--) {
		char c;
		cin >> c;
		if(c == 'I') {
			int x;
			cin >> x;
			q.push(x);
		}
		else if(c == 'Q') {
			if(q.empty() == true) cout << "error" << endl;
			else {
				cout << q.front() << endl;
			q.pop();
			} 
		} 
	}
	return 0;
}
