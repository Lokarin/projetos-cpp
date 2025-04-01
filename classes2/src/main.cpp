//#include <iostream>
#include <string>
#include "dog.h"
#include "cat.h"

using namespace std; 

void example(){
	Cat tom("Tom","male");
	Cat nina("Nina","female");
	Dog scooby("Scooby","male");

	tom.showName();
	tom.meow();
	tom.setName("Coisa");
	tom.setAge(5);
	tom.info();
	
	nina.showName();
	nina.meow();
	
	scooby.showName();
	scooby.bark();
}

int main() {
	example();


	Dog * ptr_dog;

	ptr_dog = new Dog("Teste", "male");
	ptr_dog->setAge(99);
	ptr_dog->info();

	delete ptr_dog;

	ptr_dog = new Dog("Teste2", "female");
	ptr_dog->setAge(55);
	ptr_dog->info();


	return 0;
}
