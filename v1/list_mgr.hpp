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

  void insert_front(float cnt)
  {
    m_pHead = new FloatNode(cnt, m_pHead);
  }

  Node* pop_back()
  {
    // identify last element
    //  -> 
    //Node* pCurrent = m_pHead;

    #if 0
    while(pCurrent->get_next() != nullptr)
      {
        pCurrent = pCurrent->get_next();
      }

    Node* pTemp = m_pHead;
    while(pTemp->get_next() != pCurrent)
      {
        pTemp = pTemp->get_next();
      }
    pTemp->set_next(nullptr);
    
    #endif
    if(m_pHead != nullptr)
    {
      Node* pCurrent = m_pHead, *pTemp = m_pHead;
      if(pCurrent -> get_next() == nullptr)
      {
        m_pHead = nullptr;
        return pCurrent;
      }
      
      for(;pCurrent->get_next() != nullptr;
          pTemp = pCurrent, pCurrent = pCurrent->get_next());
      pTemp->set_next(nullptr);
      return pCurrent;  
    }
    else
      return nullptr;
  }

  void print_all(std::ostream& out)
  {
    Node* pCurrent = m_pHead;

    for(Node* pCurrent = m_pHead;pCurrent != nullptr; pCurrent = pCurrent->get_next())
      {
        pCurrent->print(out);
        out << std::endl;
      }
  }
};
#endif