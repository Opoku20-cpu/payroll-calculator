	#include <iostream>
	using namespace std ;

	int main(){
	string employeename ;
	int tax, basicsalary, SSNIT, netsalary;
	
	cout << "Enter employeename";
	cin >> employeename ;
	
	cout <<"Enter basicsalary";
	cin >> basicsalary;
	
	// calculation
	tax = 30 * basicsalary ;
	cout << "tax : " << endl ;
	
	SSNIT = 20 * basicsalary ;
	cout << "SSNIT :" << endl ;
	 
	 netsalary = basicsalary - ( tax + SSNIT) ;
	 cout << " netsalary : " << endl ;
	 
	 return 0 ;
	 
	 
	
}
