#include<iostream>
using namespace std;
char texture[6][10] = {"--**-**--",
					   "-*--*--*-",
					   "-*-----*-",
					   "--*---*--",
					   "---*-*---",
					   "----*----"};
int main() {
	int x, y, w, h; //xÁÐ yÐÐ w*h
	cin >> x >> y >> w >> h;
	if(1<=x && x<=9 && 1<=y && y<=6 && 1<=w && w<=9 && 1<=h && h<=6 && x+w>=2 && x+w<=10 && 2<=y+h && y+h<=7) {
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				cout << texture[y+i-1][x+j-1];
			}
			cout << endl;
		}
	}
	else cout << "Input Error" << endl;
	
	return 0;
}
