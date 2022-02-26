/* Depuis C++11 il y a une autre manière de parcourir un tableau*/
#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> const tableau_entiers {1, 2, 3, 4};

    std::cout << "Je vais afficher mon tableau d'entier.\n";
    for(auto const element: tableau_entiers) {
        std::cout << element << std::endl;
    }
    return 0;
}