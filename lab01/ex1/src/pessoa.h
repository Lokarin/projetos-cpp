#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Pessoa{
private:
	string _name;
	unsigned int _idade;
	unsigned int _altura;

public:
	Pessoa(string name, unsigned int age, unsigned int height){
		this->_name = name;
		this->_idade = age;
		this->_altura = height;
	}

	void setName(string name){
	      if(name.length() != 0){
	      	this->_name = name;
	      } else {
	      	cout << "Nome invalido!" << endl;
	      }
	}

	void setAge(unsigned int age){
		if(age > this->_idade){
			this->_idade = age;
		} else {
			cout << "Idade menor que idade atual!" << endl;
		}
	}

	void setHeight(unsigned int height) {
		if (height > this->_altura) {
			this->_altura = height;
		} else {
			cout << "Altura menor que altura atual!" << endl;
		}
	}

	void info() {
		cout << endl << "-- Info -- " << endl;
		cout << "Name: " << this->_name << endl;
		cout << "Age: " << this->_idade << endl;
		cout << "Height: " << this->_altura << endl;
	}
};

#endif //ANIMAL_H
