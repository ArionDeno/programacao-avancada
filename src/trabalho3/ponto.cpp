#include "ponto.hpp"

// constrtutor sem paramentos
// cria valores aleatorios
Ponto::Ponto()
{
 srand(time(0));
 this->x = rand() % LMT;
 srand(time(0));
 this->y = rand() % LMT;
 cout<<"P=("<<this->x<<","<<this->y<<")"<<endl;
}

Ponto::~Ponto()
{
 cout<<"ponto destruido"<<endl;
}

//construtores
Ponto::Ponto(int xx, int yy)
{
 this->x =xx;
 this->y =yy;
 cout<<"P=("<<this->x<<","<<this->y<<")"<<endl;
}

// sobrecarga operadores
Ponto& Ponto::operator +( const Ponto &p)
{
  Ponto z;
  z.x  = this->x + p.x;
  z.y  = this->y + p.y;
  return z;
}

Ponto& Ponto::operator -( const Ponto &p)
{
 Ponto z;
  z.x  = this->x - p.x;
  z.y  = this->y - p.y;
  return z;
}

Ponto& Ponto::operator *( const Ponto &p)
{
 Ponto z;
  z.x  = this->x * p.x;
  z.y  = this->y * p.y;
  return z;
}

Ponto& Ponto::operator *( const int e)
{
 Ponto z;
  z.x  = this->x * e;
  z.y  = this->y * e;
  return z;
}

int Ponto::operator []( const int ix)
{
  if( ix == 0)
  {
   return(this->x);
  }
  else if(ix == 1)
  {
   return(this->y);
  }
}
