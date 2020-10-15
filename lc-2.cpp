#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
   int l=2;
   cout<<"enter the stair u wanna print"<<endl;
   cin>>n;
  while(l<=n*2)
  {
      for(i=1;i<=2;i++)
      {
          for(j=1;j<=l;j++)
          {
              cout<<"*";
          }
          cout<<"\n";
      }
      l=l+2;
}
 }
