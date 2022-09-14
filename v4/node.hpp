#pragma once

class Node
{
public:
  Node(int cont, Node* pNext = nullptr)
  :m_iContents(cont), m_pNext(pNext)
  {
    
  }

public:
  int m_iContents;
  Node* m_pNext;
};