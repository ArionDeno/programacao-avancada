#ifndef UX_TEMPO_HPP
#define UX_TEMPO_HPP

#include<iostream>
#include<cstdlib>

#include "tempo.hpp"

using namespace std;

class Ux_Tempo : public A_Tempo
{
    public:
        Ux_Tempo();
        virtual ~Ux_Tempo();
        void horas_agora(); // metodo concreto
};

#endif // UX_TEMPO_HPP
