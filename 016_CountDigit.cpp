#include<iostream>
using namespace std;

int count(int n){
int cnt=0;
  while(n>0){
    n/=10;
    cnt++;
  }
  return cnt;
}

int count2(int n){
  int cnt=(int)(log10(n)+1)
  return cnt;
}
int main(){
   int num=374747;
   cout<<count(num);
   //cout<<count(num);
}
