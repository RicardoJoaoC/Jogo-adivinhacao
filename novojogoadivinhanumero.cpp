#include <iostream>
#include <random>

int main() {
    int numberUser;
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(1, 100);

    int randomNumber = distrib(gen);
    std::cout << "Random number (1-100, modern c++): " << randomNumber << std::endl;
    std::cout << "Adivinhe o número: ";
    std::cin >> numberUser;

    if (numberUser == randomNumber) {
        std::cout << "Acertou!" << std::endl;
    } else {
        std::cout << "Errou :(" << std::endl;
    }

    return 0;
}