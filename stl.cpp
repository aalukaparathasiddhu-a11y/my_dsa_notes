#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int,int> p1={1,3};
    cout<< p1.first<<" "<<p1.second;
    pair<int,pair<int,int>> p2={1,{1,3}};
    cout<<p1.first<<" "<<p2.second.second;

}

void  explainVector(){
vector<int>v;
v.push_back(1);
v.emplace_back(5);
vector<int> v2(5,100);//(size,value in each container)
vector<int>v3(v2);//copying v2 in v3;


vector<int>::iterator it=v2.begin();//it points to first element of v3
cout<<*(it++)<<endl;
cout<<*(it)<<endl;

for(vector<int>::iterator itt=v2.begin();itt!=v.end();itt++){
    cout<<*(itt)<<" ";
}
for(auto itt=v2.begin();itt!=v.end();itt++){
    cout<<*(itt)<<" ";
}
v2.erase(v2.begin()+1);
v2.erase(v2.end());
vector<int>lt(2,100);//{100;100}
lt.insert(v.begin(),300);//{300,100,100}
lt.insert(lt.begin()+1,2,10);//{300,10,10,100,100}
lt.pop_back();//{300,10,10,100}
lt.swap(v2);
v2.clear();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(5);//{2,5}
    ls.push_front(3);//{3,2,5}
    ls.emplace_front(4);//{4,3,2,5}
}

void explainDeque(){
    deque<int> qu;
    qu.push_back(1);//{1}
    qu.push_front(2);//{1,2}
    qu.emplace_back(5);//{1,2,5}
    qu.pop_back();//{1,2}
    qu.back();
}

void explainStack(){//LastInFirstOut
     stack<int> st;
     st.push(1);//{1}
     st.push(2);//{2,1}
     st.push(3);//{3,2,1}
     st.push(4);//{4,3,2,1}
    st.emplace(5);//{5,4,3,2,1}
    cout<<st.top();//5
    st.pop();//{4,3,2,1}
    cout<<st.size();//4
    cout<<st.empty();
    stack<int>st2;
    st2.swap(st);
}

void ExplainQueue(){
    //lastin last out
    //firstin first out
    queue<int>qu;
    qu.push(1);//{1}
    qu.push(2);//{1,2}
    qu.push(4);//{1,2,4}
    qu.back()=+5;//{1,2,9}
    qu.pop();//{2,9}
}

void explainPQ(){
    priority_queue<int>pq;//max heap
    pq.push(5); // {5}
pq.push(2); // {5, 2}
pq.push(8); // {8, 5, 2}
pq.emplace(10); // {10, 8, 5, 2}

priority_queue<int,vector<int>,greater<int>>pq1;//min heap
pq1.push(5);//{5}
pq1.push(4);//{4,5}
pq1.push(8);//{4,5,8}


}
//push happens in o(logn),top(o(1),pop in o(logn);

void explsinSet(){
    //unique sorted elements
    set<int>st;
    st.insert(1);//{1}
    st.insert(4);//{1,4}
    st.insert(1);//{1,4}
    st.insert(2);//{1,2,4}
auto it=st.find(2);//points to 2
auto it=st.find(100);//points after last element
int cnt=st.count(1);

}
void explainMultiset(){
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(2);//{1,1,2}
    ms.insert(6);//{1,1,2,6}
    ms.erase(1);//{2,6}
    ms.insert(1);
    ms.insert(1);//{1,1,2,6}
    ms.erase(ms.find(1));//{1,2,6}
}
void explainUset(){
    //not sorted but unique
    unordered_set<int>st;
    //all other same
}
  void explainMap(){
    map<int,int>mpp;
    mpp[1]=2;
    mpp.emplace(2,4);


  }  

 /* sort(a,a+n);//sort array a
  sort(a,a+n,greater<int>);//desecending order
*/
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.second==p2.second){
        if(p1.first>p2.first) return true;
        return false;
    }
}
int main(){
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort in ascending wrt 2nd element;if second then arrange acc tro first in desending
    //{4,1},{2,1}{1,2}
    sort(a,a+3,comp);
    int num=7;
    int cnt=__builtin_popcount(num);
}