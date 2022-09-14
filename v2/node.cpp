#include "node.hpp"

Node::Node()
{
  
}

Node::Node(int _a, Node* pNext)
:m_conts(_a), m_pNext(pNext)
{
}

void Node::print(std::ostream& out)
{
  out << m_conts << std::endl;
}