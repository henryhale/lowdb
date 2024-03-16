#include "../include/lowdb/lowdb.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
  lowdb::Store db = lowdb::createInMemoryDatabase();

  db.set("hello", "world");

  std::cout << db.get("hello") << std::endl;

  return EXIT_SUCCESS;
}