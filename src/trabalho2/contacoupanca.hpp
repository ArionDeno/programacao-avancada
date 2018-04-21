#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <iostream>
#include<string>


#include "conta.hpp"

using namespace std;

#define JUROS_CP 0.08f

class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(int numero, Cliente *cliente) : Conta(numero,cliente) {}
        virtual ~ContaPoupanca();

        void extrato();
        virtual void aplica_juros_diarios( int dias);
};

#endif // CONTAPOUPANCA_H
