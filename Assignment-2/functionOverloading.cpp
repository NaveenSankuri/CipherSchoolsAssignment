#include <iostream> 
using namespace std;
class Naveen{
public:
void test(int i) {
	cout << " The int is " << i << endl;
}
void test(double  f) {
	cout << " The float is " << f << endl;
}
void test() {
	cout << " No parameters passed "  << endl;
}
};
int main() {
	Naveen n;
	n.test(5);
	n.test(5.5);
	n.test();
	return 0;
}