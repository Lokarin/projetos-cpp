//#include <iostream>
#include "circulo.h"

void example(){
	Circulo cir(2, 0, 0);
	Circulo cir2(3, 1, 1);

	cir.imprimeRaio();
	cir2.imprimeRaio();

	cir.imprimeArea();
	cir2.imprimeArea();

	cir.imprimeCentro();
	cir2.imprimeCentro();

	cir.aumentaRaio(100);
	cir.imprimeRaio();
	cir2.aumentaRaio(75);
	cir2.imprimeRaio();

	cir.setCentro(3, 3);
	cir.imprimeCentro();

	cir.setRaio(5.5);
	cir.imprimeRaio();

	cir.imprimeDistancia(cir2);

	cir2.setCentro(2, 1);
	cir.imprimeDistancia(cir2);

	cir2.setCentro(3, 3);
	cir.imprimeDistancia(cir2);
}

int main() {
	example();

	return 0;
}
