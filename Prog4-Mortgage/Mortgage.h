#pragma once
// header file for Mortgage class
#ifndef MORTGAGE_H
#define MORTGAGE_H

#include <iostream>
#include <cmath>

using namespace std;

class Mortgage 
{
  private:
	  double loan;
	  int years;
	  double rate;

	
	  double getTerm()

const {
double term;
		term = pow((1 + rate / 12), (12 * years));
		return term;
	}

public:
	//constructor
	Mortgage() {
		loan = 0;
		years = 0;
		rate = 0;
	}

	//function (setter)
	void setLoan() {
		double l;
		cout << "Enter your amount of loan you took: $ ";
		cin >> l;
	
		while (l < 0) {
			cout << "Negative values of loans are not accepted. Please try again: ";
			cin >> l;
		}
		loan = l;
	}
  void setInterestRate() {
		double r;
		cout << "Enter the interest rate for your loan:";
		cin >> r;
		rate = r;
	}

	void setYears() {
		int y;
		cout << "Enter number of years you have to pay it off: ";
		cin >> y;
		//validate input
		while (y < 1) {
			cout << "Values less than 1 are not accepted as an answer. Please try again: ";
			cin >> y;
		}
		years = y;
	}

	//functions(getter)
	double getLoan() 
		const {
		
		return loan;
	}

	int getYears() 
		const {
		
		return years;
	}
  double getInterestRate() 
		const {
		
		return rate;
	}


	double getMonthlyPayment()
		const {
		
		double payment;
		payment = (loan * rate * getTerm() / 12) / (getTerm() - 1);
		return payment;
	}

	double getTotalPaid() 
		const {
		
		double total;
		//total amount you paid to bank in a monthly payment
		total = 12 * years * getMonthlyPayment();
		return total;
	}
};

#endif
