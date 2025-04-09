//#include <iostream>
#include "condicionador.h"

void example(){
	Condicionador c1(5);
	Condicionador c2(10);

	c1.sensor(25);
	c2.sensor(31);
}

int main() {
	example();

	return 0;
}
