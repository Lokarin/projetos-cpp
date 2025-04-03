//#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std; 

void example(){
	Pessoa jessica("Jessica", 22, 170);

	jessica.info();

	jessica.setAge(24);

	jessica.info();

	jessica.setName("Marcos");
	
	jessica.info();
}

int main() {
	example();

	return 0;
}
