#include <iostream>
#include <fstream>
#include "list_mgr.hpp"

int main() {
  std::ofstream fout;
  fout.open("test.txt");
  ListMgr lm = ListMgr();

  for(int i = 0; i < 10; i++)
    {
      lm.insert_front(i);
    }

  lm.print_all(fout);

  fout.close();
}
