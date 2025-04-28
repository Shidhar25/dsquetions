#include <bits./stdc++.h>
using namespace std;

// 23.Your local bookstore just received a new shipment of classic literature, and you're extremely excited to find the rare text you've been looking for. You decide that the best way to search for your book is a linear search algorithm.
// Search books by author and display records ( Book title , author , publication etc )

class Book
{
public:
    string title;
    string author;
    string pub;
    Book(string title, string author, string pub)
    {
        this->title = title;
        this->author = author;
        this->pub = pub;
    }
};
class Bookstor
{
public:
    vector<Book> Books;
    void addBook(Book book)
    {
        Books.push_back(book);
    }
    void display()
    {
        for (auto B : Books)
        {
            cout << B.author << B.title << B.pub << endl;
        }
    }
};
int main()
{

    Bookstor bookstor;
    bookstor.addBook(Book("Pride and Prejudice", "Jane Austen", "T. Egerton"));
    bookstor.display();
    int ch;
    cin >> ch;
    while (ch != 0) {
        switch (ch) {
            case 1:
                cout << "Hello" << endl;
                bookstor.display();
                break;
            case 2:
                cout << "Option 2 selected." << endl;
                break;
            default:
                cout << "Invalid" << endl;
        }

        cout << "\nEnter choice again (1, 2, 0 to exit): ";
        cin >> ch; // important to update ch
    }
}