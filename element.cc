#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"element.h"
#include<vector>
#include<TRandom3.h>

TRandom3 rnd(1234);

Element::Element(double Leads_per_Month,double Cost_per_Lead,double Conversion_Rate,double Profit_per_Sale,double Overhead_per_Month)
{
	L = Leads_per_Month;
	C = Cost_per_Lead;
	R = Conversion_Rate;
	P = Profit_per_Sale;
	H = Overhead_per_Month;
}
void Element::Leads_per_Month_Rand()
{
	double LMin = L*0.8;
	double LMax = L*1.2;
	double rndf,LRand;
	for (int i=0;i<50000;i++){
		rndf = (double)rand()/(RAND_MAX+1.0);
		LRand = (LMax-LMin)*rndf+LMin;
		vec_L.push_back(LRand);
		vec_LN.push_back(rnd.Gaus(L,(LMax-L)*0.5));
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

void Element::Cost_per_Lead_Rand()
{
	double CMin = C*0.8;
    double CMax = C*1.2;
    double rndf,CRand;
    for (int i=0;i<50000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        CRand = (CMax-CMin)*rndf+CMin;
        vec_C.push_back(CRand);
		vec_CN.push_back(rnd.Gaus(C,(CMax-C)*0.5));
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
void Element::Conversion_Rate_Rand()
{
    double RMin = R*0.8;
    double RMax = R*1.2;
    double rndf,RRand;
    for (int i=0;i<50000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        RRand = (RMax-RMin)*rndf+RMin;
        vec_R.push_back(RRand);
		vec_RN.push_back(rnd.Gaus(R,(RMax-R)*0.5));
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

void Element::Profit_per_Sale_Rand()
{
    double PMin = P*0.8;
    double PMax = P*1.2;
    double rndf,PRand;
    for (int i=0;i<50000;i++){
        rndf = (double)rand()/(RAND_MAX+1.0);
        PRand = (PMax-PMin)*rndf+PMin;
        vec_P.push_back(PRand);
		vec_PN.push_back(rnd.Gaus(P,(PMax-P)*0.5));
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

void Element::profit_caculation()
{
	std::vector<double>::iterator itl=vec_L.begin();
	std::vector<double>::iterator itc=vec_C.begin();
	std::vector<double>::iterator itr=vec_R.begin();
	std::vector<double>::iterator itp=vec_P.begin();
	std::vector<double>::iterator itln=vec_LN.begin();
	std::vector<double>::iterator itcn=vec_CN.begin();
	std::vector<double>::iterator itrn=vec_RN.begin();
	std::vector<double>::iterator itpn=vec_PN.begin();
	for(int i =0;i<50000;i++){
		double prof = (*itl)*(*itr)*(*itp)-(H+((*itl)*(*itc)));
		vec_Prof.push_back(prof);
		itl++;
		itc++;
		itr++;
		itp++;
		double profN = (*itln)*(*itrn)*(*itpn)-(H+((*itln)*(*itcn)));
		vec_ProfN.push_back(profN);
		itln++;
		itcn++;
		itrn++;
		itpn++;

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




