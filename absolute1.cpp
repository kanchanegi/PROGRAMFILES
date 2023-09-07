//writw a program find absolute,relative and percentage error
#include<iostream>
using namespace std;
int main()
{
    float T,A,EA,ER,PR;
    cout<<"Enter true value:";
    cin>>T;
    cout<<"Enter absolute value:";
    cin>>A;
    EA=T-A;
    ER=EA/T;
    PR=(EA/T)*100;
    cout<<"absolute error:"<<EA<<endl;
     cout<<"relative error:"<<ER<<endl;
      cout<<"percentage erroe:"<<PR<<endl;
}