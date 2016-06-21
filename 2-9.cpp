#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  cout << "Please enter the first number: ";
  int num_a;
  cin >> num_a;

  cout << "Please enter the second number: ";
  int num_b;
  cin >> num_b;

  if ( num_a > num_b )
    {
      cout << num_a << " > " << num_b << endl;
    }
  else
    {
      if ( num_a = num_b )
	{
	  cout << num_a << " = " << num_b << endl;
	}
      else 
	{
	  cout << num_a << " < " << num_b << endl;
	}
    }

  return 0;

}
