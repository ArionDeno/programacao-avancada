#include "caminhonete.hpp"

Caminhonete::Caminhonete(int capacidade, int largura, int altura,
                          int peeso,int velocidade,int prreco,
                          string placa, string modelo, enum Cores cor)
:Carro(cor,modelo,prreco,velocidade,prreco,placa),
Caminhao(capacidade,largura,altura,peeso,velocidade,prreco,placa)
{}

Caminhonete::~Caminhonete()
{
    /*  nuca chama o destrutor nas classes filhas
    eles sao chamados autoamticamernte
    ~Carro();
    ~Caminhao();
    */
  cout<<"Objeto Caminhonete destrruido com exito"<<endl;
}


void Caminhonete::mostrar_dados()
{
   cout<<"*************CAMINHONETE********************"<<endl;
   cout<<"COR ->"<<Carro::get_cor();
   cout<<"Modelo ->" <<Carro::get_modelo();
   cout<<"Placa -> "<<Caminhao::get_placa()<<endl<<endl;
   cout<<"Preco -> "<<Caminhao::get_preco()<<endl;
   cout<<"Peso kg -> "<<Caminhao::get_peso()<<endl;
   cout<<"Velocidade MAX KM/H -> "<<Caminhao::get_velo()<<endl<<endl;
   cout<<"Largura: m -> "<<Caminhao::get_largura()<<endl;
   cout<<"Altura: m ->"<<Caminhao::get_altura()<<endl;
   cout<<"*************CAMINHONETE********************"<<endl;
}
