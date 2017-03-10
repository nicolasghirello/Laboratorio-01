/**
 * @file 	menu.cpp
 * @brief 	Função para exibir o menu ao usuário e fazêlo escolher entre uma das figuras geométricas.
 * @author 	Rodolpho Erick
 * @since 	10/03/2017
 * @data 	10/03/2017
 */

#include <iostream>
#include "menu.h"
#include "calcArea.h"
#include "calcPerimetro.h"
#include "calcvolume.h"

using namespace std;


/**
 * @brief		Função que será a responsável por encaminhar para o restante do programa de acordo com a solicitação do usuário.
 * @details		A função menu calcula de imediato a área da figura geométrica e encaminha para as demais funções para cálculo 
 *				do perímetro ou do volume.
 */
void menu(int opcaoEscolhida) {
	switch(opcaoEscolhida){
		case 1:				
			cout << "\nA area do triangulo e de " << dadosArTriangulo() << "m2." << endl;
			cout << "O perimetro do triangulo e de " << dadosPerTriangulo() << "m2." << endl;			
			break;
		case 2:
			cout << "\nA area do retangulo e de " << dadosArRetangulo() << "m2.\n" << endl;
			cout << "O perimetro do retangulo e de " << dadosPerRetangulo() << "m2." << endl;			
			break;
		case 3:
			cout << "\nA area do quadrado e de " << dadosArQuadrado() << "m2.\n" << endl;
			cout << "O perimetro do quadrado e de " << dadosPerQuadrado() << "m2." << endl;			
			break;
		case 4:
			cout << "\nA area do circulo e de " << dadosArCirculo() << "m2.\n" << endl;
			cout << "O perimetro do circulo e de " << dadosPerCirculo() << "m2." << endl;		
			break;
		case 5:
			cout << "\nA area da piramide e de " << dadosArPiramide() << "m2.\n" << endl;
			cout << "O volume da piramide e de " << dadosVolPiramide() << "m2." << endl;			
			break;
		case 6:
			cout << "\nA area do cubo e de " << dadosArCubo() << "m2.\n" << endl;
			cout << "O volume do cubo e de " << dadosVolCubo() << "m2." << endl;			
			break;
		case 7:
			cout << "\nA area do paralelepipedo e de " << dadosArParalelepipedo() << "m2.\n" << endl;
			cout << "O volume do paralelepipedo e de " << dadosVolParalelepipedo() << "m2." << endl;			
			break;
		case 8:
			cout << "\nA area da esfera e de " << dadosArEsfera() << "m2.\n" << endl;
			cout << "O volume da esfera e de " << dadosVolEsfera() << "m2." << endl;	
			break;		
		case 0:						
			break;
		default:
			cout << "Digite uma opção válida." << endl;
			menu(opcaoEscolhida);			
	}
}