#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"element.h"
#include<vector>

Element::Element(double Leads_per_Month,double Cost_per_Lead,double Conversion_Rate,double Profit_per_Sale,double Overhead_per_Month)
{
	L = Leads_per_Month;
	C = Cost_per_Lead;
	R = Conversion_Rate;
	P = Profit_per_Sale;
	H = Overhead_per_Month;
}
double Element::Leads_per_Month_Rand()
{
//	std::vector<double> vec_L;
	double LMin = L*0.8;
	double LMax = L*1.2;
	double rndf,LRand;
	for (int i=0;i<500000;i++){
		rndf = (double)rand()/(RAND_MAX+1.0);
		LRand = (LMax-LMin)*rndf+LMin;
		vec_L.push_back(LRand);
	}
}

void Element::Show_L()
{
	std::cout<<"These are the random numbers of Lead per Month" <<std::endl;
	for(std::vector<double>::iterator it = vec_L.begin();it!=vec_L.end();it++)
	{
			std::cout << *it << std::endl;
				
	}
	std::cout<<"***************The end************************" <<std::endl;
}

double Element::Cost_per_Lead_Rand()
{
	double CMin = C*0.8;
    double CMax = C*1.2;
    double rndf,CRand;
    for (int i=0;i<500000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        CRand = (CMax-CMin)*rndf+CMin;
        vec_C.push_back(CRand);
    }
}

void Element::Show_C()
{
    std::cout<<"These are the random numbers of Cost per Lead" <<std::endl;
    for(std::vector<double>::iterator it = vec_C.begin();it!=vec_C.end();it++)
    {
            std::cout << *it << std::endl;

    }
    std::cout<<"***************The end************************" <<std::endl;
}
double Element::Conversion_Rate_Rand()
{
    double RMin = R*0.8;
    double RMax = R*1.2;
    double rndf,RRand;
    for (int i=0;i<500000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        RRand = (RMax-RMin)*rndf+RMin;
        vec_R.push_back(RRand);
    }
}

void Element::Show_R()
{
    std::cout<<"These are the random numbers of Cost per Lead" <<std::endl;
    for(std::vector<double>::iterator it = vec_R.begin();it!=vec_R.end();it++)
    {
            std::cout << *it << std::endl;

    }
    std::cout<<"***************The end************************" <<std::endl;
}

double Element::Profit_per_Sale_Rand()
{
    double PMin = P*0.8;
    double PMax = P*1.2;
    double rndf,PRand;
    for (int i=0;i<500000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        PRand = (PMax-PMin)*rndf+PMin;
        vec_P.push_back(PRand);
    }
}

void Element::Show_P()
{
    std::cout<<"These are the random numbers of Cost per Lead" <<std::endl;
    for(std::vector<double>::iterator it = vec_P.begin();it!=vec_P.end();it++)
    {
            std::cout << *it << std::endl;

    }
    std::cout<<"***************The end************************" <<std::endl;
}


	
/*double Element::income_caculation()
{
	income = L*R*P;
}

double Element::expense_caculation()
{
	expense = ;
}*/

double Element::profit_caculation()
{
	std::vector<double>::iterator itl=vec_L.begin();
	std::vector<double>::iterator itc=vec_C.begin();
	std::vector<double>::iterator itr=vec_R.begin();
	std::vector<double>::iterator itp=vec_P.begin();
	for(int i =0;i<500000;i++){
		double prof = (*itl)*(*itr)*(*itp)-(H+((*itl)*(*itc)));
		vec_Prof.push_back(prof);
		itl++;
		itc++;
		itr++;
		itp++;
	}
	
}
void Element::Show_Prof()
{
	std::cout<<"These are the profit" <<std::endl;
    for(std::vector<double>::iterator it = vec_Prof.begin();it!=vec_Prof.end();it++)
    {
            std::cout << *it << std::endl;

    }
    std::cout<<"***************The end************************" <<std::endl;
}




