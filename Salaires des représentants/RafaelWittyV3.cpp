//BUT:Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
//AUTEUR:Rafael Witty
//DATE:2020-12-04


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    //déclaration des variables
    double numberVendu= 0;
    double Salaire= 0 ;
    //demande a l'utitilsateur le nombre de produit chimique vendu en $


    while (numberVendu != -1)
    {
        cout << "Veuiller entrer la somme d'argent rammasser par les produits chimiques par semaine : ";
        cin >> numberVendu;

        Salaire = 250 + ( 0.075  * numberVendu);
       
        cout << "votre salaire hebdomadaire est de " << Salaire << endl;

    }
    return 0;
}
/*Plan de test
