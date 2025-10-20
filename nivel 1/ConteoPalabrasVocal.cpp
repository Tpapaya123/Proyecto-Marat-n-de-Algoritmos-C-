#include <iostream>
#include <sstream>
using namespace std;
int main(){string frase; getline(cin,frase); stringstream ss(frase); string word; int count=0; while(ss>>word){char c=tolower(word[0]); if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;} cout<<count<<endl; return 0;}