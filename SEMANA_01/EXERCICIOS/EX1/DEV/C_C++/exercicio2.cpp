//2) Faça uma função que recebe um número inteiro e retorna este valor inserido em formato de return

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int inteiro(){
  
  int numero;
  int numero_inteiro;
  printf("digite um numero inteiro: ");
  scanf("%i", &numero);
  numero_inteiro = numero;
  return numero_inteiro;
}

int main(){
  int retorno;
  retorno = inteiro();
  printf("%i", retorno);
  return  0;
  
}
