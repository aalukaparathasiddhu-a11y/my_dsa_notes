#include<bits/stdc++.h>
using namespace std;
int NoOfDigit(int n){
    int i=0;
    while(n!=0){
        n=n/10;
        i++;
    }
    return i;
}
int Reverse(int n){
    int rev=0;
    for(;n!=0;n/=10){
        rev=(rev*10)+(n%10);
    }
    return rev;
}
int palindrome(int n){
    int k=Reverse(n);
    return n==k;
}
int gcd(int a,int b){
if(a<b) swap(a,b);
if(b==0) return a;
    return gcd(b,a%b);
}
int armstrong(int a){
    int n=NoOfDigit(a);
    int b=a;
    int sum=0;
    while(a!=0){
        sum=sum+(int)round(pow((a%10)*1.0,n*1.0));
        a=a/10;
    }
return b==sum;
}
void divisor(int n){
    for(int i=1;i<=n;i++){
if(n%i==0) cout<<i<<" ";

    }
    
}
    int prime(int n){
for(int i=2;i*i<=n;i++){
if(n%i==0) return 0;
}
 return 1;
}
 int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}   
    
    int main(){
   cout<<prime(47);
    cout<<"thanks";
}