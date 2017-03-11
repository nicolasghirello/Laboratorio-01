/**
 * @file 	volume.cpp
 * @brief 	Funções para cálculo de volume das figuras espaciais.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include <iostream>
#include <cmath>
#include "volume.h"
#include "menu.h" 

#define PI 3.1415

using namespace std;

/**
 * @brief		Função que calcula o volume da pirâmide.
 * @param[in] 	ladoQuadrado Valor do lado da base da pirâmide.
 * @param[in] 	alturaTriangulo Valor da altura da pirâmide. 
 */
void volumePiramide(float ladoQuadrado, float alturaTriangulo){
	cout << "O volume da piramide e de " << (1/3) * (pow(ladoQuadrado, 2) * alturaTriangulo) << "m3." << endl;
	menu();	
}

/**
 * @brief		Função que calcula o volume do Cubo.
 * @param[in] 	arestaCubo Valor da aresta do Cubo.
 */
void volumeCubo(float arestaCubo){
	cout << "O volume do cubo e de " << pow(arestaCubo,3) << "m3." << endl;
	menu();	
}

/**
 * @brief		Função que calcula o volume do paralelepipedo.
 * @param[in] 	aresta1 Primeiro valor das três arestas do paralelepípedo.  
 * @param[in]	aresta2 Segundo valor das três arestas do paralelepípedo.
 * @param[in]	aresta3 Terceiro valor das três arestas do paralelepípedo.
 */
void volumeParalelepipedo(float &aresta1, float &aresta2, float &aresta3){
	cout << "O volume do paralelepipedo e de " << aresta1 * aresta2 * aresta3 << "m3." << endl;
	menu();	
}

/**
 * @brief		Função que calcula o volume da esfera.
 * @param[in] 	raioEsfera Valor do raio da esfera.
 */
void volumeEsfera(float raioEsfera){
	cout << "O volume da esfera e de " << (4/3) * (PI * pow(raioEsfera,3)) << "m3." << endl;
	menu();		
}