/*Create a class for Bank account with the following data members.  
(1) Name of depositor 
(2) Account number 
(3) Type of account 
(4) Balance member functions 
a. To assign initial values b. To deposit an amount in a particular account 
c. To withdraw an amount after checking the balance 
d. To display name and balance Write a program to manage at least 10 customers who can deal with deposit 
and withdraw amount and calculate the current balance. */

#include <iostream>
#include <string>
using namespace std;

class bank{
	string name;
	int accno;
	string acctype;
	float balance;
	
	public:	
		void openacc(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter accno : ";
			cin>>accno;
			cout<<"Enter acc type : ";
			cin>>acctype;
			cout<<"Enter balance : ";
			cin>>balance;
		}
		
		void deposit(){
			float amt;
			cout<<"ENter amount : ";
			cin>>amt;
			balance += amt;
			cout << "Amount deposited successfully!" << endl;
		}
		
		void withdraw(){
			float amt;
			cout<<"ENter amount : ";
			cin>>amt;
			if(amt>balance){
				cout<<"insufficient bal";
			}
			else{
				balance -= amt;
				cout << "Withdrawal successful!" << endl;
			}
		}
		
		void display(){
			cout << "\nAccount Holder: " << name;
        	cout << "\nAccount Number: " << accno;
        	cout << "\nAccount Type: " << acctype;
        	cout << "\nCurrent Balance: " << balance << endl;
		}
		
		int getaccno(){
			return accno;
		}
};		



int main(){
	bank cust[10];
	int n, ch, accno;
	
	cout<<"Enter no of customer : ";
	cin>>n;
	
	//open account
	for(int i=0; i<n; i++){
		cout<<"Enter details : ";
		cust[i].openacc();
	}
	do{
		cout << "\n====== Bank Menu ======";
        cout << "\n1. Deposit Amount";
        cout << "\n2. Withdraw Amount";
        cout << "\n3. Display Account Details";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin>>ch;
        
        switch(ch){
        	case 1:
        		cout<<"Enter acc no : ";
        		cin>>accno;
        		for(int i=0; i<n; i++){
        			if(cust[i].getaccno() == accno){
        				cust[i].deposit();
        				break;
					}
				}
				break;
			case 2:
				cout<<"Enter acc no : ";
        		cin>>accno;
        		for(int i=0; i<n; i++){
        			if(cust[i].getaccno() == accno){
        				cust[i].withdraw();
        				break;
					}
				}
				break;
				
			case 3:
				cout<<"acc details : ";
        		for(int i=0; i<n; i++){
        			cust[i].display();
				}
				break;
				
			case 4:
				cout<<"exit";
				break;
			
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(ch!=4);
	
	return 0;
}

//output:
// Enter no of customer : 2
// Enter details : Enter name : Alice
// Enter accno : 101
// Enter acc type : Savings
// Enter balance : 5000
// Enter details : Enter name : Bob
// Enter accno : 102
// Enter acc type : Checking
// Enter balance : 3000
// ====== Bank Menu ======
// 1. Deposit Amount
// 2. Withdraw Amount
// 3. Display Account Details
// 4. Exit
// Enter your choice: 1
// Enter acc no : 101
// ENter amount : 1500
// Amount deposited successfully!