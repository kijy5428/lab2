#include<string>
using namespace std;
class BMI {
public:
	void setHeight(float height);
	void setWeight(float weight);
	float getHeight();
	float getWeight();
	float getBMI();
	string  getCategory();



private:
	
	float height_;
	float weight_;
	float bmi;

};
