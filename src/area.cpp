/**
 * @file 	area.cpp
 * @brief 	Funções para cálculo de área das figuras planas e espaciais.
 * @author 	Rodolpho Erick
 * @since 	09/03/2017
 * @data 	10/03/2017
 */

#include <iostream>
#include <cmath>
#include "area.h"

#define PI 3.1415

using namespace std;

/**
 * @brief		Função que calcula a área do triângulo.
 * @param[in] 	base Valor da base do triângulo.
 * @param[in] 	altura Valor da altura do triângulo.
 * @return 		Área do triângulo.
 */
float areaTriangulo(float lado) {
	return (lado * lado) / 2;
}

/**
 * @brief		Função que calcula a área do retângulo.
 * @param[in] 	base Valor da base do retângulo.
 * @param[in] 	altura Valor da altura do retângulo.
 * @return 		Área do retângulo.
 */
float areaRetangulo(float base, float altura) {
	return (base * altura);
}

/**
 * @brief		Função que calcula a área do retângulo.
 * @param[in] 	lado Valor do lado do retângulo.
 * @return 		Área do retângulo.
 */
float areaQuadrado(float lado) {
	return pow(lado, 2);
}

/**
 * @brief		Função que calcula a área do circulo.
 * @param[in] 	raio Valor do raio do circulo.  	
 * @return 		Área do circulo.
 */
float areaCirculo(float raio) {
	return PI * pow(raio, 2);
}

/**
 * @brief		Função que calcula a área do circulo.
 * @param[in] 	lado Valor da aresta da base da pirâmide, que forma um quadrado. 
 * @param[in] 	altura Valor das alturas dos triângulos da pirâmide. 
 * @return 		Área da pirâmide.
 */
float areaPiramide(float lado, float altura) {
	float areaBase = areaQuadrado(lado);
	float areaLateral = 4 * areaTriangulo(lado);

	return areaBase + areaLateral;
}

/**
 * @brief		Função que calcula a área do cubo.
 * @param[in] 	aresta Valor da aresta do cubo.  
 * @return 		Área do cubo.
 */
float areaCubo(float aresta) {
	return 6 * pow(aresta, 2);
}

/**
 * @brief		Função que calcula a área do paralelepípedo.
 * @param[in] 	aresta1 Primeiro valor das três arestas do paralelepípedo.  
 * @param[in]	aresta2 Segundo valor das três arestas do paralelepípedo.
 * @param[in]	aresta3 Terceiro valor das três arestas do paralelepípedo.
 * @return 		Área do paralelepípedo.
 */
float areaParalelepipedo(float &aresta1, float &aresta2, float &aresta3) {
	return ((2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3));
}

/**
 * @brief		Função que calcula a área da esfera.
 * @param[in] 	raio Valor do raio de uma esfera.
 * @return 		Área da esfera.
 */
float areaEsfera(float raio) {
	return 4 * PI * pow(raio, 2);
}