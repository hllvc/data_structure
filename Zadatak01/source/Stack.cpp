#include "../include/Stack.hpp"

#include <iostream>

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

const std::string& Stack::top() const { return this->TOP_->data_; }

std::string Stack::pop() {
  std::string data = this->TOP_->data_;
  Node* to_delete = this->TOP_;
  this->TOP_ = this->TOP_->prev_;
  this->TOP_->next_ = nullptr;
  delete to_delete;
  return data;
}

bool Stack::prazan() const {
  return (this->TOP_ == nullptr || this->BOTTOM_ == nullptr) ? true : false;
}

void Stack::ispisi() const {
  while (this->TOP_ != this->BOTTOM_) {
    Node* head_ref = this->TOP_;
    std::cout << head_ref->data_ << std::endl;
    head_ref = head_ref->prev_;
  }
}
