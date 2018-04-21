#include "conta.hpp"

Conta::Conta(int num,Cliente *cliente)
{
  this->numero = num;
  this->cliente= cliente;
  cout<<"Conta criado "<<endl;
  cout<<"Numero:"<<num<<endl;
  cout<<"Nome cliente: "<<cliente->get_nome()<<endl;
}

Conta::~Conta()
{
 cout<<"Conta destruido "<<endl;
}


void Conta::deposita(float v)
{
  this->saldo += (int)v;
}

void Conta::retira(float v)
{
 this->saldo -= (int)v;
}

void Conta::tranfere(Conta *dest, float v)
{
  this->saldo -=(int)v;
  dest->deposita(v);
}

void Conta::extrato()
{
 cout<<"---Banco -- Banestado--"<<endl;
 cout<<"Estrato para simples conferencia"<<endl;
 cout<<"Saldo atual: R$ "<<this->saldo<<endl;
 cout<<"---Banco -- Banestado--"<<endl;
}
