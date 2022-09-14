#pragma once
#ifndef _NODE_HPP_
#define _NODE_HPP_

#include <iostream>

class Node
{
private:
  Node();

public:
  Node(int a, Node* pNext = nullptr);

public:
  void print(std::ostream& out);

public:
  int m_conts;
  Node* m_pNext;
};
#endif