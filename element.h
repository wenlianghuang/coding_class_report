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
 	//by sorting function to get the minimun and maximun value
	//void Sorting_no_distribution();
	/*void Sorting_Gasu_distribution();
	void Sorting_Landau_distribution();*/
    void no_distribution_sort();
    void Uniform_distribution_sort();
	void Gaus_distribution_sort();
	void Landau_distribution_sort();
	//void Exp_distribution_sort();
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
    //Uniform distribution
    std::vector<double> vec_LU;
    std::vector<double> vec_CU;
    std::vector<double> vec_RU;
    std::vector<double> vec_PU;
    std::vector<double> vec_ProfU;
	//Gaussian distribution
	std::vector<double> vec_LN;
	std::vector<double> vec_CN;
	std::vector<double> vec_RN;
	std::vector<double> vec_PN;
	std::vector<double> vec_ProfN;
	//Landau distribution
	std::vector<double> vec_LP;
	std::vector<double> vec_CP;
	std::vector<double> vec_RP;
	std::vector<double> vec_PP;
	std::vector<double> vec_ProfP;
    //Exp distribution
    /*std::vector<double> vec_RE;
    std::vector<double> vec_ProfE;*/ 
	//Sorting function parameter 
	std::vector<double>::iterator itsma;
	std::vector<double>::iterator itsmi;
	double vitsmi;//variable of itsmi
    std::vector<double>::iterator itsuma;
    std::vector<double>::iterator itsumi;
    double vitsumi;
	std::vector<double>::iterator itsnma;
	std::vector<double>::iterator itsnmi;
	double vitsnmi;
	std::vector<double>::iterator itslma;
	std::vector<double>::iterator itslmi;
	double vitslmi;
    /*std::vector<double>::iterator itsema;
    std::vector<double>::iterator itsemi;
    double vitsemi;*/
	/*std::vector<double> itsnma;
	std::vector<double> istnmi;
	std::vector<double> itspma;
	std::vector<double> itspmi;*/
	
};
#endif
