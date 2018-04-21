#include "pilha.hpp"

    // construtor
Pilha::Pilha()
{
   this->pilha = new string[TAM_MAX];
   this->tam =TAM_MAX;
   this->indice =0;

}

    // constutor secundario
Pilha::Pilha(unsigned int t)
{
   this->pilha = new string[t];
   this->tam =t;
   this->indice =0;
}

    // destrutor
Pilha::~Pilha()
{
  delete [] this->pilha;
}

//coloca na pilha
void Pilha::empilha(string item)
{
 if(this->indice < 0)
 {
  cout<<"pilha vazia!!!"<<endl;
 }
 else if(this->indice >= this->tam)
  {
   cout<<"Pilha cheia"<<endl;
  }
  else
  {
 // coloca na pilha
  this->pilha[this->indice] = item;
  // sobe o indice
  ++this->indice;
  }
}

    // tira do topo
string Pilha::desempilha(void)
{
 string temp;
 temp = this->pilha[this->indice];
  this->pilha[this->indice] = "vazio";
   --this->indice;
  return temp;
}

    // diz otamanho
unsigned int Pilha::tamanho()
{
  cout<<"tamaho da pilha"<<this->tam;
  return this->tam;
}

// mostra todo o  conteudo
void Pilha::imprime(void)
{
  cout<<"Conteudo da pilha"<<endl;
 for(int i = this->indice; i >= 0 ; --i)
  {
   cout<<i<<":"<<this->pilha[i]<<endl;
  }

}




