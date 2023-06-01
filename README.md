# LowDB

A minimalist demo database 

```cpp
// create an instance
LowDB db("data.csv");

// initialize data
db.read();

// now you can acces the data vector
// via db.data
for (auto s : db.data)
{
    cout << s << "\n";
}

// adding a new entry
db.data.push_back("new entry");

// save changes after write operation
db.write();
```

## Example

In the `example` folder, there is a bookstore
example that illustrates a basic use case of
`LowDB`. 

Everytime a book is purchased, the total 
number of copies in stock is updated.

The example uses sample data in the `csv` 
format since it is supported by most 
spreadsheet applications for simplicity.

To run the example:

- clone this repository
- make sure you have a cpp compiler (e.g. gcc, clang)
- run the following in order from the current directory

```sh
$ cd example
$ chmod u+x build.sh
$ ./build.sh
```

## License

Released under MIT License
