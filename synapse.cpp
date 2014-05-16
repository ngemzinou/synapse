#include <iostream>
#include <cstdlib>
#include <cstdio>

int main(int argc, char * args[]) {
  /* main program*/

  cout << "The arguments to " << pszArgs[0] <<  "are:\n";
  for (int i = 1; i < nNumberofArgs; i++)
  {
         cout << i << ":" << pszArgs[i] << "\n";
  }

  system("pause");
  return 0;
}
