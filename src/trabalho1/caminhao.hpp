#ifndef CAMINHAO_HPP_INCLUDED
#define CAMINHAO_HPP_INCLUDED

#include<iostream>

using namespace std;

#include"veiculo.hpp"

class Caminhao :public Veiculo
{
  private:
     unsigned short int capacidade, largura, altura;

  public:

  // construtor vazio
    Caminhao():
       capacidade(0) , largura(0), altura(0)
    {}

    Caminhao(int cap, int larg, int alt, int pe,int vel,int pr, string pla);

    virtual ~Caminhao();

   // metodos get e set

    void set_capacidade(int );
   virtual int get_capacidade();

    void set_largura(int );
   virtual int get_largura();

    void set_altura(int );
    virtual int get_altura();

    void mostrar_dados();


};

#endif // CAMINHAO_HPP_INCLUDED
