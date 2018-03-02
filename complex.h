#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
#include <string.h>
#include "stdafx.h"
using namespace std;

typedef struct complex *Complex;

typedef struct complex{
	int real;
	int imag;
}complex;

void printMenu();
void printResult();

char whichOp(char op);

Complex complexCreate(complex c1);

Complex complexAdd(double c1, double c2);
Complex complexSub(double c1, double c2);
Complex complexMult(double c1, double c2);
Complex complexDiv(double c1, double c2);
void printError();

Complex complexCreateFromPolar(double absVal, double arg);
int complexToString(complex c, char buffer[], int size);


#endif COMPLEX_H
