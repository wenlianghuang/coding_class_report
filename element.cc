#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"element.h"
#include<vector>
#include<TRandom3.h>
#include<algorithm>

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
        vec_LU.push_back(rnd.Uniform(LMin,LMax));
		vec_LN.push_back(rnd.Gaus(L,(LMax-L)*0.5));
		//vec_LP.push_back(rnd.Landau(L,(LMax-LMin)*0.5));
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
        vec_CU.push_back(rnd.Uniform(CMin,CMax));
		vec_CN.push_back(rnd.Gaus(C,(CMax-C)*0.5));
		//vec_CP.push_back(rnd.Landau(C,(CMax-CMin)*0.5));
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
        vec_RU.push_back(rnd.Uniform(RMin,RMax));
		vec_RN.push_back(rnd.Gaus(R,(RMax-R)*0.5));
		vec_RP.push_back(rnd.Landau(R,(RMax-RMin)*0.5));
        vec_RE.push_back(rnd.Exp(1)*R);
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
        vec_PU.push_back(rnd.Uniform(PMin,PMax));
		vec_PN.push_back(rnd.Gaus(P,(PMax-P)*0.5));
		//vec_PP.push_back(rnd.Landau(P,(PMax-PMin)*0.5));
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
    std::vector<double>::iterator itlu=vec_LU.begin();
    std::vector<double>::iterator itcu=vec_CU.begin();
    std::vector<double>::iterator itru=vec_RU.begin();
    std::vector<double>::iterator itpu=vec_PU.begin();
	std::vector<double>::iterator itln=vec_LN.begin();
	std::vector<double>::iterator itcn=vec_CN.begin();
	std::vector<double>::iterator itrn=vec_RN.begin();
	std::vector<double>::iterator itpn=vec_PN.begin();
	std::vector<double>::iterator itrp=vec_RP.begin();
    std::vector<double>::iterator itre=vec_RE.begin();
	for(int i =0;i<50000;i++){
		double prof = (*itl)*(*itr)*(*itp)-(H+((*itl)*(*itc)));
		vec_Prof.push_back(prof);
		itl++;
		itc++;
		itr++;
		itp++;
        double profU = (*itlu)*(*itru)*(*itpu)-(H+((*itlu)*(*itcu)));
        vec_ProfU.push_back(profU);
        itlu++;
        itcu++;
        itru++;
        itpu++;
		double profN = (*itln)*(*itrn)*(*itpn)-(H+((*itln)*(*itcn)));
		vec_ProfN.push_back(profN);
		itln++;
		itcn++;
		itrn++;
		itpn++;
		double profP = (*itl)*(*itrp)*(*itp)-(H+((*itl)*(*itc)));
		vec_ProfP.push_back(profP);
		itrp++;
		double profE = (*itl)*(*itre)*(*itp)-(H+((*itl)*(*itc)));
		vec_ProfE.push_back(profE);
		itre++;
    }
	
}
void Element::no_distribution_sort()
{
	sort(vec_Prof.begin(),vec_Prof.end());
	itsmi = vec_Prof.begin();
	vitsmi = *(itsmi);
	reverse(vec_Prof.begin(),vec_Prof.end());
	itsma = vec_Prof.begin();
}
void Element::Uniform_distribution_sort()
{
    sort(vec_ProfU.begin(),vec_ProfU.end());
    itsumi = vec_ProfU.begin();
    //std::cout<<(*itsumi)<<std::endl;
    vitsumi = *(itsumi);
    //std::cout<<vitsumi<<std::endl;
    reverse(vec_ProfU.begin(),vec_ProfU.end());
    itsuma = vec_ProfU.begin();
    //std::cout<<(*itsuma)<<std::endl;
}

void Element::Gaus_distribution_sort()
{
	sort(vec_ProfN.begin(),vec_ProfN.end());
	itsnmi = vec_ProfN.begin();
	vitsnmi = *(itsnmi);
	reverse(vec_ProfN.begin(),vec_ProfN.end());
	itsnma = vec_ProfN.begin();
   

}
void Element::Landau_distribution_sort()
{
	sort(vec_ProfP.begin(),vec_ProfP.end());
	itslmi = vec_ProfP.begin();
	vitslmi = *(itslmi);
	reverse(vec_ProfP.begin(),vec_ProfP.end());
	itslma = vec_ProfP.begin();
}
void Element::Exp_distribution_sort()
{
    sort(vec_ProfE.begin(),vec_ProfE.end());
    itsemi = vec_ProfE.begin();
    vitsemi = *(itsemi);
    reverse(vec_ProfE.begin(),vec_ProfE.end());
    itsema = vec_ProfE.begin();
}
	
void Element::Show_Prof()
{
	std::cout<<"These are the profit" <<std::endl;
    for(std::vector<double>::iterator it = vec_ProfU.begin();it!=vec_ProfU.end();it++)
    {
            std::cout << *it << std::endl;

    }
    std::cout<<"***************The end************************" <<std::endl;
}



//
