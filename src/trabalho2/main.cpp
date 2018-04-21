#include <iostream>
#include<string>

#include"cliente.hpp"
#include"contacorrente.hpp"
#include"contacoupanca.hpp"


using namespace std;

int main(int arc, char *argv[])
{
// objetos do cliente
 Cliente *client0 = new Cliente("marco polo");
 Cliente *client1 = new Cliente("Joao Algusto");

 //obejtos da contas
  ContaCorrente *contacc_algusto = new ContaCorrente(19910,client1);
  ContaCorrente *contapc_algusto = new ContaCorrente(101557,client1);
  ContaCorrente *contacc_marco = new ContaCorrente(15454,client0);
  ContaCorrente *contapc_marco = new ContaCorrente(87551,client0);

  // operações
  contacc_algusto->deposita(500.00);
  contapc_algusto->tranfere(contapc_algusto,250.00);
  contacc_marco->deposita(100.00);
  contapc_marco->deposita(200.00);
  contacc_marco->tranfere(contacc_marco,100.00);

  contacc_algusto->aplica_juros_diarios(100);

  contacc_algusto->extrato();
  contapc_algusto->extrato();

  contapc_marco->aplica_juros_diarios(100);
  contacc_marco->extrato();
  contapc_marco->extrato();


  //ContaCorrente *ncontacc = new  ContaCorrente[100];
 // Teria que se chamar o construtor 1 para cada objeto do vetor ou criar um construtor vazio.

  //Conta **nconta = new Conta*[100];
  /*
  for(i = TAMMAX; i>=0; i--)
  {
   nconta[i] = new ContaCorrente();
  }

  */
  /*
   Classes abstratas não podem ter objetos instanciados
   deve-se criar uma outra classe que herda essa
   nesse caso CC ou CP
   e ter um ponteiro para ponteiro..
   para cada posição do vetor de ponteiros, pode apontar para uma conta
   CC ou CP
  */

  delete client0;
  delete client1;
  delete contacc_algusto;
  delete contapc_algusto;
  delete contacc_marco;
 //delete []nconta;
  //delete []ncontacc;

  return 0;
}
