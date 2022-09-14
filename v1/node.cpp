#include "node.hpp"

Node::Node()
:m_pNext(nullptr)
{
  
}

Node::Node(int _a, Node* pNext)
:m_conts(_a), m_pNext(pNext)
{
}

std::ostream& Node::print(std::ostream& out)
{
  out << "int" << std::endl;
  out << m_conts;
  return out;
}

void Node::set_next(Node* pNext)
{
  m_pNext = pNext;
}

Node* Node::get_next() const
{
  return m_pNext;
}

void Node::set_content(int conts)
{
    m_conts = conts;
}

int Node::get_content() const
{
  return m_conts;
}

FloatNode::FloatNode(float _a, Node* pNext)
:m_conts(_a), Node(-1, pNext)
{
}

std::ostream& FloatNode::print(std::ostream& out)
{
  out << "Float" << std::endl;
  out << m_conts;
  return out;
}

std::ostream& operator<<(std::ostream& out, Node* node)
{
  return node->print(out);
}
