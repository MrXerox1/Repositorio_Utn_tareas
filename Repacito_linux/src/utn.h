/*
 * utn.h
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */

#ifndef UTN_H_
#define UTN_H_

#define EXIT_ERROR -1
#define CANT_REINTENTOS 2

int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getInt(		int *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getFloat(	float *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getChar(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int esNombreOApellido(char *pResultado,char *pMensajeError);
int esSoloNumeros(char *pResultado,char *pMensajeError);
int esSoloNumerosPositivos(char *pResultado,char *pMensajeError);
int esSoloNumerosFlotantes(char *pResultado,char *pMensajeError);
int esAlfaNumerico(char *pResultado,char *pMensajeError);

int getValidIntFromString(	int *pResultado,
							char *pMensaje,
							char *pMensajeError,
							int minimo,
							int maximo,
							int reintentos);

int getValidFloatFromString(float *pResultado,
							char *pMensaje,
							char *pMensajeError,
							int minimo,
							int maximo,
							int reintentos);

int utn_isValidInt (char* string);

int utn_isValidName (char* string);

#endif /* UTN_H_ */
