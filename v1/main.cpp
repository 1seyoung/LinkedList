#include <iostream>
#include <fstream>
#include <sstream>
#include "list_mgr.hpp"

int main() {
  std::stringstream sstream;

#if 0
  std::ofstream fout;
  fout.open("test.txt");
#endif
  
  ListMgr lm = ListMgr();
  for(int i = 0; i < 5; i++)
    {
      lm.insert_front(float(i+0.1));
    }

  for(int i = 0; i < 5; i++)
    {
      lm.insert_front(i);
    }

#if 0
  lm.print_all(fout);
  fout.close();
#endif
  Node* node = lm.pop_back();
  std::cout << node << std::endl;
  lm.print_all(sstream);
  std::cout << sstream.str() << std::endl;
}
