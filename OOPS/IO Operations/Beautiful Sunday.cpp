#include <iostream>
#include <iomanip>
int main()
{
    float num1,num2;
    double resnum1,resnum2;
    std::cin>>num1;
    std::cin>>num2;
    resnum1=num1;
    resnum2=num2;
  std::cout<<std::fixed<<std::setprecision(6)<<resnum1<<'\n';
  std::cout<<std::setprecision(6)<<resnum2<<'\n';
  return 0;
}
