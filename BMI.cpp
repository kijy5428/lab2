#include "BMI.h"
#include <iostream>
#include <cmath>
using namespace std;
void BMI::setHeight(float height) {
	height_ = height;
	
}
void BMI::setWeight(float weight) {
	weight_ = weight;
}


float BMI::getHeight() {
	
	return height_;
}
	
float BMI::getWeight() {
	

	return weight_;
}	

float BMI::getBMI(){

	return weight_ /  pow(height_/100,2);
}

string  BMI::getCategory(){


	float  c = getBMI();
	
	if (c < 15)

		return "very severely underweight";

	else if (c >=15 && c < 16)
		return  "Severly underweight";

	else if (c >= 16 && c<18.5)

		return  "Underweight";
	
	else if (c >=18.5 && c<25)

		return  "Normal";

	else if (c>=25 && c<30)

		return "Overweight";

	else if (c>=30 && c<35)

		return "Obese class 1";

	else if (c >=35 && c<40 )

		return  "Obese class 2" ;

	else 
	
		return "Obese class 3";
}




