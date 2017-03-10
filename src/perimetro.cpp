/**
 * @file 	perimetro.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	09/03/2017
 */

#include <iostream>
#include <cmath>
#include "perimetro.h"

using namespace std;

/**
 * @brief		Função que calcula o perimetro do triângulo.
 * @param[in] 	lado1 Primeiro valor dos três lados do triângulo. 
 * @param[in]	lado2 Segundo valor dos três lados do triângulo.
 * @param[in]	lado3 Terceiro valor dos três lados do triângulo.
 * @return 		Perimetro do triângulo.
 */

float perimetroTriangulo(float &lado1, float &lado2, float &lado3){
	return(lado1 + lado2 + lado3);
}

/**
 * @brief		Função que calcula o perimetro do retângulo.
 * @param[in] 	baseRetangulo Valor da aresta do retângulo.
 * @param[in] 	alturaRetangulo Valor da aresta do retângulo.
 * @return 		Perimetro do retângulo.
 */

float perimetroRetangulo(float baseRetangulo, float alturaRetangulo){
	return(2 * (baseRetangulo + alturaRetangulo));
}

/**
 * @brief		Função que calcula o perimetro do quadrado.
 * @param[in]	ladoQuadrado Valor do lado do quadrado.
 * @return 		Perimetro do quadrado.
 */

float perimetroQuadrado(float ladoQuadrado){
	return(4 * ladoQuadrado);
}

/**
 * @brief		Função que calcula o perimetro do círculo.
 * @param[in] 	raioCirculo Valor do raio do círculo.
 * @return 		Perimetro do círculo.
 */

float perimetroCirculo(float raioCirculo){
	return(2 * M_PI * raioCirculo);
}