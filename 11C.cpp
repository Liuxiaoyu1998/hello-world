#include<iostream>
using namespace std;
int main() {
	int ans[9] = {0, 2, 5, 1, 7, 2, 3, 0, 0};
	int n;
	cin >> n;
	if(n <= 0 || n >= 8) cout << "Input Error" << endl;
	else cout << ans[n] << endl;
	return 0;
}
