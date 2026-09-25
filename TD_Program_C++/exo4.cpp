#include<iostream>

using namespace std;

int main(){

	int secret = 37;
	int nombre;
	int tentatives = 0;
	bool trouve = true;

	while(tentatives <= 7 && nombre != secret )
	{
		cout<< "\n Entrez un nombre: ";
		cin>>nombre;
		tentatives++;

		if(nombre > secret)
		{
			cout<< "Trop grand"<<endl;
		}
		else if(nombre < secret)
		{
			cout<< "Trop petit"<<endl;
		}
		else
		
			cout<< "Bravo !";
	
	}


	if(trouve)
	{
		cout<< "Vous avez gagné"<<endl;
	}
	else
	{
		cout<< "Vous avez perdu"<<endl;
	}

	cout<< "Nombre de tentatives est: "<<tentatives<<endl;
	return 0;

}
