#include<fstream>
#include<iostream>

using namespace std;
void read_the_file();
int main()
{
	fstream file;
	
	file.open("/home/wenliang/coding_class_report/number_to_file.txt",ios::out|ios::trunc);
	
	double n1 = 10.0;
	double n2 = 11.0;
	double n3 = 12.0;
	double n4 = 13.0;

	file<<n1<<endl;
	file<<n2<<endl;
	file<<n3<<endl;
	file<<n4<<endl;
	
	/*file<<n1<<"\t"<<n2<<endl;
	file<<n3<<"\t"<<n4<<endl;*/
	
	file.close();
	read_the_file();
}

void read_the_file()
{
	fstream filer;
	
	filer.open("/home/wenliang/coding_class_report/number_to_file.txt",ios::in);

	double m1,m2,m3,m4;
	
		filer>>m1>>m2>>m3>>m4;
		cout <<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<endl;


filer.close();
}
