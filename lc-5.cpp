#include<iostream>
using namespace std;
int main()
{
    cout<<"shoshana achieves the following times in sec \n 66,57,54,53,64,52,59"<<endl;
    int a[9]={66,57,54,53,64,52,59,107,54};
    int i,j,temp;
   for(i=0;i<9;i++)
   {
       for(j=0;j<8;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   cout<<"so the best score is\n"<<a[8]<<endl;
}
