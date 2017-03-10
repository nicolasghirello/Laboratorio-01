
/**
 * @file 	volume.cpp
 * @brief 	Funções para cálculo de volume das figuras espaciais.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	09/03/2017
 */

#include <iostream>
#include <cmath>
#include "volume.h"

/**
 * @brief		Função que calcula o volume da pirâmide.
 * @param[in] 	ladoQuadrado Valor do lado da base da pirâmide.
 * @param[in] 	alturaTriangulo Valor da altura da pirâmide.
 * @return 		Volume da pirâmide.
 */

float volumePiramide(float ladoQuadrado, float alturaTriangulo){
	return((1/3) * pow(ladoQuadrado, 2) * altura);
}

/**
 * @brief		Função que calcula o volume do Cubo.
 * @param[in] 	aresta Valor da aresta do Cubo.
 * @return 		Volume do Cubo.
 */

float volumeCubo(float arestaCubo){
	return(pow(aresta,3));
}

/**
 * @brief		Função que calcula o volume do paralelepipedo.
 * @param[in] 	aresta1 Primeiro valor das três arestas do paralelepípedo.  
 * @param[in]	aresta2 Segundo valor das três arestas do paralelepípedo.
 * @param[in]	aresta3 Terceiro valor das três arestas do paralelepípedo.
 * @return 		Volume do paralelepipedo.
 */

float volumeParalelepipedo(float &aresta1, float &aresta2, float &aresta3){
	return(aresta1 * aresta2 * aresta3);
}

/**
 * @brief		Função que calcula o volume da esfera.
 * @param[in] 	raioEsfera Valor do raio da esfera.
 * @return 		Volume da esfera.
 */

float volumeEsfera(float raioEsfera){
	return((4/3)*M_PI*pow(raioEsfera,3));
}