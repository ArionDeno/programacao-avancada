#include "caminhao.hpp"

Caminhao::Caminhao(int cap, int larg, int alt, int pe,int vel,int pr, string pla)
{
 this->capacidade = cap;
 this->largura = larg;
 this->altura  = alt;
 Veiculo(pe,vel,pr,pla);
 cout<<"Objeto Caminhao criado com Exito"<<endl;
}

Caminhao::~Caminhao()
{
 cout<<"Objeto Caminhao destruido com Exito"<<endl;
}

   // metodos get e set
void Caminhao::set_capacidade(int c)
{
 this->capacidade = c;
}

int Caminhao::get_capacidade()
{
 return this->capacidade;
}

void Caminhao::set_largura(int l)
{
  this->largura = l;
}


int Caminhao::get_largura()
{
  return this->largura;
}

void Caminhao::set_altura(int a)
{
  this->altura =a;
}

int Caminhao::get_altura()
{
  return this->altura;
}

void Caminhao::mostrar_dados()
{
  cout<<"/////////////CAMINAO//////////////////"<<endl;

  cout<<"Capacidade em Toneladas: ->"<<this->get_capacidade()<<endl;
  cout<<"Largura: m -> "<<this->get_largura()<<endl;
  cout<<"Altura: m ->"<<this->get_altura()<<endl;
  cout<<"Placa -> "<<this->get_placa()<<endl;
  cout<<"Preco -> "<< this->get_preco()<<endl;
  cout<<"Peso kg -> "<<this->get_peso()<<endl;
  cout<<"Velocidade MAX KM/H -> "<<get_velo()<<endl<<endl;
  cout<<"\\\\\\\\\\\\\\\CAMINAO\\\\\\\\\\\\\\\\\\"<<endl;
}
