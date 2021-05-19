#ifndef __QUEUE_INTERFACE_H__
#define __QUEUE_INTERFACE_H__

struct Queue {
  virtual bool empty() const = 0;
  virtual int size() const = 0;
  virtual const int& front() const = 0;
  virtual const int& back() const = 0;
  virtual void push(const int data) = 0;
  virtual int pop() = 0;
};

#endif	// __QUEUE_INTERFACE_H__
