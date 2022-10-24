#include <iostream>
#include <cmath>
//1) Faça uma função que receba 3 valores: um valor mínimo, um valor máximo e um terceiro valor. A função deve retornar se o terceiro valor inserido está mais próximo do valor mínimo ou do máximo, em porcentagem (regra de 3)
using namespace std;

int funcaoValor(){
  float numero=0.0;
  float valor_minimo = numero;
  float valor_maximo = numero;
  float terceiro = numero;

  printf("Digite um valor: \n");
  scanf("%f", &terceiro);
  //usando 25%
  valor_minimo = terceiro-(terceiro*0.25);
  valor_maximo = terceiro+(terceiro*0.25);
  printf("Valor mínimo com 25/100 é %f\n", valor_minimo);
  printf("Valor maximo com 25/100 é %f\n", valor_maximo);
  return 0;
  
}

int main(){
  int retorno;
  retorno = funcaoValor();

  return retorno;
}

  