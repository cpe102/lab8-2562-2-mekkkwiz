#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,interest_R,amount;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_R;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;





	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "";
	cout << "\n";




	double NewBalance,Total,Interest,PrevBalance,Payment;
	int EndOfYear = 1;

	PrevBalance = loan;
	Interest = loan*(interest_R/100);
	Total = PrevBalance+Interest;
	Payment = amount;
	if (Payment >= Total)
	{
		Payment = Total;
	}
	
	NewBalance = Total-Payment;



	while (1)
	{
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << EndOfYear; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";

	PrevBalance = NewBalance;
	Interest = PrevBalance*(interest_R/100);
	Total = PrevBalance+Interest;

	if (NewBalance <= Payment)
	{
		Payment = Total;
	}
	else
	{
		Payment = amount;
	}
	
	NewBalance = Total-Payment;
	EndOfYear++;
	
	
	if (PrevBalance <= 0) break;	


	}


	return 0;
}

