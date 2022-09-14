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
  virtual std::ostream& print(std::ostream& out);

public:
  void set_next(Node* pNext);
  Node* get_next() const;

  void set_content(int conts);
  int  get_content() const;

protected:
  int m_conts;
  Node* m_pNext;
};

class FloatNode: public Node
{
public:
  FloatNode(float a, Node* pNext = nullptr);

public:
  virtual std::ostream& print(std::ostream& out);

private:
  float m_conts;
};


std::ostream& operator<<(std::ostream& out, Node* node);
#endif