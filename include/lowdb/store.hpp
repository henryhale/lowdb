#ifndef STORE_HPP
#define STORE_HPP

#include "adapter.hpp"
#include "interface.hpp"
#include <string>

namespace lowdb {

/* Store class */
class Store : public DBInterface {
private:
  Adapter *adapter;

public:
  Store(Adapter *adapter);
  ~Store();
  void set(const std::string &key, const std::string &value) override;
  std::string get(const std::string &key) override;
  void update(const std::string &key, const std::string &value) override;
  void remove(const std::string &key) override;
};

} // namespace lowdb

#endif