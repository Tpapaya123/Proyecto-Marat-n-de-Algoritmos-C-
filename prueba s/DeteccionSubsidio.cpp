#include <iostream>
#include <string>
using namespace std; int main(){double ingresos; string jefe; cin>>ingresos>>jefe; if((ingresos<2000 && jefe=="Si")||ingresos<1000) cout<<"Subsidio otorgado"<<endl; else cout<<"No hay subsidio"<<endl; return 0;}