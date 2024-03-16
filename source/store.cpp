#include "../include/lowdb/store.hpp"
#include "../include/lowdb/adapter.hpp"
#include <cstdlib>

lowdb::Store::Store(lowdb::Adapter *adapter) : adapter(adapter){};

lowdb::Store::~Store() {
  try {
    free(adapter);
  } catch (...) {
  }
};

void lowdb::Store::set(const std::string &key, const std::string &value) {
  adapter->set(key, value);
}

std::string lowdb::Store::get(const std::string &key) {
  return adapter->get(key);
}

void lowdb::Store::update(const std::string &key, const std::string &value) {
  adapter->update(key, value);
}

void lowdb::Store::remove(const std::string &key) { adapter->remove(key); }