#ifndef _ELEMENT_HEADER_
#define _ELEMENT_HEADER_

class Element
{
public:
	double income_caculation(double L,double R,double P,double &income);
	double expense_caculation(double L,double H,double C,double &expense);
	double profit_caculation(double &profile);
