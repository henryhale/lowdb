#include "book.h"

std::ostream& operator<<(std::ostream& os, Book book)
{
    os << book.toString();
    return os;
};

Book::Book(string s)
{
    this->setDetails(s);
};

void Book::setDetails(string s)
{
    int i = -1, n = s.size(), j = 0;
    string tmp = "";
    char c = ',';
    while (i < n)
    {
        if (s[++i] != c)
        {
            tmp += s[i];
            if (i < n - 1) continue;
        }
        stringstream s;
        s << tmp;
        if (j == 0) s >> isbn;
        if (j == 1) std::getline(s, title);
        if (j == 2) std::getline(s, author);
        if (j == 3) std::getline(s, publisher);
        if (j == 4) s >> price;
        if (j == 5) s >> stock;
        j++;
        tmp = "";
    }
};

bool Book::verify(string t, string a)
{
    return t == title && a == author;
};

string Book::toString()
{
    stringstream s;
    string c = ",";
    s << isbn << c;
    s << title << c;
    s << author << c;
    s << publisher << c;
    s << price << c;
    s << stock;
    return s.str();
};

void Book::showDetails()
{
    using std::ios;

    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << "" << "\n";

    cout.fill(' ');
    cout.setf(ios::right, ios::adjustfield);
    cout.width(30);
    cout << "Book Details";

    cout.fill(' ');
    cout.setf(ios::right, ios::adjustfield);
    cout.width(20);
    cout << "" << "\n";

    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << "" << "\n";

    cout.fill(' ');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ ISBN" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->isbn << "\n";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ Title" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->title << "\n";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ Author" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->author << "\n";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ Publisher" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->publisher << "\n";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ Price" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->price << "\n";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(12);
    cout << "[ Stock" << "] : ";

    cout.setf(ios::left, ios::adjustfield);
    cout.width(50);
    cout << this->stock << "\n";

};

bool Book::purchase()
{
    this->showDetails();
    if (stock == 0)
    {
        cout << "- No copies available!\n";
        return false;
    }
    int copies = 0;
    cout << "How many copies do want? ";
    std::cin >> copies;
    if (copies > 0 && copies <= stock) {
        cout << "[-] Amount : $ " << price * copies << "\n";
        cout << "\nHas the customer paid? (y/n) ";
        char choice;
        std::cin >> choice;
        if (choice == 'y') {
            stock -= copies;
            cout << "\nPurchase successfully complete!" << std::endl;
            return true;
        } else {
            cout << "\nPurchase cancelled." << std::endl;
        }
    } else {
        cout << "\n[x] Sorry, The requested copies are not avaliable." << "\n";
    }
    return false;
};
