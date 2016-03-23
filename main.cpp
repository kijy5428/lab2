#include <iostream>
#include <ctime>
#include <unistd.h>
#include "BMI.h"
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {

	BMI bmi;
	float height,weight,output;
	string category;

	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{

		cerr << "Failed opening " << endl;
		exit(1);
	}	

	
	ofstream outFile("file.out",ios::out);
	if(!outFile){

		cerr << "Failed opening " << endl;
		exit(1);

	}

	while(inFile>>height>>weight){


		if(height !=0){
			
			bmi.setHeight(height);
			bmi.setWeight(weight);
			
			output = bmi.getBMI();
			category = bmi.getCategory();
			
			outFile<<fixed<<setprecision(2)<<output<<"\t" <<category<< endl;
		}
		else
			break;
	}
	

	return 0;
}
