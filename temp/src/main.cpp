#include <iostream>
#include <vector>
#include <limits>
#include <memory_resource>
#include <array>
#include <cstddef> // Para std::byte

//int main(int argc, char* argv[]) {
//    pmr::vector<int> numbers;
//
//    cout << "Quantidade: ";
//
//    int qnt;
//
//    cin >> qnt; 
//
//    if (cin.fail()) {
//        cout << "Entrada inválida.";
//        return 1;
//    }
//
//    cout << "Quantidade registrada: " << qnt << endl;
//
//    for (int i = 0; i < qnt; i++) {
//        int number;
//        cout << "Numero " << i + 1 << ": ";
//        cin >> number;
//
//        if (cin.fail()) {
//            cin.clear();
//
//            string tmp;
//            cin >> tmp;
//            cout << "Entrada inválida (" << tmp << ") Insira um numero inteiro." << endl;
//
//            i--;
//
//        } else {
//            numbers.push_back(number);
//        }
//    }
//
//	return 0;
//}

int main() {
    // Usar pmr com um recurso de memória explícito
    std::array<std::byte, 4096> buffer;
    std::pmr::monotonic_buffer_resource pool{buffer.data(), buffer.size()};
    std::pmr::vector<int> numbers{&pool};
    
    int qnt;
    std::cout << "Quantidade: ";
    
    // Validação mais robusta da entrada
    if (!(std::cin >> qnt) || qnt <= 0) {
        std::cout << "Entrada inválida. Por favor, insira um número inteiro positivo.\n";
        return 1;
    }
    
    std::cout << "Quantidade registrada: " << qnt << '\n';
    
    // Reservar espaço antecipadamente para evitar realocações
    numbers.reserve(qnt);
    
    for (int i = 0; i < qnt; i++) {
        int number;
        std::cout << "Numero " << i + 1 << ": ";
        
        if (!(std::cin >> number)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Insira um número inteiro.\n";
            i--; // Repetir esta iteração
            continue;
        }
        
        numbers.push_back(number);
    }
    
    // Mostrar os números inseridos
    std::cout << "\nNúmeros inseridos:\n";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    
    return 0;
}
