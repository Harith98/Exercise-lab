//Question3

#include<iostream>
using namespace std;

int main()
{
	float loan, interest, monthly_payment = 0;
	int years;
	cout << "Input loan amount(RM):RM";
	cin >> loan;
	cout << "\nInput annual interest(%):";
	cin >> interest;
	cout << "\nInput number of years:";
	cin>> years;
	//Monthly Payment
	
	monthly_payment = (loan+(loan*(interest/100)*years)) / (years*12);
	cout << "Monthly payment for this loan is(RM):RM" << monthly_payment << endl;
	return 0;
}
