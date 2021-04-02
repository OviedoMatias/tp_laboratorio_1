#include <stdio.h>
#include "tool_kits.h"

void Saludar(void){
	printf("hola mundo");
};

int Ask_number(char message[]){
	int enter_number;
	setbuf(stdout, NULL);

  printf("\n Ingrese un %s: ",message);
  scanf("%d", &enter_number);
  return enter_number;
};

int Sum(int numOne, int numTwo)
{
	int result;
	result = numOne + numTwo;
	return result;
};

int Subtraction(int numOne, int numTwo)
{
	int result;
	result = numOne - numTwo;
	return result;
};

int Multiplication(int numOne, int numTwo)
{
	int result;
	result = numOne * numTwo;
	return result;
};

int Division(int numOne, int numTwo)
{
	int result;
	result = numOne / numTwo;
	return result;
};

int Factory(int numOne)
{
	int result;
	result = numOne * (numOne-1);
	return result;
};
