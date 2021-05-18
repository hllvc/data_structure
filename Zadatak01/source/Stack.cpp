#include "../include/Stack.hpp"

void Stack::push(const std::string& input) {
  Node* new_node = new Node(input);
  if (this->TOP_ == nullptr || this->BOTTOM_ == nullptr) {
    this->TOP_ = new_node;
    this->BOTTOM_ = new_node;
  } else {
    this->TOP_->next_ = new_node;
    new_node->prev_ = this->TOP_;
    this->TOP_ = new_node;
  }
}
const std::string& Stack::top() const {}
std::string Stack::pop() {}
bool Stack::prazan() const {}
void Stack::ispisi() const {}
