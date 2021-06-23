#include <iostream>
using namespace std;
class Mammal {

public:
	void speak() {

		cout << "Mammals speaks";
	}

};

class Cat: public Mammal {

public:
	void speak() {

		cout << "meow meommmm";
	}
};
int main(void) {

	Cat c = Cat();

	c.speak();

	return 0;

}