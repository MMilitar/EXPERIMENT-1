#include<iostream>
#include<conio.h>
#include<iomanip> 

using namespace std;

int main()
{
	double mass, density;
	cout <<"Input mass(in grams): ";
	cin >> mass;
	
	cout <<"Input density(in g/cm^3): ";
	cin >> density;
	 
	cout <<"Volume of object: " << setprecision(2)<<fixed << mass / (4*density) <<" cubic centimeters";
	
	getch();
	return 0;
}
