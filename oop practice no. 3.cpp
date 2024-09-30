#include <iostream>

class Kilogram {
public:
    double kg;

    Kilogram(double kilograms) {
        kg = kilograms;
    }

    Gram convertToGram() {
        return Gram(kg * 1000);
    }
};

class Gram {
public:
    double gm;

    Gram(double grams) {
        gm = grams;
    }

    void display() {
        std::cout << gm << " grams" << std::endl;
    }
};

int main() {
    double kilograms;
    std::cout << "Enter the weight in kilograms: ";
    std::cin >> kilograms;

    Kilogram kilogram(kilograms);
    Gram gram = kilogram.convertToGram();

    std::cout << "The weight in grams is: ";
    gram.display();

    return 0;
}
