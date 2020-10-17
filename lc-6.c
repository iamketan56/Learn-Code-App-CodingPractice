#include<iostream>
using namespace std;
int main()
{
    int n,f,u,o,t;
    cout<<"total space in the disk"<<endl;
    cin>>t;
    cout<<"used space in disk"<<endl;
    cin>>u;
    cout<<"so free space will be"<<(t-u)<<endl;
    cout<<"delete a file of size"<<endl;
    cin>>o;
    cout<<"create a new file of size"<<endl;
    cin>>n;
    cout<<"so now free bytes floppy disk have"<<(t-u)+o-n)<<endl;
}
