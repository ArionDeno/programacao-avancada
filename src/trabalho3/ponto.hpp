#ifndef PONTO_HPP
#define PONTO_HPP

#include<iostream>
#include<cstdlib>
#include<ctime>

#define LMT 1025

using namespace std;

class Ponto
{
    public:
//construtores
Ponto();
Ponto(int xx, int yy);
 virtual ~Ponto();
// sobrecarga operadores
Ponto& operator +( const Ponto &p);
Ponto& operator -( const Ponto &p);
Ponto& operator *( const Ponto &p);
Ponto& operator *( const int e);
int operator [](const int ix);

    private:
        int x,y;
};

#endif // PONTO_HPP
