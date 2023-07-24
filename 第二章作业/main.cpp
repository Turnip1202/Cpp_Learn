#include "iostream"
using namespace std;

double convert(double);

int main() {
  cout<<"Please enter a Celsius value: ";
  double degree;
  cin>>degree;
  double convertdegree;
  convertdegree = convert(degree);
  cout<<degree<<" degree Celsius is "<<convertdegree<< " degree Fahrenheit."<<endl;
  


  return 0;
}
double convert(double degree){
  return 1.8 * degree +32.0;
}