#ifndef __STACK_H__
#define __STACK_H__

#include "StackInterface.hpp"

struct Stack : private StackInterface {
 private:
  struct Node {
    friend struct Stack;

   private:
    std::string data_;
    Node* next_ = nullptr;
    Node* prev_ = nullptr;

    Node(const std::string& data) : data_(data){};
  };
  Node* TOP_ = nullptr;

 public:
  void push(const std::string&);
  const std::string& top() const;
  std::string pop();
  bool prazan() const;
  void ispisi() const;
};

#endif	// __STACK_H__
