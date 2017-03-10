/**
 * @file 	perimetro.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	10/03/2017
 */

#include <iostream>
#include <cmath>
#include "perimetro.h"

#define PI 3.1415

using namespace std;

/**
 * @brief		Função que calcula o perimetro do triângulo equilátero.
 * @param[in] 	lado Valor dos três lados do triângulo equi~´atero.
 * @return 		Perimetro do triângulo.
 */
float perimetroTriangulo(float lado){
	return (lado + lado + lado);
}

/**
 * @brief		Função que calcula o perimetro do retângulo.
 * @param[in] 	baseRetangulo Valor da aresta do retângulo.
 * @param[in] 	alturaRetangulo Valor da aresta do retângulo.
 * @return 		Perimetro do retângulo.
 */
float perimetroRetangulo(float baseRetangulo, float alturaRetangulo){
	return (2 * (baseRetangulo + alturaRetangulo));
}

/**
 * @brief		Função que calcula o perimetro do quadrado.
 * @param[in]	ladoQuadrado Valor do lado do quadrado.
 * @return 		Perimetro do quadrado.
 */
float perimetroQuadrado(float ladoQuadrado){
	return (4 * ladoQuadrado);
}

/**
 * @brief		Função que calcula o perimetro do círculo.
 * @param[in] 	raioCirculo Valor do raio do círculo.
 * @return 		Perimetro do círculo.
 */
float perimetroCirculo(float raioCirculo){
	return (2 * PI * raioCirculo);
}