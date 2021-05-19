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

  bool empty() const override;
  int size() const override;
  const int& front() const override;
  const int& back() const override;
  void push(const int data) override;
  int pop() override;
};

#endif	// __ARRAY_QUEUE_H__
