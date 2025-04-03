#ifndef ELEVADOR_H
#define ELEVADOR_H

#include <iostream>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;

class Elevador{
private:
	int _pisoAtual;
	unsigned int _pisoTotal;
	int _presentes;
	unsigned int _capacidade;

public:
	Elevador(unsigned int capacity, unsigned int pisos){
		this->_pisoAtual = 0;
		this->_presentes = 0;

		this->_capacidade = capacity;
		this->_pisoTotal = pisos;
	}

	void entra(unsigned int entrando) {
		cout << endl << "Entrando: " << entrando << endl;
		if (this->_capacidade >= (this->_presentes + entrando)) {
			this->_presentes = entrando + this->_presentes;
		} else {
			cout << "Não há espaço!" << endl;
		}

		this->printPresentes();
	}

	void sai(int saindo) {
		cout << endl << "Saindo: " << saindo << endl;
		if ((this->_presentes - saindo) > 0) {
			this->_presentes = this->_presentes - 1;
		} else {
			cout << "Não há tantas pessoas no elevador!" << endl;
		}

		this->printPresentes();
	}

	void sobe(unsigned int pisos) {
		cout << endl << "Subindo: " << pisos << endl;

		if (this->_pisoTotal >= (pisos + this->_pisoAtual)) {
			this->_pisoAtual = this->_pisoAtual + pisos;
		} else {
			cout << "Não há pisos suficiente!" << endl;
		}

		this->printPisoAtual();
	}

	void desce(int pisos) {
		cout << endl << "Descendo: " << pisos << endl;

		if ((this->_pisoAtual - pisos) >= 0) {
			this->_pisoAtual = this->_pisoAtual - pisos;
		} else {
			cout << "Não há pisos suficiente!" << endl;
		}

		this->printPisoAtual();
	}

	void printPisoAtual() {
		cout << "Piso atual: " << this->_pisoAtual << endl;
	}

	void printPisoTotal() {
		cout << "Piso total: " << this->_pisoTotal << endl;
	}

	void printPresentes() {
		cout << "Pessoas no Elevador: " << this->_presentes << endl;
	}

	void printCapacidade() {
		cout << "Capacitade do Elevador: " << this->_capacidade << endl;
	}

};

#endif //ANIMAL_H
