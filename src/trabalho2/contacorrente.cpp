#include "contacorrente.hpp"


ContaCorrente::~ContaCorrente()
{
 cout <<"Conta Corrente destruida"<<endl;
}


void ContaCorrente::extrato()
{
 cout<<"---Banco -- Banestado--"<<endl;
 cout<<"__________Extrato--CC_____________"<<endl;
 cout<<"Estrato para simples conferencia"<<endl;
 cout<<"Saldo atual: R$ "<<this->saldo<<endl;
 cout<<"---Banco -- Banestado--"<<endl;
}

void ContaCorrente::aplica_juros_diarios( int dias)
{
  this->saldo += ((this->saldo *JUROS_CC) * dias);
}
