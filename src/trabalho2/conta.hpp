#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include<string>

#include "cliente.hpp"

using namespace std;

class Conta
{
    public:
        Conta(int num, Cliente *cliente);
        virtual ~Conta();

        // meotodos
        void deposita(float v);
        void retira(float v);
        void tranfere(Conta *dest, float v);
        void extrato();
        virtual void aplica_juros_diarios( int dias) =0;

    protected:
        int numero;
        int saldo;
        Cliente *cliente;
};

#endif // CONTA_HPP
