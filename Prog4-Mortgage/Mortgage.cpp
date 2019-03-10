// implementation file for Mortgage class
#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"
using namespace std;

int main()
{
  Mortgage mort;
  
  	//get data from user
	mort.setLoan();
	mort.setInterestRate();
	mort.setYears();

	//display output
	cout << setprecision(2) << fixed;
	cout << "Monthly payment you need to pay to the bank: $ \n";
	cout << mort.getMonthlyPayment();

	cout << "Total amount you paid to bank at the end of period was: $";
	cout << mort.getTotalPaid();

	return 0;
}
