// WAP to create class ‘hospital’ having data as incharge-doctor, license _no and worth in
// rupees. Take two objects and show the use of pointers to an object.

#include <iostream>
#include <cstring>
using namespace std;
class Hospital {
    char* inchargeDoctor;
    char* licenseNo;
    float worth;
public:
    Hospital(const char* doc, const char* lic, float w) : worth(w)
    {
        inchargeDoctor = new char[strlen(doc) + 1];
        strcpy(inchargeDoctor, doc);
        licenseNo = new char[strlen(lic) + 1];
        strcpy(licenseNo, lic);
    }
    void display() {
        cout << "Incharge Doctor: " << inchargeDoctor << endl;
        cout << "License No: " << licenseNo << endl;
        cout << "Worth: " << worth << " rupees" << endl;
    }
    ~Hospital() {
        delete[] inchargeDoctor;
        delete[] licenseNo;
    }
};
int main() {
    Hospital h1("Dr. Smith", "LIC12345", 5000000.0);
    Hospital h2("Dr. Johnson", "LIC67890", 7500000.0);

    Hospital* ptr1 = &h1;
    Hospital* ptr2 = &h2;

    cout << "Details of Hospital 1:" << endl;
    ptr1->display();

    cout << "\nDetails of Hospital 2:" << endl;
    ptr2->display();

    return 0;
}
//output:
//Details of Hospital 1:
//Incharge Doctor: Dr. Smith
//License No: LIC12345
//Worth: 5000000 rupees
//
//Details of Hospital 2:
//Incharge Doctor: Dr. Johnson
//License No: LIC67890
//Worth: 7500000 rupees
