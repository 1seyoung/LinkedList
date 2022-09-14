#pragma once
#ifndef _LIST_MGR_HPP
#define _LIST_MGR_HPP

#include "node.hpp"
#include <iostream>

class ListMgr
{
public:
  ListMgr()
  : m_pHead(nullptr)
  {
    m_pHead = nullptr;
  }

private:
  Node* m_pHead;

public:
  void insert_front(int cnt)
  {
    m_pHead = new Node(cnt, m_pHead);
  }

  void print_all(std::ostream& out)
  {
    Node* pCurrent = m_pHead;

    for(Node* pCurrent = m_pHead;pCurrent != nullptr; pCurrent = pCurrent->m_pNext)
      {
        pCurrent->print(out);
        out << std::endl;
      }
  }
};
#endif