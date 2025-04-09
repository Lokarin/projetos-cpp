#ifndef TELEVISAO_H
#define TELEVISAO_H

#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Televisao {
private:
	unsigned int _volume, _canal;

public:
    Televisao() {
	    this->_volume = 50;
	    this->_canal = 1;
    }
    
    void aumentaVolume() {
	    if (this->_volume <= 99) {
		    this->_volume = this->_volume + 1;
	    } else {
		    cout << "Vomume máximo!" << endl;
	    }
    }

    void diminuiVolume() {
	    if (this->_volume >= 1) {
		    this->_volume = this->_volume - 1;
	    } else {
		    cout << "Vomume máximo!" << endl;
	    }
    }

    void printVolume() {
	    cout << "Volume: " << this->_volume << endl;
    }

    void aumentaCanal() {
	    if (this->_canal <= 74) {
		    this->_canal = this->_canal + 1;
	    } else {
		    cout << "Não há canais disponíves!" << endl;
	    }
    }

    void diminuiCanal() {
	    if (this->_canal >= 1) {
		    this->_canal = this->_canal - 1;
	    } else {
		    cout << "Não há canais disponíves!" << endl;
	    }
    }

    void printCanal() {
	    cout << "Canal: " << this->_canal << endl;
    }

    void goToCanal(unsigned int ch) {
	    if (ch >= 0 && ch <= 75) {
		    this->_canal = ch;
	    } else {
		    cout << "Não há canais disponíves!" << endl;
	    }
    }

};

#endif // TELEVISAO_H

