#include <iostream>
#include <cmath>


class Triangulo {
private:
    double base;
    double altura;

public:
   
    Triangulo() {
        base = 1;
        altura = 1;
    }

    double calcularArea() {
        return (base * altura) / 2;
    }

    double getBase() {
        return base;
    }

    double getAltura() {
        return altura;
    }
};


class Circulo {
private:
    double radio;

public:
    
    Circulo() {
        radio = 1;
    }

    double calcularArea() {
        return M_PI * radio * radio;
    }

    double getRadio() {
        return radio;
    }
};


int main() {
    Triangulo t;
    Circulo c;

    std::cout << "TRIANGULO" << std::endl;
    std::cout << "Base: " << t.getBase() << std::endl;
    std::cout << "Altura: " << t.getAltura() << std::endl;
    std::cout << "Area del Triangulo: " << t.calcularArea() << std::endl;

    std::cout << "\nCIRCULO" << std::endl;
    std::cout << "Radio: " << c.getRadio() << std::endl;
    std::cout << "Area del Circulo: " << c.calcularArea() << std::endl;

    return 0;
}
