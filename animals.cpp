// Thomas Phillips
// Animals
// Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?
// July 23, 2017

#include <iostream>
using namespace std;

int main() {
  for (int horses = 0; horses < 100; horses++)
    for (int pigs = 0; pigs < 100; pigs++)
      for (int rabbits = 0; rabbits < 100; rabbits++)
        if (((horses * 10) + (pigs * 3) + (rabbits/2)) == 100)
          cout << horses << " horses\n" << pigs << " pigs\n" << rabbits << " rabbits\n" << "Total: $" << horses*10 + pigs*3 + rabbits/2 << "\n\n";
  return 0;
}
