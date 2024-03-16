#ifndef LOWDB_HPP
#define LOWDB_HPP

#include "store.hpp"

namespace lowdb {

/* create and return a new in-memory db store instance */
Store createInMemoryDatabase();

} // namespace lowdb

#endif