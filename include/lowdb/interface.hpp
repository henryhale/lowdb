#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <string>

namespace lowdb {

/* Shared database interface */

class DBInterface {
public:
  /* save a value using a key reference */
  virtual void set(const std::string &key, const std::string &value) = 0;
  /* retrieve a value using a key */
  virtual std::string get(const std::string &key) = 0;
  /* modify the value referenced by the key */
  virtual void update(const std::string &key, const std::string &value) = 0;
  /* delete a key from the database*/
  virtual void remove(const std::string &key) = 0;
};

} // namespace lowdb

#endif