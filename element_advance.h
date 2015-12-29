#ifndef _ELEMENT_ADVANCE_HEADER_
#define _ELEMENT_ADVANCE_HEADER_
#include "element.h"
#include <vector>
class Element_advance: public Element
{
public:
	Element_advance(double Leads_per_Month,double Cost_Per_Lead,double Conversion_Rate,double Profit_per_Sale,double Overhead_per_Month):Element(Leads_per_Month,Cost_Per_Lead,Conversion_Rate,Profit_per_Sale,Overhead_per_Month){}
	void Buying_People_Decay_Graph();
	//void GA_alogrithm();
	
	double nbpt;//number of buying people temparary varibale  
	
	std::vector<double> nbp;//number of buying people
		
};
#endif
