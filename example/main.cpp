#include "../source/db.h"
#include "book.h"

int main(void)
{
    LowDB *db = new LowDB("data.csv");

    db->read();

    while (true)
    {
        string t, a;

        cout << "\nXYZ Book Store : Salesperson Portal";
        cout << "\nSearch a Book\n";

        cout << "Enter title > ";
        std::getline(std::cin, t);
        cout << "Enter author > ";
        std::getline(std::cin, a);

        bool isFound = false;
        bool isData = false;

        for (auto i = db->data->begin(); i != db->data->end(); i++)
        {
            if (!isData) {
                isData = true;
                continue;
            }
            Book book(*i);
            if (book.verify(t, a)) {
                if (book.purchase()) {
                    *i = book.toString();
                    db->write();
                }
                isFound = true;
                break;
             }
         }

         if (!isFound) {
             cout << "\n[x] Book not found!" << std::endl;
         }

         cout << std::endl;

    }

    delete db;

    db = nullptr;

    return (0);
}
