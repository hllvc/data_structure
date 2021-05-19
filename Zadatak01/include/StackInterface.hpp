#ifndef __STACK_INTERFACE_H__
#define __STACK_INTERFACE_H__

#include <string>

struct StackInterface {
  virtual void push(const std::string&) = 0;
  virtual const std::string& top() const = 0;
  virtual std::string pop() = 0;
  virtual bool prazan() const = 0;
  virtual void ispisi() const = 0;
};

#endif	// __STACK_INTERFACE_H__
