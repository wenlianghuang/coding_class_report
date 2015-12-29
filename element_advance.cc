#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include "element_advance.h"

void Element_advance::Buying_People_Decay()
{
	//double nbpt; // number of buying people temparary variable
    nbpt = L*R;	
	double sdup=0.05;
	for(int i = 0;i<6;i++){
		nbpt = nbpt-(sdup*i*i+5*sdup*i);
		nbp.push_back(nbpt);
	
	}
	//std::vector<double>::iterator it=nbp.begin();
	//std::cout<<"bupd" << *(it) <<endl;
}


