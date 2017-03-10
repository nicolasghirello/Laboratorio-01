/**
 * @file 		main.cpp
 * @brief		Programa que calcula a área e perímetro para figuras geométricas planas e a área e volume para figuras geométricas espaciais.
 * @author		Nicolas Ghirello e Rodolpho Erick.
 * @since		09/03/2017
 * @data		10/03/2017
 */

#include <iostream>
#include "menu.h"

using std::cin;
using std::cout;
using std::endl; 

/**
 * @brief		Função principal.
 * @details		A função principal apresenta o menu ao usuário que encaminhará para uma outra função onde haverá outras chamadas para cálculo de área, 
 *				perímetro ou volume.
 */ 
int main(){
	int opcao;
	
	//Figuras planas (área + perimetro)
	cout << "\n(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circulo" << endl;
	//Figuras geométricas (área + volume)
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	cout << "\nDigite sua opcao: ";

	cin >> opcao;

	menu(opcao);	

	return 0;
}