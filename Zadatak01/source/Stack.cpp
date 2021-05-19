#include "../include/Stack.hpp"

#include <iostream>

void Stack::push(const std::string& input) {
  Node* new_node = new Node(input);
  if (this->HEAD_ == nullptr) {
    this->HEAD_ = new_node;
  } else {
    this->HEAD_->next_ = new_node;
    new_node->prev_ = this->HEAD_;
    this->HEAD_ = new_node;
  }
}

const std::string& Stack::top() const { return this->HEAD_->data_; }

std::string Stack::pop() {
  std::string data = this->HEAD_->data_;
  Node* to_delete = this->HEAD_;
  this->HEAD_ = this->HEAD_->prev_;
  this->HEAD_->next_ = nullptr;
  delete to_delete;
  return data;
}

bool Stack::prazan() const { return (this->HEAD_ == nullptr) ? true : false; }

void Stack::ispisi() const {
  Node* head_ref = this->HEAD_;
  while (head_ref) {
    std::cout << head_ref->data_ << std::endl;
    head_ref = head_ref->prev_;
  }
}
