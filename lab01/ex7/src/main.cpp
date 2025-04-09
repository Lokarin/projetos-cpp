//#include <iostream>
#include "carro.h"

void example(){
	Carro carro(46.6);

	carro.abastecer(10.1);

	carro.mover(400.8);
	carro.mover(236.5);
	carro.mover(386.1);

	carro.abastecer(30.5);
	carro.mover(386.1);

}

int main() {
	example();

	return 0;
}
