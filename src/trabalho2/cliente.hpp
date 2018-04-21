#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include<string>

using namespace std;

class Cliente
{
    public:
        // construtor
        Cliente(string nom);
        // destrutor
        virtual ~Cliente();
// get e set
     inline string get_nome() { return this->nome; }
     inline void set_nome(string val) { this->nome = val; }

    private:
        string nome;
};

#endif // CLIENTE_HPP
