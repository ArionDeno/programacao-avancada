#include "contacoupanca.hpp"

ContaPoupanca::~ContaPoupanca()
{
  cout<<"Conta poupanca destruida"<<endl;
}


void ContaPoupanca::extrato()
{
 cout<<"---Banco -- Banestado--"<<endl;
 cout<<"__________Extrato--CP_____________"<<endl;
 cout<<"Estrato para simples conferencia"<<endl;
 cout<<"Saldo atual: R$ "<<this->saldo<<endl;
 cout<<"---Banco -- Banestado--"<<endl;
}

void ContaPoupanca::aplica_juros_diarios( int dias)
{
  this->saldo += ((this->saldo *JUROS_CP) * dias);
}
