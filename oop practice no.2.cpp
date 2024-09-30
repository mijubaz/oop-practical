#include <iostream>

class Dollar {
public:
    int dol;
    int cent;

    Dollar(int dollars, int cents) {
        dol = dollars;
        cent = cents;
    }

    void display() {
        std::cout << dol << " dollars " << cent << " cents" << std::endl;
    }

    double convertToRupees() {
        double totalCents = dol * 100 + cent;
        return totalCents * 0.083; // Assuming 1 dollar = 83 paise
    }
};

class Rupees {
public:
    int rs;
    int paisa;

    Rupees(double rupees) {
        rs = static_cast<int>(rupees);
        paisa = static_cast<int>((rupees - rs) * 100);
    }

    void display() {
        std::cout << rs << " rupees " << paisa << " paise" << std::endl;
    }
};

int main() {
    Dollar dollar(10, 50);
    double rupees = dollar.convertToRupees();
    Rupees rupeesObj(rupees);

    std::cout << "Dollar: ";
    dollar.display();

    std::cout << "Rupees: ";
    rupeesObj.display();

    return 0;
}
