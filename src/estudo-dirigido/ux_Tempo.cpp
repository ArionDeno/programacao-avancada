#include "ux_Tempo.hpp"

Ux_Tempo::Ux_Tempo()
{
 cout<<"Inicilizando hora Linux"<<endl;
}

Ux_Tempo::~Ux_Tempo()
{
 cout<<"Destruindo hora Linux"<<endl;
}

// implementação da hora atual unix
void Ux_Tempo::horas_agora()
{
 cout<<"hora atual Linux "<<endl;
 system("date");
}
