//#include <iostream>
#include "relogio.h"
#include <ostream>

using namespace std; 

void example(){
	int h, m, s;

	Relogio relogio(14, 55, 44);

	relogio.getHorario(h, m, s);

	cout << "Horas: " << h << ":" << m << ":" << s << endl;

	relogio.tick(10);
	relogio.getHorario(h, m, s);

	cout << "Horas: " << h << ":" << m << ":" << s << endl;

	relogio.setHorario(30, 22, 11);
	relogio.getHorario(h, m, s);

	cout << "Horas: " << h << ":" << m << ":" << s << endl;

	relogio.tick(10);
	relogio.getHorario(h, m, s);

	cout << "Horas: " << h << ":" << m << ":" << s << endl;
}

int main() {
	example();

	return 0;
}
