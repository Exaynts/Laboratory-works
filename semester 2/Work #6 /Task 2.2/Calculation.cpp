#include "Calculation.h"
#include <iostream>
using namespace std;

void Calculation::Operate(Function* func) {
	cout << "Calculation for function y = ";
	cout << func->Get_Name() << endl;
	func->Set_Coeff();
	double x;
	cout << "Enter x: "; cin >> x;
	cin.get();
	func->Set_Arg(x);
	cout << "y = " << func->Get_Val() << endl;
	cin.get();
}

//���������� ������
Calculation calculation;