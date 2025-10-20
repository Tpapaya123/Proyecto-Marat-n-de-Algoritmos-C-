#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; int main(){srand(time(0)); int d1=rand()%6+1,d2=rand()%6+1; if((d1+d2)%2==0 && d1+d2>7) cout<<"Gano"<<endl; return 0;}