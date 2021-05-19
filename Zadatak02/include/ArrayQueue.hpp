#ifndef __ARRAY_QUEUE_H__
#define __ARRAY_QUEUE_H__

#include "QueueInterface.hpp"

struct ArrayQueue : private Queue {
 private:
  int capacity_{2};
  int* arr_ptr_;
  int size_{0};
  int HEAD_{-1};
  int TAIL_{-1};

  void realocate();

 public:
  ArrayQueue() : arr_ptr_(new int[capacity_]){};

  ArrayQueue(const ArrayQueue& old_arr)
      : capacity_(old_arr.capacity_),
	arr_ptr_(new int[this->capacity_]),
	size_(old_arr.size_),
	HEAD_(old_arr.HEAD_),
	TAIL_(old_arr.TAIL_) {
    for (auto i = 0; i < this->size_; i++)
      this->arr_ptr_[i] = old_arr.arr_ptr_[i];
  }
  ArrayQueue(ArrayQueue&&);
  void operator=(const ArrayQueue&);
  void operator=(ArrayQueue&&);

  bool empty() const override;
  int size() const override;
  const int& front() const override;
  const int& back() const override;
  void push(const int data) override;
  int pop() override;
};

#endif	// __ARRAY_QUEUE_H__
