#include<iostream>

using namespace std;

int main(void){

	string motDepassecorrect = "Admin123";
	string motDepasse;
       int tentatives = 0;

	while(tentatives < 3 && motDepasse != motDepassecorrect)
	{
		cout<< " \nEntrez le mot de passe: ";
		cin>>motDepasse;
		tentatives++;

		if(motDepasse == motDepassecorrect)
		{
			cout<< "Mot de passe correct"<<endl;
		}
		else
		{
			cout<< "Mot de passe incorrect"<<endl;
		}

	}	
	if(motDepasse != motDepassecorrect)
	{
		cout<< "Compte bloque"<<endl;
	}

	return 0;
}

