#include<iostream>
#include<vector>

using namespace std;
int main(){

int n;
cin>>n;
/*
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout << "*";
    }
    cout<<endl;

}
*/
/*
for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
        cout << "*";
    }
    cout<<endl;

}
*/
/*
for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
        cout << i <<" ";
    }
    cout<<endl;

}
    */
 /*
   for(int i=5;i>0;i--){
    for(int j=1;j<i;j++){
        cout<< j <<" ";
    }
    cout<<endl;

}
    */
/*
    for(int i=0;i<5;i++){
    for(int j=5;j>i;j--){
        cout<<"  ";
    }
    for(int j=0;j<2*i+1;j++)
    cout <<"* ";
        cout<<endl;

}*/
/*
 for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
        cout<<"  ";
    }
    for(int j=11;j>=2*i+3;j--){
    cout <<"* ";
    
    }
        cout<<endl;
 }
    */    
       
  
        for(int i=0;i<5;i++){
            for(int j=4;j>i;j--){
        cout<<"  ";
        } for(int j=1;j<=2*i+1;j++){
    cout <<"* ";

        }
        cout <<  endl;
    }

        for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
        cout<<"  ";
    }
    for(int j=11;j>=2*i+3;j--){
    cout <<"* ";
    
    }
        cout<<endl;
 }
    
/*
for(int i=1;i<=n;i++){
   for(int j=0;j<i;j++) cout << "* ";
cout <<endl;
}
for(int i=1;i<=n;i++){
   for(int j=n;j>i;j--) cout << "* ";
cout<<endl;
}
*/
/*
int q;
for(int i=1;i<=n;i++){
    if(i%2==0) q=0;
if(i%2!=0) q=1;
    for(int j=0;j<i;j++){
      cout << q;
      q=q^1; 
}
cout<<endl;

}
*/
/*
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=5-i;j>0;j--){
        cout<<"  ";
    }
    
    for(int j=i;j>0;j--){
        cout<<j;
    }
cout<<endl;
}
*/
/*
int q=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++ ){
        cout<<q;
        q++;
    }
    cout<<endl;
}
    */
   /*
   for(int i=1;i<=n;i++){
    char t='A';
    for(int j=1;j<=i;j++){
        cout<<t<<" ";
t++;
    }
    cout<<endl;


}
*/
 /*
   for(int i=1;i<=n;i++){
    char t='A';
    for(int j=n;j>=i;j--){
        cout<<t<<" ";
t++;
    }
    cout<<endl;


}
*/
 /*
 char t='A';
   for(int i=1;i<=n;i++){
    
    for(int j=1;j<=i;j++){
        cout<<t<<" ";

    }
t++;
    cout<<endl;


}
*/
/*
for(int i=1;i<=5;i++){
    char t='A';
    for(int j=5;j>i;j--)cout<<" ";
    for(int j=1;j<=i;j++){
        cout<<t;
        t++;
}
t--;
for(int j=i;j>1;j--)cout<<--t;
cout<<endl;
}
*/
/*
char t='A'+n-1;//E
for(int i=1;i<=5;i++){
    
    for(int j=0;j<i;j++){
cout<<(char)(t+j)<<" ";

    }
    t--;
    cout<<endl;
}
    */
   /*
   for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++) cout<<"*";
    for(int j=2*(5-i);j>0;j--)cout<<" ";
      for(int j=1;j<=i;j++) cout<<"*";
   cout<<endl;
}
     for(int i=1;i<=4;i++){
    for(int j=4;j>=i;j--) cout<<"*";
    for(int j=2*(i);j>0;j--)cout<<" ";
      for(int j=4;j>=i;j--) cout<<"*";
   cout<<endl;
}
   */
 /*
    for(int i=0;i<n;i++){
    cout<<"*";
        }
  cout<<endl;
   for(int i=0;i<n-2;i++){
     cout<<"*";
          for(int j=0;j<n-2;j++){
             cout<<" ";
                }
        cout<<"*"<<endl;

    }

  for(int i=0;i<n;i++){
    cout<<"*";
  }
  cout<<endl;
*/
/*
int size=2*n-1;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        int pr=n-min(min(i,j),min(size-i-1,size-j-1));
        cout<<pr<<" ";
    }
    cout<<endl;
}
    */
   
}