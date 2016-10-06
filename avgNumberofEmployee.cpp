#include <iostream>
#include <fstream>

using namespace std;

// create functions
int numeberEmployees(int);
int numberDays(int);
float averageAbsent(int, int);

int main () {
	int employees, c;
	int days;
	double average;
	
	employees= numberEmployees(c);
	days= numberDays(employees);
	average= averageAbsent(employees, days);
	
	cout << "The average number of days that employee are absent is: ";
		
	return 0;
}	
	
		
int numberEmployees(int a) { // variable a means input employees
	
	cout << "Enter the number of employees in the company: ";
	cin >> a;
	
	while (employee< 1){
	cout << "ERROR" << endl;
	cout << "Enter the number of emplyees in the company: ";
	cin >> a;}

	return a;
}
	
int numberDays(int a) {
	int j= 0; // variable j means total number of days absent
	int b; // variable b means input absent
	return j;
}

double averageAbsent (int a, int b){
	double average;
	average=  b / a;
	
	return average;
}
