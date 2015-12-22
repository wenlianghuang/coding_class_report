#include<iostream>
#include<stdlib.h>
#include"element.h"
/*#include"TFile.h"
#include"TTree.h"*/
#include<vector>
#include"TH1D.h"

using namespace std;
int main()
{
	double Lead_per_Month,Cost_per_Lead,Conversion_Rate,Profit_per_Sale,Overhead_per_Month = 800.0;
	cout << "Input Lead per Month: ";
	cin >>Lead_per_Month;
	cout << "Input Cost per Lead: ";
	cin >> Cost_per_Lead;	
	cout << "Input Conversion Rate: ";
	cin >> Conversion_Rate;
	cout << "Input Profit per Sale: ";
	cin >> Profit_per_Sale;
	Element E(Lead_per_Month,Cost_per_Lead,Conversion_Rate,Profit_per_Sale,Overhead_per_Month);
    E.Leads_per_Month_Rand();
//	E.Show_L();
	E.Cost_per_Lead_Rand();
//	E.Show_C();
	E.Conversion_Rate_Rand();
//	E.Show_R();
	E.Profit_per_Sale_Rand();
//	E.Show_P();
	E.profit_caculation();
	E.Show_Prof();
    TH1D *f1 = new TH1D("f1","f1",100,0,1000);
    for(std::vector<double>::iterator it = E.vec_Prof.begin();it!=E.vec_Prof.end();it++)
    f1->Fill(*it);
  
}

	
