#ifndef CARRO_HPP_INCLUDED
#define CARRO_HPP_INCLUDED

#include <iostream>
#include"veiculo.hpp"

using namespace std;

/*
atributos: modelo e cor
*/
 enum Cores{BRANCO,AZUL,ROSA,AMARELO,VRMELHO,LARANJA,VERDE};



class Carro : Veiculo
{


 private:
      enum Cores cor;
      string modelo;


 public:

  Carro():
    cor(BRANCO) ,modelo("nenhum")
    {}



  Carro(enum Cores c, string mode,int pe,int vel,int pr, string pla);

  // destrutor
  virtual ~Carro();

 /*
 metodos acessores mutantes
 */

 void set_modelo(string m);
 virtual string get_modelo();

 void set_cor(enum Cores c);
 virtual enum Cores get_cor(void);


 void mostrar_dados();

};
#endif // CARRO_HPP_INCLUDED
