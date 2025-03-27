#include <iostream>
#include <ostream>

using namespace std;

class Animal{
	private:
		int idade;
	
	public:
		void setIdade(int idade){
			if (idade > 0) {
				this->idade = idade;
			
			} else {
				cout << "Idade inválida" << endl;
			}
		}

		void printIdade() {
			cout << "Idade: " << idade << endl;
		}
};

int main() {
	Animal teste;

	teste.setIdade(5);
	teste.printIdade();

	return 0;
}
