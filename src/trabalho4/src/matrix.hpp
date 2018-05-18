#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
#include<cstdlib>

#define VALOR_MAX 1000

using namespace std;

class Matrix
{
  private:
        unsigned int n_linhas,
                     n_colunas;
        int **dados;

   public:

        // construtor
        Matrix(unsigned int,unsigned int);
        // destrutor
        virtual ~Matrix();
     // insere dados na matriz
    void inserir(unsigned int li,unsigned int col, int va);
    int acessa(unsigned int li,unsigned int col);

    int get_linha();
    int get_coluna();


/*-------sobre carga operadores---------*/

        // soma duas matrizes
        Matrix operator+(Matrix &);

        //subrai duas matrizes
        Matrix operator-(Matrix &);

        //multipla 2 matrizes
         Matrix operator*(Matrix &);

        //mutilplica por uma constante
        Matrix operator*(int);

        // saida
friend ostream &operator<<(ostream &saida, Matrix &m)
{
   for(int i = 0; i < m.get_linha(); i++)
  {
     for(int j = 0; j < m.get_coluna(); j++)
       {
        saida << m.acessa(i,j)<<"["<<i<<"]["<<j<<"]"<<endl;
       }
   }
  return saida;
}


// entrada
friend istream &operator>>(istream &entrada, Matrix &m)
{
 for(int i = 0; i < m.get_linha(); i++)
  {
     for(int j = 0; j < m.get_coluna(); j++)
       {
        entrada >> m.inserir(i,j,entrada);
       }
   }
   return entrada;
}


};

#endif // MATRIX_HPP
