#include<stdio.h>
#include<stdlib.h>
#include"element.h"


double Element::income_caculation(double L,double R,double P, double &income)
{
	income = L*R*P;
}

double Element::expense_caculation(double L,double C,double &expense)
{
	expense = H+L*c;
}

double ELement::profit_caculation(double &profit)
{
	profit = income-expense;
}

