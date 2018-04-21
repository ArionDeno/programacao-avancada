#ifndef CAMINHONETE_HPP_INCLUDED
#define CAMINHONETE_HPP_INCLUDED

#include<iostream>

using namespace std;

#include "carro.hpp"
#include "caminhao.hpp"

class Caminhonete :public Carro,  public Caminhao
{

 public:

   Caminhonete(int capacidade, int largura, int altura, int peeso,int velocidade,int prreco, string placa, string modelo, enum Cores cor);

    ~Caminhonete();

    void mostrar_dados();


};

#endif // CAMINHONETE_HPP_INCLUDED
