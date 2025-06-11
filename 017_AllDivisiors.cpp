#include<iostream>
using namespace std;

void allDivisiors(int n){
   vector <int> div;
   for(int i=0; i<=sqrt(n); i++){
      if(n%i==0){
         div.push_back(i);
         if(n/i!=i) div.push_back(i);
      }
   }
   sort(div.begin(), div.end();)  
   for(int i: div) cout<<i;
}
int main(){
   allDivisiors(36);
   return 0;
}
