#include <iostream>
#include <string>

int main()
{
  std::cout << "Please input n =" << std::endl;
  int n;
  std::cin >> n;

  int k = 0;
  while (k != n)
    { // invariant: we have written k asterisks so far
      using std::cout;
      cout << "*";
      ++k;
    }
  std::cout << std::endl; // std:: is required here
  return 0;
}
