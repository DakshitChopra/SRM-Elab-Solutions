//Problem Description:
On one beautiful Sunday Selvan went to Aaron's house for exam preparation. 
They have decided to study Mathematics subject because they have exams by coming Monday,Aaron is a master in Mathematics but Selvan is not so good in Mathematics so James
trained with Selvan for getting a high score in the exam.
After teaching some problems to Selvan.Aaron have given some tasks to Selvan to solve .
The problem is to convert input float into a double. Can you help Selvan in finding the solution ? 

Constraint: 
1.00 ≤ num1 ≤ 100.00 
1.00 ≤ num2 ≤ 100.00 
1.00 ≤ resnum1 ≤ 100.00 
1.00 ≤ resnum2 ≤ 100.00 

Input format: 
The first and second line of the input represents two different input value of type float.
Output format: 
The first and second line of the output represents outputs of first and second line of input of type double.
    
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
