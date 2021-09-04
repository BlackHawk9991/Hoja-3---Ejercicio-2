//Carta.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

string Temperaturas[2] = { "Frio" , "Caliente " };
string Respuesta[2] = { "Si" , "No" };

class Carta {
private:
	string nombre;
	string temperatura;
	string picante;
	int calorias;
	float precio;
public:
	Carta() {
		nombre = "";
		temperatura = Temperaturas[rand() % 2];
		picante = Respuesta[rand() % 2];
		calorias = rand() % (2500 - 100) + 1;
		precio = rand() % (200 - 10) + 1;
	}

	~Carta() {}

	string getNombre() { return nombre; }
	string getTemperatura() { return temperatura; }
	string getPicante() { return picante; }
	int getCalorias() { return calorias; }
	float getPrecio() { return precio; }

	void printCarta() {
		cout << "Nombre: " << nombre << endl;
		cout << "Temperatura: " << temperatura << endl;
		cout << "Picante: " << picante << endl;
		cout << "Calorias: " << calorias << endl;
		cout << "Precio: " << precio << endl;
	}

};