/*
 Trabalho 01 programação avançada
 Professor: Chaua Queirolos
 Aluno: Arion Denovaro
 @data Inicio : 04/04/2018
*/

#include <iostream>
#include<cstdlib>

#include "veiculo.hpp"
#include "carro.hpp"
#include "caminhao.hpp"
#include"caminhonete.hpp"

using namespace std;

int main(int argc, char *argv[])
{
//cria os objetos
  Veiculo *nave1 = new Veiculo();
  Veiculo *nave2 = new Veiculo(500,1000,100000,"XAEAS-14645999F");
 // carros
  Carro *car1 = new Carro();
  Carro *car2 = new Carro(AZUL,"Fusca",500,120,2500,"XZA-128");
// caminao
  Caminhao *camin1 = new Caminhao();
  Caminhao *camin2 = new Caminhao(10,500,3,2,160,15000,"CCSA-12455");
 // caminhonete
 Caminhonete *caminhonet =new Caminhonete(2,300,2,500,200,4500,"PLA-1112","Macopolo",AZUL);

// mostra os dados dos objetos
  nave1->mostrar_dados();
  nave2->mostrar_dados();

  car1->mostrar_dados();
  car1->mostrar_dados();

  camin1->mostrar_dados();
  camin2->mostrar_dados();

  caminhonet->mostrar_dados();

  // chama os metodos destrutores apaga da memoria

  delete caminhonet;

  delete camin1;
  delete camin2;

  delete car1;
  delete car2;

  delete nave1;
  delete nave2;

/*
 recomendavel capar os ponteiros quando suas refencias não são mais usadas
 recomendação vem do valgrind
*/
 caminhonet , camin1, camin2, car1, car2, nave1, nave2 = NULL;

  return EXIT_SUCCESS;
}
