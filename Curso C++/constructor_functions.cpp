#include <iostream>

using namespace std;

// Parece que las clases son custom msgs
class Book{
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "No Title";
            author = "No author";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages){
            //cout << "Creating Object " << name << endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    Book book3;
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of Rings", "Tolkein", 700);

    cout << book3.title;

    return 0;
}