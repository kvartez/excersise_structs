#include <iostream>
#include <string>
using namespace std;

struct uczan{
	public:
	string imie;
	string nazwisko;
	float wiek;
	uczan(string im,string nazw ,float wi){
		imie =im;
		nazwisko= nazw;
		wiek=wi;
		
	}
};
void wypisz(struct uczan dup){
	cout<< dup.imie<<endl;
	cout<< dup.nazwisko<<endl;
	cout<< dup.wiek<<endl;
}

int main(int argc, char** argv) {
	uczan p1("milosz","gwizdziel",16);
	wypisz(p1);
	uczan p2("andrzej","skolopendron",16);
	wypisz (p2);
	uczan p3("marcin","king",15);
	wypisz (p3);
	return 0;
}
