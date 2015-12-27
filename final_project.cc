#include<iostream>
#include<stdlib.h>
#include"element.h"
#include<vector>
#include"TH1D.h"
#include"THStack.h"
#include"TCanvas.h"

using namespace std;
void final_project()
{
	double Lead_per_Month,Cost_per_Lead,Conversion_Rate,Profit_per_Sale,Overhead_per_Month = 800.0;
	THStack *hs = new THStack("hs","");
	
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
    cout << "flag1" <<endl;

	E.profit_caculation();
	E.Show_Prof();
    cout << "flag2" <<endl;

	E.no_distribution_sort();
    cout << "flag3" <<endl;

    E.Uniform_distribution_sort();
    cout<< "flag4" <<endl;
	E.Gaus_distribution_sort();
	E.Landau_distribution_sort();
    //E.Exp_distribution_sort();
	int n_bin = (*(E.itsma)-E.vitsmi)/10.0;
	int g_bin = (*(E.itsnma)-E.vitsnmi)/10.0;
	int l_bin = (*(E.itslma)-E.vitslmi)/10.0;
        //int e_bin = (*(E.itsema)-E.vitsemi)/10.0;
    int u_bin = (*(E.itsuma)-E.vitsumi)/10.0;
    TH1D *f1 = new TH1D("f1","f1",n_bin,(E.vitsmi),*(E.itsma));
    for(std::vector<double>::iterator it = E.vec_Prof.begin();it!=E.vec_Prof.end();it++)
    f1->Fill(*it);
	f1->SetFillColor(kBlue);
    //hs->Add(f1);
	TH1D *f2 = new TH1D("f2","f2",g_bin,(E.vitsnmi),*(E.itsnma));
	for(std::vector<double>::iterator it2 = E.vec_ProfN.begin();it2!=E.vec_ProfN.end();it2++)
  	f2->Fill(*it2);
	f2->SetFillColor(kGreen);
    //hs->Add(f2);
	TH1D *f3 = new TH1D("f3","f3",500,(E.vitslmi),10000);
	for(std::vector<double>::iterator it3 = E.vec_ProfP.begin();it3!=E.vec_ProfP.end();it3++)
	f3->Fill(*it3);
	f3->SetFillColor(6);
    /*TH1D *f4 = new TH1D("f4","f4",500,(E.vitsemi),*(E.itsema));
    for(std::vector<double>::iterator it4 = E.vec_ProfE.begin();it4!=E.vec_ProfE.end();it4++)
    f4->Fill(*it4);
    f4->SetFillColor(29);*/
	//hs->Add(f3);
    TH1D *f5 = new TH1D("f5","f5",500,(E.vitsumi),*(E.itsuma));
    for(std::vector<double>::iterator it5 = E.vec_ProfU.begin();it5!=E.vec_ProfU.end();it5++)
    f5->Fill(*it5);
    f5->SetFillColor(29);
	TCanvas *cs = new TCanvas("cs","cs",700,900);
	cs->Divide(2,2);
	//cs->cd(1); hs->Draw();
	cs->cd(1); f1->Draw();
	cs->cd(2); f2->Draw();
	cs->cd(3); f3->Draw();
    cs->cd(4); f5->Draw();	
}

	
