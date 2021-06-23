
#include <iostream>  
using namespace std;
class A {
		public:
		virtual void show() {
			cout << "Parental class function" << endl;
		}
	};
	class B :public A {
	public:
		void show() 	{
			cout << "Child class function";
		}
	};
	int main() {
		A* a;   
		B b;
		a = &b;
		a->show();      
	}