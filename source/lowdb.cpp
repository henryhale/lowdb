#include "../include/lowdb/in-memory.hpp"
#include "../include/lowdb/store.hpp"

namespace lowdb {

Store createInMemoryDatabase() { return Store(new InMemoryAdapter()); }

} // namespace lowdb