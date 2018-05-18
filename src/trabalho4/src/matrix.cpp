#include "../include/matrix.hpp"

Matrix::Matrix(unsigned int l,unsigned int c)
{
  this->n_linhas = l;
  this->n_colunas =c;
  //aloca as linhas
  this->dados =  new  int *[this->n_linhas];
  //aloca  as colunas
  for(unsigned int i =0; i< this->n_colunas; ++i)
  {
    this->dados[i] = new int[this->n_colunas];
  }
  //------Inilaiza a matrix---valores-aleatorios-----------

   srand(c+l);

  for(unsigned int i = 0; i< n_linhas; ++i)
  {
    for(unsigned int j = 0; j < n_colunas; ++j)
    {
        this->dados[i][j] = rand() % VALOR_MAX;
    }
  }
  //--------------------
  cout<<"Matrix Dinamica alocada"<<endl;
  cout<<"Tamanho em memoria :"<< (this->n_linhas * this->n_colunas) * sizeof(int)<<"bytes"<<endl;
}

Matrix::~Matrix()
{
  for (int i = 0; i < this->get_linha(); ++i)
    {
      delete [] this->dados[i];
    }
   //delete [] this->dados;

 cout<<"matrix alocada apagada"<<endl;
}


int Matrix::get_linha()
{
  return this->n_linhas;
}

int Matrix::get_coluna()
{
  return this->n_colunas;
}


// insere dados na matriz
void Matrix::inserir(unsigned int li,unsigned int col,int va)
{
    // checa para ver se não passou dos limites
  (li > this->n_linhas)? li = this->n_linhas: li = 0;
  (col > this->n_colunas)? col = this->n_colunas: col = 0;
  this->dados[li][col] = va;
}

//retorna dados da matriz
int Matrix::acessa(unsigned int li,unsigned int col)
{
       // checa para ver se não passou dos limites
  (li > this->n_linhas)? li = this->n_linhas: li = 0;
  (col > this->n_colunas)? col = this->n_colunas: col = 0;
   return(this->dados[li][col]);
}


/*-------sobrecarga operadores-------*/

// soma duas matrizes
/*
As duas matrizes são iguais
*/

Matrix Matrix::operator+(Matrix &m)
{
  // matrix dentro do vetor
  Matrix x(m.get_linha(),m.get_coluna());
   int tmp=0;
   // percorre as duas amtrizes e soma
  for(int i = 0; i < m.get_linha(); i++)
  {
     for(int j = 0; j < m.get_coluna(); j++)
       {
         tmp =  this->acessa(i,j);
         tmp += m.acessa(i,j);
         x.inserir(i,j,tmp);
       }
  }
  return x;
}

//subrai duas matrizes
Matrix Matrix::operator-( Matrix &m)
{
  Matrix x(m.get_linha(),m.get_coluna());

   int tmp=0;
   // percorre as duas amtrizes e subtrai
  for(int i = 0; i < m.get_linha(); i++)
  {
     for(int j = 0; j < m.get_coluna(); j++)
       {
         tmp = m.acessa(i,j) - this->acessa(i,j);
         x.inserir(i,j,tmp);
       }
   }
  return x;
}



//multipla 2 matrizes
Matrix Matrix::operator*(Matrix &m)
{

  Matrix x(m.get_linha(),m.get_coluna());

   int tmp=0;
   // percorre as duas amtrizes e multi
  for(int i = 0; i < m.get_linha(); i++)
  {
     for(int j = 0; j < m.get_coluna(); j++)
       {
         tmp = m.acessa(i,j) * this->acessa(i,j);
         x.inserir(i,j,tmp);
       }
   }
  return x;
}

//mutilplica por uma constante
Matrix Matrix::operator*(int x)
{
  Matrix z(this->get_linha(),this->get_coluna());
  int tmp=0;
   // percorre a matriz e multiplica
  for(int i = 0; i < this->get_linha(); i++)
  {
     for(int j = 0; j < this->get_coluna(); j++)
       {
         tmp = x * this->acessa(i,j);
         z.inserir(i,j,tmp);
       }
   }


  return z;
}


