#include <string>

struct StackInterface {
  virtual void push(const std::string&) = 0;
  virtual const std::string& top() = 0;
  virtual std::string pop() = 0;
  virtual bool prazan() const = 0;
  virtual void ispisi() const = 0;
};
