#pragma once

#include "node.hpp"

class ListManager
{
public:
  ListManager()
  : m_pHead(nullptr)
  {
    
  }

public:
  void insert_back(int c)
  {
    if(m_pHead != nullptr)
    {
      Node* cur = m_pHead;
      while(cur->m_pNext != nullptr)
      {
        cur = cur->m_pNext;
      }
      cur->m_pNext = new Node(c);  
    }
    else
    {
      m_pHead = new Node(c);
    }
    // m_pHead = new Node(c, m_pHead);
  }

  Node* pop_back()
  {
    if(m_pHead != nullptr)
    {
      if(m_pHead->m_pNext == nullptr)
      {
        Node* temp = m_pHead;
        m_pHead = nullptr;
        return temp;
      }
      else
      {
        Node* cur = m_pHead;
        while(cur->m_pNext != nullptr)
          {
            cur = cur->m_pNext;
          }

        Node* temp = m_pHead;
        while(temp->m_pNext != cur)
          {
            temp = temp->m_pNext;
          }

        temp->m_pNext = nullptr;
        return cur;
      }
    }
    return nullptr;
  }

public:
  Node* m_pHead;
};