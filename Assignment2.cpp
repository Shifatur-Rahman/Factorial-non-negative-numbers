#include <bits/stdc++.h>
using namespace std;
int main(){

int a, b, max_num, min_num, sum=0;
// please input two integer number
cin>>a>>b;

if(a>=b){
    max_num = a;
    min_num = b;
} else if(a<=b){
   max_num = b;
   min_num = a;
}

for(int i = min_num; i<=max_num; i++){
    sum+=i;
}

cout<<sum<<endl;

}

// Time complexity => 0(n)
// space complexity => 0(1)
