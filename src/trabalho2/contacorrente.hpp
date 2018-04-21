#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

#include <iostream>
#include<string>

#include "conta.hpp"

using namespace std;

#define JUROS_CC 0.01f

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(int numero,Cliente *cliente)
         :Conta(numero,cliente)  {}
        virtual ~ContaCorrente();
        void extrato();
        virtual void aplica_juros_diarios( int dias);
};

#endif // CONTACORRENTE_HPP
