#ifndef WIN_TEMPO_HPP
#define WIN_TEMPO_HPP


#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


class Win_Tempo
{
    public:
        Win_Tempo();
        virtual ~Win_Tempo();
   // implementando meotodo abstrato
   void horas_agora(); // metodo concreto

};

#endif // WIN_TEMPO_HPP
