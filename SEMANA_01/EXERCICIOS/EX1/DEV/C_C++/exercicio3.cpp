#include <iostream>
#include <cmath>
//3) Faça uma função que que insere novos valores em um vetor cujos argumentos serão: valor a ser inserido, capacidade de armazenamento de valores (número de posições), qual foi a última posição preenchida e o nome do vetor criado. A função funcionará como um "append" do Python controlado.
using namespace std;

int novosValor(){
  int numero=0;
  //valores a ser inserido
  int vet1=numero, vet2=numero, vet3=numero;
  cout<<"digite o primeiro valor: "<<endl;
  cin>>vet1;
  cout<<"digite o segundo valor: "<<endl;
  cin>>vet2;
  cout<<"digite o terceiro valor: "<<endl;
  cin>>vet3;
  
  //capacidade de armazenamento de valores (número de posições).
  
  int vetor[]={vet1, vet2, vet3};
  int novo = vet1 || vet2 || vet3;
  
  
  for(int i=0; i<vetor[i]; i++){
     printf("\nPosição %i", i);
    
    cout<<endl;
  cout<<"numero dessa posição: "<<vetor[i]<<endl;
   
  } 
//qual foi a última posição preenchida e o nome do vetor criado.
  cout<<"A última posição preenchida: "<<vet3<<" da posição do vetor "<<endl;
  
//OBS: NÃO ENTENDI QUANDO NO ENCUNCIADO DIZ "NOME DO VETOR CRIADO". É QUE NOME? É DA VARIÁVEL? DEVER-SE-ÃO SER MAIS CLARO E ESPECÍFICOS NA PRÓXIMA VEZ.
  
  return 0;
}

int main(){
  int retorno;
  retorno = novosValor();
  return retorno;
}
