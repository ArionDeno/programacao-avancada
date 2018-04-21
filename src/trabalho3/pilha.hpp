#ifndef PILHA_HPP
#define PILHA_HPP

#include <iostream>
#include<cstdlib>

using namespace std;

#define TAM_MAX  100

class Pilha
{
    public:
        // construtor
        Pilha();
        // constutor secundario
        Pilha(unsigned int t);

         // destrutor
        ~Pilha();

        //coloca na pilha
       void empilha(string item);

        // tira do topo
        string desempilha(void);

        // diz otamanho
        unsigned int tamanho();

        // mostra todo o  conteudo
        void imprime(void);

// sobrecarga operadores
void operator+=(const string &s)
{
  this->empilha(s);
}
// sobrecarga operadores
string operator--()
{
 return(this->desempilha());
}


string operator--(int)
{
 return(this->desempilha());
}



    private:
/*
  pilha -> o ponteirto que tera a pilha
  tam = tamanho
  indice = indiece da pilha
*/
       string *pilha;
       unsigned int tam, indice;
};

#endif // PILHA_HPP

/*
git config ...

git clone https://github.com/ArionDeno/programacao-avancada.git
cd programacao-avancada
copirt o gitignore para pasta raiz programaçao avancasa
copiar src
git add -A
git commit -m "import inicial"
git push

*/
