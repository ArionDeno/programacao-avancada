#include "veiculo.hpp"


Veiculo::Veiculo(int pe,int vel,int pr, string pla)
{
  this->peso = pe;
  this->velo = vel;
  this->preco = pr;
  this->placa = pla;
  cout<<"objeto veiculo criado"<<endl;
}

    // destrutor
Veiculo::~Veiculo()
{
 cout<<"objeto veiculo destruido"<<endl;
}



void Veiculo::set_preco( unsigned int p)
{
  this->preco = p;
}

int Veiculo::get_preco(void)
{
 return this->preco;
}

void Veiculo::set_peso( unsigned int p)
{
  this->peso = p;
}

int Veiculo::get_peso(void)
{
 return this->peso;
}

void Veiculo::set_velo( unsigned int v)
{
  this->velo = v;
}

int Veiculo::get_velo(void)
{
  return this->velo;
}

void Veiculo::set_placa( string s)
{
  this->placa =s;
}

string Veiculo::get_placa(void)
{
   return this->placa;
}



void Veiculo::mostrar_dados()
{
  cout<<"-----VEICULO----------"<<endl;
  cout<<"Placa -> "<<this->get_placa()<<endl;
  cout<<"Preco -> "<< this->get_preco()<<endl;
  cout<<"Peso kg -> "<<this->get_peso()<<endl;
  cout<<"Velocidade MAX KM/H -> "<<get_velo()<<endl<<endl;
  cout<<"-----VEICULO----------"<<endl;
}
