#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;
    cin >> n;
   vector<int> vec(n);
for (int i = 0; i < n; i++) {
    cin >> vec[i];
}
reverse(vec);
reversep(vec,2,4);
for(int x:vec){
    cout<< x<<" ";
}
return 0;
}




/*swapping till middle element*/
/*
void reverse(vector<int> &vec){
int l=0,r=vec.size()-1;
for(;l<r;){
    swap(vec[l],vec[r]);
l++;
r--;
}

}


*/

//using inbuilt stl
/*#include<algorithm>
void reverse(vector<int> &vec){
    reverse(vec.begin(),vec.end());
}*/

//reversing paticular elements only
/*
void reversep(vector<int>vec,int start,int end){
    int l=start,r=end;
    for(;l<r;){
        swap(vec[l++],vec[r--]);
    }
}
    */

//shifting array k times right
/*
#include<algorithm>
    void rotate(vector<int>&vec,int k){
        k=k%(vec.size());
        reverse(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end()+k);
        reverse(vec.begin()+k,vec.end());

    }
        */



