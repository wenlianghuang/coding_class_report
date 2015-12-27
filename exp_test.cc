#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<TH1D.h>
#include<TRandom3.h>

void exp_test()
{
    TRandom3 rnd(1234);
    TH1D *f1 = new TH1D("f1","f1",100,0,1.0);
    for(int i = 0;i<5000;i++)
        f1->Fill(rnd.Exp(1));
    f1->Draw();
}
