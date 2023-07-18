#include <iostream>

int subtract (int x, int y){
  return x-y;
}

int multiply (int x, int y){
  return x*y;
}

int divide (int x, int y){
  return x/y;
}


int main()
{

  int x = 5;
  int y = 7;

  int z = subtract(x, y);
  int b = multiply(x, y);
  int n = divide(x, y);

  std::cout << z <<   std::endl;v
  std::cout << b <<   std::endl;
  std::cout << n <<   std::endl;


  /*std::cout << "Albert 115" << std::endl;

   int x = 2;
   int y = 4;
   int z = 6;
   int w = 8;
   int v = 10;



  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
  std::cout << "The sum of " << x << " and " << y << " and " << z << " is " << x + y + z << std::endl;
  std::cout << "The product of " << x << " and " << y << " and " << z << " and " <<v<< " is " << x*y*z*w << std::endl;
  std::cout << "The division of " << x << " and " << y << " and " <<v<< " is " << x/y/v << std::endl;

  return 0;*/

}



