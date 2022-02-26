/*
Cette exemple traite de la gestion des erreurs avec le flux de 
sortie cin pour rendre plus robuste notre programme 
*/

#include <iostream>
#include <string>

int main(void) {
    std::cout << "Quelle est ton age? ";
    unsigned int age{0};

    if(std::cin >> age) {
        // Tout va bien
        std::cout << "tu as " << age <<"ans"<<std::endl;
    
    } else {
        // Si std::cin a rencontré une erreur quelconque
        std::cout << "Tu n'a pas rentré un entier, il y a erreur" << std::endl;
        std::cin.clear(); // On remet std:cin dans un etat fonctionnel
        std::cin.ignore(255, '\n');
    
    }
    std::cout << "Maintenant, vérifions que tout va bien" << std::endl;
    std::cout << "Entre ton nom: ";
    std::string nom {""};
    std::cin >> nom;
    std::cout << "Tu t'appelles "<< nom << std::endl;

    return 0;
}