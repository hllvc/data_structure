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
  Node* HEAD_ = nullptr;

 public:
  void push(const std::string&) override;
  const std::string& top() const override;
  std::string pop() override;
  bool prazan() const override;
  void ispisi() const override;
};

#endif	// __STACK_H__
