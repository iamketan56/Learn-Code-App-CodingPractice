#include<iostream>
using namespace std;
int main()
{
    int drive=2052;
    int day=6;
    float km=(2052)*(1.609);
    cout<<"km:"<<(float)km<<endl;
    float average=km/day;
    cout<<"average km in a day"<<(float)average<<endl;
    float stop=average/2;
    cout<<"average between stop"<<stop;
}
