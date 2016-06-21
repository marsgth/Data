#include <iostream>
#include <string>

int main()
{
  const std::string exclam = "!";
  const std::string message = "Hello" + std::string(", world") + exclam;
  std::cout << exclam << std::endl;
  std::cout << "\n" << std::endl;
  std::cout << message << std::endl;
  return 0;
}
