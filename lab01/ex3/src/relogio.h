#ifndef RELOGIO_H
#define RELOGIO_H

#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Relogio{
private:
	int _hora;
	int _minuto;
	int _segundo;

public:
	Relogio(int hou, int min, int sec){
		if (hou > 23 || min > 59 || sec > 59) {
			cout << "Hora Inválida. Iniciando em 00:00:00" << endl;
			this->_hora = 0;
			this->_minuto = 0;
			this->_segundo = 0;
		
		} else {
			this->_hora = hou;
			this->_minuto = min;
			this->_segundo = sec;
		}
	}

	void setHorario(int hou, int min, int sec) {
		if (hou > 23 || min > 59 || sec > 59) {
			cout << "Hora Inválida." << endl;
		} else {
			this->_hora = hou;
			this->_minuto = min;
			this->_segundo = sec;
		}
	}

	void getHorario(int &hou, int &min, int &sec) {
		hou = _hora;
		min = _minuto;
		sec = _segundo;
	}

	void tick(int ticks) {

		if ((this->_segundo + ticks) > 59) {
			int dif = 59 - this->_segundo;
			int nxt = ticks - dif;

			this->_minuto = this->_minuto + 1;
			this->_segundo = 0;
			this->_segundo = this->_segundo + nxt;
		} else {
			this->_segundo = this->_segundo + ticks;
		}
	}
};

#endif //RELOGIO_H
