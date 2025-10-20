#include <iostream>
using namespace std; int main(){int h; cin>>h; int w=h/168; h%=168; int d=h/24; h%=24; cout<<w<<" semanas, "<<d<<" dias, "<<h<<" horas"<<endl; return 0;}