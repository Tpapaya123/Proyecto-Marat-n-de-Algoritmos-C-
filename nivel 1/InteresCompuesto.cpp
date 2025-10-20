#include <iostream>
using namespace std;
int main(){double capital,tasa; int anos; cin>>capital>>tasa>>anos; for(int i=0;i<anos*12;i++) capital*=1+tasa/12; cout<<capital<<endl; return 0;}