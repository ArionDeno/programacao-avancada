#include "carro.hpp"

  /*
 Construtor que permita inicializar todos
 os atributos, inclusive os que foram
 herdados da classe Veculo
  */

Carro::Carro(enum Cores c, string mode,int pe,int vel,int pr, string pla)
{
  this->cor = c;
  this->modelo = mode;
  Veiculo(pe,vel,pr,pla); // chama o constutor pai
  cout<<"Objeto Carro criado com Exito"<<endl;
}

// destrutor
Carro::~Carro()
{
 cout<<"Objeto Carro Destruido com Exito"<<endl;
}


 /*
 Adicione os metodos acessores mutantes
 */

 void Carro::set_modelo(string m)
 {
  this->modelo = m;
 }

 string Carro::get_modelo()
 {
   return this->modelo;
 }


 void Carro::set_cor(enum Cores c)
 {
  this->cor = c;
 }

 enum Cores Carro::get_cor(void)
 {
   return this->cor;
 }

 /*
 Sobrescreva o metodo que imprime os dados
 do veculo para exibir todas as suas informacoes
 */

 void Carro::mostrar_dados()
 {
   cout<<"||||||||||||-CARRO-|||||||||||||||||"<<endl;
   cout<<"COR ->"<<this->get_cor();
   cout<<"Modelo ->" <<this->get_modelo();
   cout<<"Placa -> "<<this->get_placa()<<endl<<endl;
   cout<<"Preco -> "<< this->get_preco()<<endl;
   cout<<"Peso kg -> "<<this->get_peso()<<endl;
   cout<<"Velocidade MAX KM/H -> "<<get_velo()<<endl<<endl;
   cout<<"||||||||||||-CARRO-|||||||||||||||||"<<endl;
 }
