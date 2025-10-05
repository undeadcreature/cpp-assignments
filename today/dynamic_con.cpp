//read data for book from user and display it using dynamic constructor
#include <iostream>
using namespace std;

class book {
		string name;
		string title;
		float cost;

	public:
		book(string n, string t, float c):name(n), title(t),cost(c) {}

		void display() {
			cout<<"name : "<<name<<endl;
			cout<<"title : "<<title<<endl;
			cout<<"cost : "<<cost<<endl;
		}
};

int main() {
	book*b = new book("abc","def",54);
	b->display();
	delete b;

	return 0;
}