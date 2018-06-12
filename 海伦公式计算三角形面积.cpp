#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class triangle{
	public:
		triangle() {
			a = 0; b = 0; c = 0;
			p = 0; s = 0;
		} 
		~triangle() {};
		
		void input() {
			cin >> a >> b >> c;
		};
		bool judge() {
			if (a + b > c && a + c > b && b + c > a) {
				return true;
			}
			else {
				return false;
			}
		};
		double area() {
			p = (double(a) + b + c) / 2;
			s = sqrt(p*(p-a)*(p-b)*(p-c));
			return s;
		}
		
	private:
		int a, b, c;
		double p, s;
};


int main() {
	int n;
	cin >> n;
	while(n--) {
		triangle tri;
		tri.input();
		if(tri.judge() == true) {
			cout << setiosflags(ios::fixed) << setprecision(2) << tri.area() << endl;
		}
		else {
			cout << "Failed" << endl;
		}	
	}
	
	return 0;
}


