#ifndef DOG_H
#define DOG_H

#include "animal.h"

using namespace std;

class Dog: public Animal{
public:
	Dog(string name, string gender): Animal(name, gender) {}
	void bark(){
		cout << "Bark!" << endl;
	}
};

#endif //DOG_H
