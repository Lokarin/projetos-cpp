//#include <iostream>
#include "elevador.h"

using namespace std; 

void example(){
	Elevador elevador(8, 10);

	elevador.printPisoTotal();
	elevador.printPisoAtual();
	elevador.printCapacidade();
	elevador.printPresentes();

	elevador.sobe(1);

	elevador.sai(1); 

	elevador.sobe(9);

	elevador.entra(9);

	elevador.sobe(1);

	elevador.entra(4);
	
	elevador.desce(11);

	elevador.entra(5);

	elevador.desce(6);

	elevador.sai(1);

	elevador.sobe(2);

	elevador.entra(5);

	cout << endl;

	elevador.printPisoTotal();
	elevador.printPisoAtual();
	elevador.printCapacidade();
	elevador.printPresentes();
}

int main() {
	example();

	return 0;
}
