/**
 * @file 	calcvolume.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas espaciais ao usuário.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	10/03/2017
 */

#include <iostream>
#include <cmath>
#include "calcVolume.h"
#include "volume.h"

using namespace std;

/**
 * @brief		Função para solicitar ao usuário as medidas da pirâmide.
 * @details		A função dadosVolPiramide solicita ao usuário as informações quanto a medida do lado da base da pirâmide, 
 *				que é um quadrado, e da altura da pirâmide, que é a medida de uma das arestas dos triângulo.
 * @return 		Volume da pirâmide.
 */
float dadosVolPiramide() {
	float ladoQuadrado, alturaTriangulo;
	cout << "Digite a medida do lado do quadrado que forma a base, em metros: ";
	cin >> ladoQuadrado;
	cout << "Digite a medida da altura da piramide, em metros: ";
	cin >> alturaTriangulo;

	return volumePiramide(ladoQuadrado, alturaTriangulo);
}

/**
 * @brief		Função para solicitar ao usuário a medida da aresta do cubo.
 * @details		A função dadosVolCubo solicita ao usuário a informação quanto a medida da aresta do cubo, para posterior 
 *				calculo do volume pela função volumeCubo.
 * @return 		Volume do cubo.
 */
float dadosVolCubo() {
	float arestaCubo;
	cout << "Digite a medida da aresta do cubo, em metros: ";
	cin >> arestaCubo;

	return volumeCubo(arestaCubo);
}

/**
 * @brief		Função para solicitar ao usuário as medidas do paralelepípedo.
 * @details		A função dadosVolParalelepipedo solicita ao usuário as informações quanto as medidas das três arestas
 *				de um paralelepípedo para posterior cálculo do volume pela função volumeParalelepipedo.	
 * @return 		Volume do paralelepípedo.
 */
float dadosVolParalelepipedo() {
	float *arestas = new float[3];
	for (int i = 0; i < 3; i++) {
		cout << "Digite a medida da aresta " << i + 1 << " do paralelepipedo, em metros: ";
		cin >> arestas[i];
	}

	return volumeParalelepipedo(arestas[0], arestas[1], arestas[2]);

	delete [] arestas;
}

/**
 * @brief		Função para solicitar ao usuário a medida da esfera.
 * @details		A função dadosVolEsfera solicita ao usuário a informação quanto a medida do raio da esfera para posterior
 *				calculo do volume pela função volumeEsfera.
 * @return 		Volume da esfera.
 */
float dadosVolEsfera() {
	float raioEsfera;
	cout << "Digite a medida do raio da esfera, em metros: ";
	cin >> raioEsfera;

	return volumeEsfera(raioEsfera);	
}