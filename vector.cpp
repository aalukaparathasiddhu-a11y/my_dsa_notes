//vectors are dynamic in nature nd not fixed size
//has inbuilt function stl std template lib(vector,queue,stack,set)
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
vector<int> vec1;//initially size 0
vector<int> vec2={1,2,3,5};
vector<int>vec3(3,0);//(size of vector and all value initialozed to 0)
for(int i :vec3){
    cout << i << endl;
}

cout << vec2[0]<<endl;//if error come type g++ ~std=c++11


//different functions in vector

//size
cout<<"size is " <<vec2.size()<<endl;

//push back
vec2.push_back(6);//extend size by 1 and add 6 in last index
cout<<"after push back"<<endl;
for(int i :vec2){
    cout << i << endl;
}

//pop back-remove last elemnet
vec2.pop_back();
cout<<"after popback"<<endl;
for(int i :vec2){
    cout << i << endl;
}

//front-prints 1st elemt nd back
cout<<"front-"<<vec2.front()<<endl<<"back-"<<vec2.back()<<endl;
//at
cout<<"at 2nd-"<<vec2.at(1)<<endl;


return 0;
}