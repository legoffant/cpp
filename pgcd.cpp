#include <iostream>

int main(void) {

    std::cout <<"Entrez un nombre a: "<< std::endl;
    int a {0};
    std::cin >> a;

    std::cout <<"Entrez un nombre b: "<< std::endl;
    int b {0};
    std::cin >> b;

    int r {a % b};
    while (r != 0) {
        a = b;
        b = r;
        // r vaut le reste de la division entière de a par b
        r = a % b;
    }

    std::cout << "Le PGCD vaut: " << b << std::endl;
    return 0;
}