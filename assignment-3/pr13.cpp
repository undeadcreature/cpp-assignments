// WAP to create base class book having int id and char * name as data members and
// respective functionality, show following types of inheritance and display the details of
// each kind of books, also calculate the total no of each type of books in proper format.
// Simple inheritance with derived class Sales
// hierarchical inheritance with derived classes academics and thrillers
// Hybrid inheritance with derived classes as above and in addition final
// derivation of class Sales
// Show use of constructor and destructor in above examples of inheritance.


#include <iostream>
#include <cstring>
using namespace std;
class Book {
protected:

    int id;
    char* name;
public:
    Book() : id(0), name(nullptr) {}
    Book(int i, const char* n) : id(i) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    virtual void display() {
        cout << "Book ID: " << id << ", Name: " << name << endl;
    }
    virtual ~Book() {
        delete[] name;
    }
};  
class Sales : public Book {
    int salesCount;
public:
    Sales(int i, const char* n, int sc) : Book(i, n), salesCount(sc) {}
    void display() override {
        Book::display();
        cout << "Sales Count: " << salesCount << endl;
    }
};
class Academics : public Book {
    int academicLevel;
public:
    Academics(int i, const char* n, int al) : Book(i, n), academicLevel(al) {}
    void display() override {
        Book::display();
        cout << "Academic Level: " << academicLevel << endl;
    }
};
class Thrillers : public Book {
    int thrillerRating;
public:
    Thrillers(int i, const char* n, int tr) : Book(i, n), thrillerRating(tr) {}
    void display() override {
        Book::display();
        cout << "Thriller Rating: " << thrillerRating << endl;
    }
};
class HybridSales : public Sales {
    int hybridFeature;
public:
    HybridSales(int i, const char* n, int sc, int hf) : Sales(i, n, sc), hybridFeature(hf) {}
    void display() override {
        Sales::display();
        cout << "Hybrid Feature: " << hybridFeature << endl;
    }
};
int main() {
    Sales salesBook(1, "Sales Book", 150);
    Academics academicBook(2, "Academic Book", 3);
    Thrillers thrillerBook(3, "Thriller Book", 5);
    HybridSales hybridSalesBook(4, "Hybrid Sales Book", 200, 7);
    cout << "Sales Book Details:" << endl;
    salesBook.display();
    cout << "\nAcademic Book Details:" << endl;
    academicBook.display();
    cout << "\nThriller Book Details:" << endl;
    thrillerBook.display();
    cout << "\nHybrid Sales Book Details:" << endl;
    hybridSalesBook.display();
    return 0;
}
//output:
//Sales Book Details:
//Book ID: 1, Name: Sales Book
//Sales Count: 150

//Academic Book Details:
//Book ID: 2, Name: Academic Book
//Academic Level: 3
//Thriller Book Details:
//Book ID: 3, Name: Thriller Book
//Thriller Rating: 5
//Hybrid Sales Book Details:
//Book ID: 4, Name: Hybrid Sales Book
//Sales Count: 200
//Hybrid Feature: 7

