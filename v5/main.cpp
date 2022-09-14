#include <iostream>

#include "list_mgr.hpp"

int main()
{
  ListManager lm;

  for( int i = 0; i < 10; i++)
    lm.insert_back(i);

  for (int i = 0; i < 10; i++)
    std::cout << lm.pop_back()->m_iContents << std::endl;
  return 0;
}