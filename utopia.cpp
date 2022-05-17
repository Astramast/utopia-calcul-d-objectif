#include <iostream>

using namespace std;

int main(){
	cout<<"Calcul de l'objectif : "<<endl;
	cout<<"50 + (? - ?)*5 + ?"<<endl;
	cout<<"Rang de l'attaqué : ";
	unsigned int rdef = 0;
	cin>>rdef;
	cout<<"50 + ("<<rdef<<" - ?)*5 + ?"<<endl;
	cout<<"Rang de l'attaquant : ";
	unsigned int ratk = 0;
	cin>>ratk;
	cout<<"50 + ("<<rdef<<" - "<<ratk<<")*5 + ?"<<endl;
	cout<<"Bonus/malus : ";
	int bonusmalus = 0;
	cin>>bonusmalus;
	cout<<"Calcul de l'objectif : "<<endl;
	cout<<"50 + ("<<rdef<<" - "<<ratk<<")*5 + "<<bonusmalus<<endl;
	cout<<"Objectif = "<<50 + (rdef - ratk) *5 + bonusmalus<<endl;
	int i = 0;
	cin>>i;
	return 0;
}
