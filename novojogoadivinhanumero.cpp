#include <iostream>
#include <random>

int main() {
    int numberUser;
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(1, 100);

    int randomNumber = distrib(gen);
    std::cout << "Random number (1-100, modern c++): " << randomNumber << std::endl;
    do {
    std::cout << "Adivinhe o número (0 para Sair): ";
    std::cin >> numberUser;

    if (numberUser == randomNumber) {
        std::cout << "Acertou!" << std::endl;
        break;
    } else {
        std::cout << "Errou :(" << std::endl;
        continue;
    } 
} while (numberUser != 0);

    return 0;
}