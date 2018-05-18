#include <iostream>
#include<cstdlib>

#include "include/matrix.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  Matrix x(8,8);
  Matrix y(8,8);
  Matrix m(8,8);

  m.inserir(4,4,56);

   m= y+x;
   m = y*5;





  return 0;
}

