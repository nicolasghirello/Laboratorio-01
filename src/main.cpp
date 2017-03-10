#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int opcao;
	while(1){

		//Figuras planas (área + perimetro)
		cout << "(1) Triangulo equilatero" << endl;
		cout << "(2) Retangulo" << endl;
		cout << "(3) Quadrado" << endl;
		cout << "(4) Circulo" << endl;
		//Figuras geométricas (área + volume)
		cout << "(5) Piramide com base quadrangular" << endl;
		cout << "(6) Cubo" << endl;
		cout << "(7) Paralelepipedo" << endl;
		cout << "(8) Esfera" << endl;

		cout << "(0) Sair" << endl;
		cout << "Digite sua opcao: " << endl;

		cin >> opcao;
		switch(opcao){
			case 1:
				cout << "opcao 1" << endl;
				break;
			case 2:
				cout << "opcao 2" << endl;		
				break;
			case 3:
				cout << "opcao 3" << endl;		
				break;
			case 4:
				cout << "opcao 4" << endl;		
				break;
			case 5:
				cout << "opcao 5" << endl;		
				break;
			case 6:
				cout << "opcao 6" << endl;		
				break;
			case 7:
				cout << "opcao 7" << endl;		
				break;
			case 8:
				cout << "opcao 8" << endl;		
				break;
			case 9:
				cout << "opcao 9" << endl;		
				break;
			case 0:
				cout << "Encerrando..." << endl;		
				break;
			default:
				cout << "Digite uma opção válida" << endl;
				main();
		}
	}
}