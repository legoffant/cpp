#include <iostream> 

int main(void) {
    // On initialise le compteur à zéro
    int compteur {0};

    while(compteur <= 10) {
        std::cout << "mon compteur vaut: "<< compteur << std::endl;
        compteur++;
    }
}