/*
* Assignment 9
* Name:鈕愷夏
* Student Number: 107403527
* Course 2019-CE1001
*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Book
{
public:
    Book(string, string, vector<string>);
    string getName();
    string getISBN();
    string getContent(int);
    void addPage(string);
private:
    string Name;
    string ISBN;
    vector<string> Content;
};
Book::Book(string NAME , string iSBN , vector<string> CONTENT)
{
    Name = NAME;
    ISBN = iSBN;
    Content = CONTENT;
}
string Book::getName()
{
    return Name;
}
string Book::getISBN()
{
    return ISBN;
}
string Book::getContent(int PAGE)
{
    if(PAGE<Content.size())
    {
        return Content[PAGE];
    }
    else
    {
        return "Error";
    }
}
void Book::addPage(string SENTENCE)
{
    Content.push_back(SENTENCE);
}

class BookShelf
{
public:
    BookShelf();
    void addBook(Book);
    void showBookShelf();
private:
    vector<Book> Shelf;
};
BookShelf::BookShelf(){}
void BookShelf::addBook(Book MYBook)
{
    Shelf.push_back(MYBook);
}
void BookShelf::showBookShelf()
{
    for(int x=0;x<Shelf.size();x++)
    {
        cout<<x<<" "<<Shelf[x].getName()<<" "<<Shelf[x].getISBN()<<endl;
    }
}
