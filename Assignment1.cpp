#include <bits/stdc++.h>
using namespace std;

// factorial function
int fact(int n){
    int sum=1;
    for(int i=1; i<=n; i++)
    {
        sum*=i;
    }
    return sum;
}

int main()
{
    int num;
   // input a number
    cin>>num;
    int result = fact(num);

    cout<<result;
}

// Time complexity => 0(n)
// space complexity => 0(1)
