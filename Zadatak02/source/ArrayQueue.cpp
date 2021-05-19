#include "../include/ArrayQueue.hpp"

bool ArrayQueue::empty() const { return (this->size_) ? true : false; }

int ArrayQueue::size() const { return this->size(); }

const int& ArrayQueue::front() const {
	return *(this->arr_ptr_ + this->TAIL_);
}

const int& ArrayQueue::back() const {
	return *(this->arr_ptr_ + this->HEAD_);
}
