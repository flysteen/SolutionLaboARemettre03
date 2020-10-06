//BUT:Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
//que l'utilisateur a faite.
//Auteur:Rafael Witty
//DATE:2020-10-05

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "");
	//déclaration des variables

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int nombre = 0;
	int compteur = 0;



	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

while (nombre != iRandom && compteur != 5)
{
	cout << "Entrer votre nombre :";
	cin >> nombre;
	if (nombre <= 100)
	{
	compteur++;
	}
	else
	{
		cout << "votre nombre n'est pas en bas de 100 " << endl;
		
	}


}
	if (nombre == iRandom)
	{
		cout << "Vous avez trouvé la valeur, bravo !.";
	}
	else
	{
		cout << "Vous avez échoué, meilleur chance la prochaine fois !.";
	}
	return 0;
}