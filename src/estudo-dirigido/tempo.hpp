#ifndef TEMPO_HPP
#define TEMPO_HPP

#include<iostream>
#include<ctime>

using namespace std;

// classe abstrata

class A_Tempo
{
    public:
        A_Tempo();
        virtual ~A_Tempo();

        // metodo virtual puro, que deverá ser implementado na classe concreta
        virtual void horas_agora()=0;

        unsigned int gethora() { return hora; }
        void set_hora(unsigned int val) { hora = val; }

        unsigned int set_minuto() { return minuto; }
        void get_minuto(unsigned int val) { minuto = val; }

        unsigned int get_segundo() { return segundo; }
        void get_segundo(unsigned int val) { segundo = val; }


    private:
        unsigned int hora;
        unsigned int minuto;
        unsigned int segundo;
};

#endif // TEMPO_HPP
