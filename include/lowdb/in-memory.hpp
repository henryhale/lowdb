#ifndef IN_MEMORY_HPP
#define IN_MEMORY_HPP

#include "adapter.hpp"
#include <unordered_map>

namespace lowdb {

/* An in-memory database adapter */
class InMemoryAdapter : public Adapter {
private:
  std::unordered_map<std::string, std::string> data;

public:
  void set(const std::string &key, const std::string &value) override;
  std::string get(const std::string &key) override;
  void update(const std::string &key, const std::string &value) override;
  void remove(const std::string &key) override;
};

} // namespace lowdb

#endif