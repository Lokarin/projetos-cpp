#ifndef CONDICIONADOR_H
#define CONDICIONADOR_H

#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Condicionador {
private:
	unsigned int _potencia;

public:
    Condicionador(unsigned int pot) {
	    if (pot >= 0 && pot <=10) {
		    this->_potencia = pot;
	    } else {
		    cout << "Potência Inválida!" << endl;
		    this->_potencia = 0;
	    }
    }

    void sensor(float temp) {
	    float var = this->_potencia * 1.8;
	    cout << "Temperatura Original: " << temp << "°C" << endl;
	    cout << "Temperatura Controlada: " << temp-var << "°C" << endl;
    }
};

#endif // CONDICIONADOR_H

