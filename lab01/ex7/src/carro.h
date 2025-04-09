#ifndef CARRO_H
#define CARRO_H

#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Carro {
private:
	float _tanque;

public:
    Carro(float gasolina) {
	    if (this->_tanque >= 0 && this->_tanque <= 50) {
		    this->_tanque = gasolina;
	    } else {
		    this->_tanque = 0;
	    }
    }

    void abastecer(float gasolina) {
	    if ((this->_tanque + gasolina) <= 50) {
		    this->_tanque = this->_tanque + gasolina;	    
		    cout << "Abastecido." << endl << "Tanque: " << this->_tanque << "L" << endl;
	    } else {
		    float sobra = (this->_tanque+gasolina)-50;
		    this->_tanque = 50;
		    cout << "Gasolina demais! Sobrou: " << sobra << "L" << endl << "Tanque: " << this->_tanque << "L" << endl;
	    }
    }

    void mover(float km) {
	    float consumo = km * (1.0f/15);

	    if ((this->_tanque-consumo) >= 0) {
		    this->_tanque = this->_tanque - consumo;
		    cout << endl <<  km << "km Percorridos." << endl << "Tanque: " << this->_tanque << "L" << endl;
		    cout << "Consumo: " << consumo << "L" << endl;
	    } else {
		    float kmSobra = 15*this->_tanque;
		    this->_tanque = 0;
		    cout << endl << "Não há gasolina suficiente para a viagem completa." << endl << "Distância percorrida: " << kmSobra << "km" << endl << "Tanque: " << this->_tanque << "L" << endl;
	    }

    }
};

#endif // CARRO_H

