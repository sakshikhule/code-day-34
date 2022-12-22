#include<iostream>
using namespace std;
int main()
{
    char num1[10],num2[10];
    int i=0,j=0;
    cout<<"enter expression = ";
    cin>>num1;
   while(num1[i]!='\0')
   {
       if(num1[i]!='(' && num1[i]!=')')
       {
           num2[j++]=num1[i];
       }
       i++;
   }
        cout<<"string = "<<num2;
        return 0;
}
