#include<iostream>
using namespace std;

int main()
{

	int age;
	bool accompagnateur;
	cout<<"Entrez votre age";
	cin >> age;


   if(age < 12)
{
    	cout << "Inscription Refuse";
}


   else if(age >=12 and age<=15)
	cout<<"Inscription conditionnelle: accompagnateur obligatoire"<<endl;
	cin >> accompagnateur;
if(accompagnateur)
{
        cout << "Inscription acceptee"<<endl;
}
else
{
        cout << "Inscription finalement refusé"<<endl;
}
else if(age >=16 andbool accompagnateur; age<=60)
{
        cout << "Inscription normale"<<endl;
}
else
{
    cout << "Acces prioritaire";
}
   return 0;
}
