//Create class DATE having date, month and year as data members. Update the date with user
//given days using friend function, and display new date. 

#include <iostream>
using namespace std;

class datecls{
	public:
	int date;
	int month;
	int year;
	
	
		datecls(int date, int month, int year){
			this->date=date;
			this->month=month;
			this->year=year;
		}
		
		void display(){
			cout<<"day :"<<date<<" Month : "<<month<<" year : "<<year<<endl;
		}
		
		friend void adddays(datecls &d, int n);
		//friend int getdays(int month, int year);
};

int getdays(int month, int year){
	if(month ==4 || month ==6 ||month ==9 ||month ==11 ){
		return 30;
	}
	else{
		return 31;
	}
}


void adddays(datecls &d, int n){
	d.date+=n;
	while(d.date>getdays(d.month,d.year)){
		d.date-=getdays(d.month,d.year);
		d.month++;
		if(d.month>12){
			d.month=1;
			d.year++;
		}
	}
}



int main(){
	datecls d(12,2,2013);
	d.display();
	adddays(d,3);
	d.display();
	
	return 0;
}

//output:
// day :12 Month : 2 year : 2013
// day :15 Month : 2 year : 2013    
// day :28 Month : 2 year : 2013
// day :3 Month : 3 year : 2013
// day :30 Month : 4 year : 2013
// day :2 Month : 5 year : 2013
// day :31 Month : 12 year : 2013