#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{  
  string r;
  for (int f = 0; f != 1; ) 
    {  
      cout << "Please enter the character's feature: square(s)/rectangle(r)/triangle(t)? ";

      cin >> r;
      
      if (r == "s")
	{
	  cout << "Please define the side length of the square: ";
	    int side_square;
	  cin >> side_square;
          
          for (int sq = 0; sq != side_square; ++sq)
	    {
              for (int sl = 0; sl != side_square; ++sl)
		{
		  cout << "*";
		}
              cout << "\n";
	    }
	  f = 1;
	}  
      else 
	{
	  if (r == "r")
	    {
	      cout << "Please enter the length of row side: ";
	      int rl; 
	      cin >> rl;

	      cout << "Please enter the length of column side: ";
	      int rs;
	      cin >> rs; 

	      for (int rrow = 0; rrow != rl; ++rrow)
		{
		  for (int rcol = 0; rcol != rs; ++rcol)
		    {
		      cout << "*";
		    }
		  cout << "\n";
		}
	      f = 1;
	    }
	  else
	    {
	      if ( r == "t")
		{
		  cout << "Please enter the length of triangle: ";
                  int tl;
                  cin >> tl;

                

		  for (int trow = 0; trow != tl + 1; ++trow)
		    {
		      for (int tcol = 0; tcol != trow; ++tcol)
			{
			  cout << "*";
			}
		      cout << "\n";
		    }
                  
		  f = 1;
		}
	      else 
		{
		  cout << "Input error!\n";
		  f = 0;
		}
	    }
	}
    }

    
    

  return 0;
}

