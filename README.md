# LowDB

LowDB is a lightweight C++ library for simple key-value storage with support for _different_ storage adapters. It provides an easy-to-use interface for storing, retrieving, updating, and removing data. It is a C++ port of [typicode/lowdb](https://github.com/typicode/lowdb) javascript library. 

## Features

- Simple key-value storage.
- Easy-to-use interface for interacting with the data.
- Supports default and custom-made storage adapters (e.g. in-memory adapter).

## Installation

To use LowDB in your C++ project, you can either link against the static library or include the source files directly in your project.

### Static Library

1. Clone the repository:

   ```bash
   git clone https://github.com/henryhale/lowdb.git
   ```

2. Compile the library:

   ```bash
   cd lowdb/build
   chmod +x start.sh
   ./start.sh
   ```

3. Include the header files located in the `include/lowdb` directory in your project.

4. Link against the static library (`liblowdb.a`) located in the `build` directory.

### Source Files

You can also include the source files directly in your project. Simply copy the source code files into your project directory and compile them along with your project.

## Usage

A complete example illustrating how to use LowDB can be found in the [example](./example/) sub folder.

```cpp
#include "path/to/lowdb.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
  lowdb::Store db = lowdb::createInMemoryDatabase();

  db.set("key", "value");

  std::cout << db.get("key") << std::endl;

  return EXIT_SUCCESS;
}
```

## Contributing

Contributions to LowDB are welcome! To contribute, follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your-feature`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature/your-feature`).
6. Create a new pull request.

## License

This project is licensed under the [MIT License](./LICENSE.md)

Copyright © 2024-present, [Henry Hale](https://github.com/henryhale)