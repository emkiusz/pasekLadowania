#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	char znak;
	do
	{
		int pasek=20,i=1,e=0,procent,czas=1000;
		char tab[21];
		znak='x';
		do
		{
			system("cls");
			cout<<"Zadanie 1. Pasek ladowania.\n\n";
			cout<<"Podaj dlugosc paska (nie wiecej niz 20): ";
			cin>>pasek;
		}
		while(pasek<1 || pasek>20);
		do
		{
			cout<<"Podaj czas oczekiwania (w milisekundach): ";
			cin>>czas;
		}
		while(czas<0);
		while(i!=pasek+1)
		{
			tab[i]=(char)177;
			cout<<tab[i];
			i++;
		}
		i=1;
		while(i!=pasek+1)
		{
			system("cls");
			cout<<"Zadanie 1. Pasek ladowania.\n\n";
			e=1;
			tab[i]=(char)219;
			while(e!=pasek+1)
			{
				cout<<tab[e];
				e++;
			}
			procent=(100*i/pasek);
			cout<<" "<<procent<<"%";
			i++;
			Sleep(czas);
		}
		cout<<"\n\nCzy chcesz poczekac jeszcze raz? (T/N) ";
		cin>>znak;
	}
	while(znak=='t' || znak=='T');
	return 0;
}
