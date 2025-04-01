#ifndef CAT_H
#define CAT_H

#include "animal.h"

using namespace std;

class Cat: public Animal{
public:
	Cat(string name, string gender): Animal(name, gender) {}
	void meow(){
		cout << "Meow!" << endl;
	}
};

#endif //CAT_H 
