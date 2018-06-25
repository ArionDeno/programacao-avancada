#include <iostream>

#include"tempo.hpp"
#include"win_tempo.hpp"
#include"ux_Tempo.hpp"

using namespace std;

/* usando as diretivas de pre processador Corretas,
 � possivel cria o obj da  classe que ir� funcionar para aquele caso

*/


int main(int argc, char *argv[])
{

//verifcando se o SO � Windows
#if _WIN32
Win_Tempo *tempo= new Win_Tempo();

tempo->horas_agora();

delete tempo;
#endif // _WIN32


//verifcando se o SO � Linux
#if __linux__ || __unix__

 Ux_Tempo *tempo = new Ux_Tempo();

 tempo->horas_agora();

 delete tempo;

#endif // __linux__

 return 0;
}
