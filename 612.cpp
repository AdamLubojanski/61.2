#include <iostream>
#include <algorithm>
using namespace std;

class zamiana{
    ifstream in("ciagi.txt");
    ofstream out("wynik1.txt");
public:
        zamiana();
        ~zamiana();
        void koniec();
		bool sprawdz_czy_szescian(int liczba)
		zamiana::zamiana()
		{ 
    	plik1.open("ciagi.txt");
    	plik2.open("wynik1.txt");
}
bool zamiana::sprawdz_czy_szescian(int liczba)
{
	
     while(!plik.eof()){
        plik >> liczba;
    for(int i=0; i*i*i<=liczba; i++)
        if(i*i*i==liczba) return true;
    return false;
}
}
void zamiana::koniec()
{
	
	 if(sprawdz_czy_szescian(liczba)){
    	int liczba = t[0];
    	for(int i=0;i<length;i++)
        if(t[i]>wynik)wynik=t[i];
        plik <<t[i];
}
zamiana::~zamiana()
{
	plik1.close();
    plik2.close();
}

int main()
{
   
	zamiana xd;
	xd.sprawdz_czy_szescian();
	xd.koniec();
    
    return 0;
}
