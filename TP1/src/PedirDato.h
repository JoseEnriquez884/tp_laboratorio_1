/*
 * PedirDato.h
 *
 *  Created on: 26 mar. 2021
 *      Author: Jose
 */

#ifndef PEDIRDATO_H_
#define PEDIRDATO_H_


/** \brief consigue un numero entero
 *
 * \param char[] cadena para mostrarle al usuario
 * \param char[] cadena con mensaje de error para que el usuario reingrese un numero entero valido
 * \param int numero minimo que se va a poder ingresar
 * \param int numero maximo que se va a poder ingresar
 * \return int devuelve el entero que ingreso el usuario
 *
 */
int GetInt(char[],char[],int,int);


/** \brief consigue un numero flotante
 *
 * \param char[] cadena para mostrarle al usuario
 * \param char[] cadena con mensaje de error para que el usuario reingrese un numero entero valido
 * \param int numero minimo que se va a poder ingresar
 * \param int numero maximo que se va a poder ingresar
 * \return float devuelve el numero flotante que ingreso el usuario
 *
 */
float GetFloat(char[],char[],int,int);


#endif /* PEDIRDATO_H_ */
