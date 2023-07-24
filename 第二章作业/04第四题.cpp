#include "iostream"
using namespace std;

//函数声明
int convert(int);

int main() {
  cout<<"Enter your age: ";
  int age,month;
  cin>>age;
  month = convert(age);
  cout<<"It means "<< month <<" months "<<endl;


  return 0;
}
int convert(int age){
  return  12 * age;
}
