/* Le canevas sont les étapes du programme à construire */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Fonction melangerLettres
string melangerLettres(string mot) {

    string melange;
    int position = 0;
    //Tant que l'on pas extrait toute les lettres du mot
    while (mot.size() != 0) {
        //On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot.size();
        //On ajoute la lettre dans le mot melangé
        melange += mot[position];
        //On retire cette lettre du mot mystere pour ne pas
        //le prendre une deuxieme fois
        mot.erase(position,1);

    }
    return melange;
}

int main(void) {

    //0.Initialisation nombre aléatoire
    srand(time(0));

    //1.Saisir le mot à deviner
    cout <<"Saisissez le mot à deviner"<< endl;
    string motADeviner("vide");
    cin >> motADeviner; 

    //2.Melanger les lettres du mot
    string motMelange("vide");
    motMelange = melangerLettres(motADeviner);

    //3.On essaye jusqu'à trouver le mot
    string motProposer("vide");
    do {
        cout <<"Proposer un mot" << endl << motMelange << endl;
        cin >> motProposer;
    } while(motProposer != motADeviner);

    cout << "vous avez trouvez le mot mystère: " << motADeviner 
    << endl;
    return 0;
}