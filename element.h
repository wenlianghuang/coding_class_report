#ifndef _ELEMENT_HEADER_
#define _ELEMENT_HEADER_
#include"vector"
class Element
{
public:
	Element(double Leads_per_Month,double Cost_Per_Lead,double Conversion_Rate,double Profit_per_Sale,double Overhead_per_Month);
	
	void Leads_per_Month_Rand();
	
	void Cost_per_Lead_Rand();
	void Conversion_Rate_Rand();
	void Profit_per_Sale_Rand();

    void Show_L();	
	void Show_C();
	void Show_R();
	void Show_P();
	void Show_Prof();
	/*double income_caculation(double &income);
	double expense_caculation(double &expense);*/
	void profit_caculation();
	
	









	double L;//Leads Per Month
    double C;//Cost Per Lead
    double R; //Conversion Rate
    double P; //Profit per Sale
    double H; //Overhead per Month
	std::vector<double> vec_L;
	std::vector<double> vec_C;
	std::vector<double> vec_R;
	std::vector<double> vec_P;
	std::vector<double> vec_Prof;
	//Normal distribution
	std::vector<double> vec_LN;
	std::vector<double> vec_CN;
	std::vector<double> vec_RN;
	std::vector<double> vec_PN;
	std::vector<double> vec_ProfN;
	/*double LR //Leads per Month Rand;
	double CR //Cost Per Lead Rand;
	double RR // Conversion Rate Rand;
	double PR //Profit per Sale Rand;*/
};
#endif
