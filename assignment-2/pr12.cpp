//12. WAP to read data for book from user and display it using dynamic constructor.
#include <iostream>
using namespace std;
class Book {
    string title;
    string author;
    float price;
public:
    Book() {
        cout << "Enter Book Title: ";
        cin.ignore(); 
        getline(cin, title);

        cout << "Enter Book Author: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> price;
    }
    
    void displayBook() {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Book Price: $" << price << endl;
    }
};
int main() {
    Book b;

    cout << "\nBook Details:\n";
    b.displayBook();
    return 0;
}
//output:
// Enter Book Title: The Great Gatsby
// Enter Book Author: F. Scott Fitzgerald
// Enter Book Price: 10.99
// Book Details:
// Book Title: The Great Gatsby
// Book Author: F. Scott Fitzgerald
// Book Price: $10.99
