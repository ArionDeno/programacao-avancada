#include <iostream>
#include<cstdlib>

#include"pilha.hpp"

using namespace std;

int main(int argc, char *argv[])
{

 // cria a pilha
 Pilha *pilhas = new Pilha();

 // coloca coisas na pilha
  pilhas->empilha("carro");
  pilhas->empilha("moto");
  pilhas->empilha("vaca");
  pilhas->empilha("pneu");
  pilhas->empilha("tijolo");
  pilhas->empilha("Objective - C");


// remove coisas da pilha
  cout<<"valor: "<<pilhas->desempilha()<<endl;
  cout<<"valor: "<<pilhas->desempilha()<<endl;
  cout<<"valor: "<<pilhas->desempilha()<<endl;
  cout<<"valor: "<<pilhas->desempilha()<<endl;
  // mostra a pilha
  pilhas->imprime();cout<<"valor: "<<pilhas->desempilha()<<endl;
  cout<<"valor: "<<pilhas->desempilha()<<endl;
  cout<<"valor: "<<pilhas->desempilha()<<endl;


  // apaga da memoria
 delete pilhas;
 return EXIT_SUCCESS;
}
