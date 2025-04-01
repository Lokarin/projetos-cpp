#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
	string _name;
	string _gender;
	unsigned int _age;

public:
	Animal(string name, string gender){
		this->_name = name;
		this->_gender = gender;
		this->_age = 0;
	}

	void setName(string name){
	      if(name.length() != 0){
	      	this->_name = name;
	      } else {
	      	cout << "Name cannot be empty!" << endl;
	      }
	}

	void setAge(unsigned int age){
		if(age > this->_age){
			this->_age = age;
		} else {
			cout << "Age less than actual age!" << endl;
		}
	}

	unsigned int getAge() {
		return _age;
	}

	void showName(){
		cout << "Name: " << _name << endl;
	}

	void info() {
		cout << endl << "-- Info -- " << endl;
		cout << "Name: " << this->_name << endl;
		cout << "Gender: " << this->_gender << endl;
		cout << "Age: " << this->_age << endl << endl;
	}
};

#endif //ANIMAL_H
