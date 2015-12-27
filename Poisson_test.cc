#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<TH1D.h>
#include<TRandom3.h>

void Poisson_test()
{
    TRandom3 rnd(1234);
    
    TH1D *d1 = new TH1D("d1","d1",500,0,500);
    for(int i=0 ;i<5000;i++)
    {
    d1->Fill(rnd.Poisson(500*0.2));
}
    d1->Draw("");
}

