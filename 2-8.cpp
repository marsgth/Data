#include <iostream>
#include <string>

int main()
{
  int prd = 1;
  int i = 1;
  while (i < 10)
    {
      prd = prd * i; 
      std::cout << "Product of " << i << "=" << prd << std::endl;
      ++i;
    }

  return 0;
}
