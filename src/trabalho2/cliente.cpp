#include "cliente.hpp"

Cliente::Cliente(string nom)
{
  this->nome = nom;
  cout<<"objeto cliente criado"<<endl;
}

Cliente::~Cliente()
{
  cout<<"objeto cliente Destruido"<<endl;
}
