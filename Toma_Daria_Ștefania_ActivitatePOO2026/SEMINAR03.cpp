#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class prajitura {
public:
	char* denumire;
	float pret;
	int cantitate;
	bool dePost;
	int nrIngrediente;
	string* ingrediente;
	//const id;
	const int id;
	prajitura() {
		this->denumire = new char[strlen("Tiramisu") + 1];
		strcpy(denumire, "Tiramisu");
		this->pret = 15;
		this->cantitate = 250;
		this->dePost = true;
		this->nrIngrediente = 3;
		this->ingrediente = new string[this->nrIngrediente];
		this->ingrediente[0] = "piscoturi";
		this->ingrediente[1] = "vanilie";
		this->ingrediente[2] = "cafea";
	}

	prajitura(const char* denumire, float pret) {

		float calculeazaCantitateTotala(Prajitura * prajituri, int nr_prajituri)
		{
			float greutate = 0;
			for (int p = 0; p < nr_prajituri; p++)
				greutate += prajituri[p].cantitate;
			return greutate;
		}
		void main() {
			prajitura p;
			prajitura p2("Amandina", 40);
			p.afisare();
			p2.afisare();
			cout << p.costMediuGram();
			prajitura* prajituri;
			prajituri = new prajitura[3];
			prajituri[2].afisare();
			prajituri[1].pret = 50;
			prajituri[2].cantitate = 70;

			prajituri[0].modificaDenumire("Tort");
			prajituri[1].modificaDenumire("Ecler");

			for (int i = 0; i < 3; i++) {
				cout << prajituri[i].denumire << ' ' << prajituri[i].costMediuGram() << endl;
			}
			float greutate_totala = calculeazaCantitateTotala(prajituri, 3);
			cout << "Total: " << greutate_totala << endl;
		}