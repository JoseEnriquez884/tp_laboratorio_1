/*
 * Aritmetica.h
 *
 *  Created on: 25 mar. 2021
 *      Author: Jose
 */

#ifndef ARITMETICA_H_
#define ARITMETICA_H_


/** \brief Calcula la suma de 2 numeros flotantes
 *
 * \param float primer operando flotante
 * \param float segundo operando flotante
 * \return float resultado de la suma de 2 numeros flotantes
 *
 */
float SumarNumeros(float,float);

/** \brief Calcula la resta de 2 numeros flotantes
 *
 * \param float primer operando flotante
 * \param float segundo operando flotante
 * \return float resultado de la resta de 2 numeros flotantes
 *
 */
float RestarNumeros(float,float);

/** \brief Calcula la multiplicacion de 2 numeros flotantes
 *
 * \param float primer operando flotante
 * \param float segundo operando flotante
 * \return float resultado de la multiplicacion de 2 numeros flotantes
 *
 */
float MultiplicarNumeros(float,float);

/** \brief Calcula la division de 2 numeros flotantes
 *
 * \param float primer operando flotante (dividendo)
 * \param float segundo operando flotante (divisor)
 * \return float resultado de la division de 2 numeros flotantes
 *
 */
float DividirNumeros(float,float);

/** \brief Calcula el factorial de un numero entero
 *
 * \param int numero entero del cual se calculara el factorial
 * \return long int devuelve el resultado del factorial del numero entero
 *
 */
long int CalcularFactorial(int);


#endif /* ARITMETICA_H_ */
