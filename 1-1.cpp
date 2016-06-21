#include <iostream>
#include <string>

int main()
{
  const std::string hello = "Hello";
  const std::string message = hello + ", world" + "!";
  std::cout << hello + "\n" + message << std::endl;
  return 0;
}
