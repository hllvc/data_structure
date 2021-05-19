#include "../include/ArrayQueue.hpp"

#include "string"

void ArrayQueue::realocate() {	    // method to realocate size of array
  int* to_delete = this->arr_ptr_;  // save old array
  this->arr_ptr_ = new int[this->capacity_ *= 2];  // double the capacity
  for (auto i = 0; i < this->size(); ++i)	   // iterate and copy ellements
    *(this->arr_ptr_ + i) = *(to_delete + i);
  delete to_delete;  // delete old array
}

bool ArrayQueue::empty() const { return this->size_; }	// check if empty

int ArrayQueue::size() const {
  // if size > 0 return it otherwise throw exception
  return (this->size_) ? this->size_ : throw std::string("Queue empty!");
}

const int& ArrayQueue::front() const { return this->arr_ptr_[this->TAIL_]; }

const int& ArrayQueue::back() const { return this->arr_ptr_[this->HEAD_]; }

void ArrayQueue::push(const int data) {
  if (this->size_ == this->capacity_) realocate();
  if (this->HEAD_ == -1) this->TAIL_++;
  if (this->HEAD_ + 1 == this->capacity_) this->HEAD_ = 0;
  this->arr_ptr_[++this->HEAD_] = data;
  this->size_++;
}

int ArrayQueue::pop() {
  if (this->empty()) throw std::string("Queue empty!");
  this->size_--;
  int data;
  if (this->TAIL_ == this->HEAD_) {
    data = this->arr_ptr_[this->TAIL_];
    this->TAIL_ = -1;
    this->HEAD_ = -1;
  } else if (this->TAIL_ + 1 == this->capacity_) {
    data = this->arr_ptr_[this->TAIL_];
    this->TAIL_ = 0;
  }
  return data;
}
