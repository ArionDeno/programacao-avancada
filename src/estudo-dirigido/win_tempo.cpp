#include "win_tempo.hpp"

Win_Tempo::Win_Tempo()
{
  cout<<"Incializando hora windows"<<endl;
}

Win_Tempo::~Win_Tempo()
{
 cout<<"destruindo hora windows"<<endl;
}
// implementação da hora atual win
void Win_Tempo::horas_agora()
{
 cout<<"hora atual do Sistema Windows"<<endl;
 system("TIME /T");;
}
