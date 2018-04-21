
#ifndef VEICULO_HPP_INCLUDED
#define VEICULO_HPP_INCLUDED

#include <iostream>
using namespace std;


class Veiculo
{

 private:
     unsigned short int peso ,velo, preco;
     string placa;
 public:

//destrutor vazio
    Veiculo():
        peso(0) ,velo(0), preco(0), placa("0")
    {}

    Veiculo(int pe,int vel,int pr, string pla);

    // destrutor
    virtual ~Veiculo();


// get e set
 void set_preco(unsigned int p);
 virtual int get_preco(void);

 void set_peso(unsigned int p);
 virtual int get_peso(void);

 void set_velo(unsigned int v);
 virtual int get_velo(void);

 void set_placa( string s);
 virtual string get_placa(void);

  virtual void mostrar_dados();


};
#endif // VEICULO_HPP_INCLUDED
