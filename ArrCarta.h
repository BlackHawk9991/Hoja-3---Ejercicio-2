//ArrCarta.h
#pragma once
#include "Carta.h"

class ArrCarta {
private:
	Carta** array;
	int n;
public:
	ArrCarta() {
		array = new Carta * [n];
		n = 0;
	}

	~ArrCarta() {};

	void addCarta() {
		Carta* c = new Carta();
		Carta** aux = new Carta * [n + 1];
		for (int i = 0; i < n; i++) {
			aux[i] = array[i];
		}
		aux[n] = c;
		n += 1;
		array = aux;
	}

	void deleteCarta() {
		Carta** aux = new Carta * [n - 1];

		for (int i = 0; i < n; i++) {
			aux[i] = array[i];
		}
		n -= 1;
		array = aux;
	}

	void printArray() {
		for (int i = 0; i < n; i++) {
			cout << "\n";
			cout << "-Carta " << i << "-" << endl;
			array[i]->printCarta();
		}
	}

	void platosPicantes() {
		for (int i = 0; i < n; i++) {
			if (array[i]->getPicante() == "Si") {
				array[i]->printCarta();
			}
		}
	}

	void platosCaros() {
		for (int i = 0; i < n; i++) {
			if (array[i]->getPrecio() > 100) {
				array[i]->printCarta();
			}
		}
	}
};
