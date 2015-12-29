#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include"element_advance.h"
#include<algorithm>
#define sdup 0.05
#include<math.h>
void Element_advance::Buying_People_Decay_Graph()
{
	//double nbpt; // number of buying people temparary variable
    nbpt = L*R;	
	//double sdup=0.05;
	for(int i = 0;i<6;i++){
	   //	nbpt = nbpt-(sdup*i*i+5*sdup*i);
		nbpt = nbpt*pow(1.2,-i);
		nbp.push_back(nbpt);
	
	}
}


