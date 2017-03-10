/**
 * @file 	calcPerimetro.cpp
  * @brief 	Funções para solicitação das medidas das figuras geométricas planas ao usuário.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	10/03/2017
 */

#include <iostream>
#include <cmath>
#include "calcPerimetro.h"
#include "perimetro.h"

using namespace std;

/**
 * @brief		Função para solicitar ao usuário a medida do lado de um triângulo equilátero.
 * @details		A função dadosPerTriangulo solicita ao usuário as informações quanto a medida do lado de um triângulo equilátero
 *				para posterior cálculo de seu perimetro na função perimetroTriangulo.
 * @return 		Perímetro do triângulo.
 */
float dadosPerTriangulo() {
	float lado;	
	cout << "Digite a medida do lado do triangulo, em metros: ";
	cin >> lado;	

	return perimetroTriangulo(lado);	
}

/**
 * @brief		Função para solicitar ao usuário as medidas do retângulo.
 * @details		A função dadosPerRetangulo solicita ao usuário as informações quanto as medidas da base e da altura do retângulo
 *				para posterior cálculo de seu perimetro na função perimetroRetangulo.
 * @return 		Perímetro do retângulo.
 */
float dadosPerRetangulo() {
	float baseRetangulo, alturaRetangulo;
	cout << "Digite a medida da base do retangulo, em metros: ";
	cin >> baseRetangulo;
	cout << "Digite a medida da altura do retangulo, em metros: ";
	cin >> alturaRetangulo;

	return perimetroRetangulo(baseRetangulo, alturaRetangulo);
}

/**
 * @brief		Função para solicitar ao usuário a medida do lado quadrado.	
 * @details		A função dadosPerQuadrado solicita ao usuário as informação quanto a medida do lado do quadrado para posterior
 *				cálculo do perimetro na função perimetroQuadrado. 
 * @return 		Perímetro do quadrado.
 */
float dadosPerQuadrado() {
	float ladoQuadrado;
	cout << "Digite a medida do lado do quadrado, em metros: ";
	cin >> ladoQuadrado;

	return perimetroQuadrado(ladoQuadrado);
}

/**
 * @brief		Função para soliciar ao usuário a medida do raio do circulo.
 * @details		A função dadosPerCirculo solicita ao usuário a informação quanto a medida do raio do circulo para posterior
 *				cálculo do perimetro na função perimetroCirculo.
 * @return 		Perímetro do circulo.
 */
float dadosPerCirculo() {
	float raioCirculo;
	cout << "Digite a medida do raio do circulo, em metros: ";
	cin >> raioCirculo;

	return perimetroCirculo(raioCirculo);
}