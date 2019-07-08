#include<iostream>
#include<conio.h>'
#include<iomanip>

using namespace std;



int main()
{
	double box, sideline, premium, genAd;

	cout << "Ticket Price: \t\t" << "Number of Tickets Sold: \n\n";
	cout << "Box: $250\t\t";
	cin >> box;
	cout << "Total Sale Amount: " << setprecision(2)<<fixed << 250 * box << "\n\n";
	
	cout << "Sideline: $100\t\t";
	cin >> sideline;
	cout << "Total Sale Amount: " << setprecision(2)<<fixed << 100 * sideline << "\n\n";

	cout << "Premium: $50\t\t";
	cin >> premium;
	cout << "Total Sale Amount: " << setprecision(2)<<fixed << 50 * premium << "\n\n";

	cout << "Gen Ad: $25\t\t";
	cin >> genAd;
	cout << "Total Sale Amount: " << setprecision(2)<<fixed << 25 * genAd << "\n\n";

	getch();
	return 0;
}
