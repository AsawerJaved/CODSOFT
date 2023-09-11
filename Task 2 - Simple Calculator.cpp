#include<iostream>
using namespace std;
int main ()
{
	double num1, num2;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	char oper;
	cout << "Enter an operator (+ , - , * , /): ";
	cin >> oper;
	
	cout << endl;
	if(oper == '+')
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		
	else if(oper == '-')
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		
	else if(oper == '*')
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		
	else if(oper == '/')
		cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
	
	else
		cout << "Not a basic arithmetic operator!" << endl;
  
	return 0;
}
