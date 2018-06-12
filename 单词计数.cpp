#include <iostream>
#include <string.h>
using namespace std;

class countwords {
	public:
		countwords() {
			this->b[0] = 0; 
			sum = 0;
		};
		~countwords() {};
		
		void getstring() {
			cin.getline(b, sizeof(b));	
		};
		
		int count();

	private:
		char b[100];
		int sum;
};

int countwords::count() {
	if (b[strlen(b) - 1] == '\n') {
		b[strlen(b) - 1] = 0;
	}
	
	for(int i = 0; i < strlen(b); i++) {
		if(b[i] == ' ' && b[i + 1] != ' ') {
			sum++;
		}
	}
	sum++;
	return sum;
}

int main() {
	countwords cw;
	cw.getstring();
	cout << cw.count() << endl;
	
	return 0;
}
