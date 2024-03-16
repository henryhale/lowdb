#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "interface.hpp"
#include <string>

namespace lowdb {

/* Base class for implementing adapters */
class Adapter : public DBInterface {
public:
  virtual ~Adapter() {}
};

} // namespace lowdb

#endif