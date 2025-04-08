#ifndef CIRCULO_H
#define CIRCULO_H

#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Circulo {
private:
    float _raio, _cenX, _cenY;

    float calArea() {
        return (M_PI * pow(this->_raio, 2));
    }

    float calDistancia(float x, float y) {
        return (sqrt(pow(x - this->_cenX, 2) + pow(y - this->_cenY, 2)));
    }

    float calCircun() {
        return (2 * M_PI * this->_raio);
    }

public:
    Circulo(float r, float x, float y) {
        this->_raio = r;
        this->_cenX = x;
        this->_cenY = y;
    }

    void setRaio(float r) {
        if (r >= 1) {
            this->_raio = r;
        } else {
            cout << "Raio inválido" << endl;
        }
    }

    void aumentaRaio(float p) {
	    this->_raio = this->_raio * (1 + (p/100));
    }

    void setCentro(float x, float y) {
	    this->_cenX = x;
	    this->_cenY = y;
    }

    void imprimeRaio() {
	    cout << "Raio: " << this->_raio << endl;
    }

    void imprimeCentro() {
	    cout << "x: " << this->_cenX << endl << "y: " << this->_cenY << endl;
    }

    void imprimeArea() {
	    cout << "Area: " << this->calArea() << endl;
    }

    void imprimeDistancia(Circulo c) {
	    float cx, cy;
	    c.returnCen(cx, cy);

	    cout << "Distancia: " << calDistancia(cx, cy) << endl; 
    }

    void returnCen(float &cenX, float &cenY) {
	    cenX = this->_cenX;
	    cenY = this->_cenY;
    }

};

#endif // CIRCULO_H

