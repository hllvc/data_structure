#include "StackInterface.hpp"

struct Stack : private StackInterface {
 private:
  struct Node {
    std::string data_;
    Node* next;
    Node* prev;
  };
  Node* BOTTOM_;
  Node* TOP_;

 public:
  void push(const std::string&);
  const std::string& top() const;
  std::string pop();
  bool prazan() const;
  void ispisi() const;
};
