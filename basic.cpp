#include<iostream>
using namespace std;
//g++ filename.cpp
//./a.exe


//function

void printhello(){
    cout << "hello \n";
}
int main(){
    cout << "Hello";
    cout << "next line"<< endl;
    cout <<"hello \nworld \n";



    //variables
//primitive data types
    int age=25;
    char grade='A';
    float pi=3.14f;
    bool issafe=true;//true=1,false=0
double num=100.99;
    cout << age << endl;
    cout <<sizeof(age)<<endl;

//typecasting
   double price=10.99;
   int newp=(int)price;//newp=10

   // input
   int ages;
   cin >>age;
   cout << age <<endl;


   //operator
   int a=10,b=15;
   cout<<"sum ="<<(a+b)<<endl;
   cout<<"diff="<<(b-a)<<endl;
   cout<<"div="<<((float)b/a)<<endl;
    


    if(10<0){
        cout <<"trur"<<endl;
    }
    else cout <<"false"<<endl;

//while(cond){statements}
int count=0;
while(count<=5){
    cout << count;
    count++;
}

cin >> count;
while(count){
    cout << count;
    count--;
}
 //for(initiaization,condition,update) 
printhello();//calling function



return 0;
}


int doo(int x){ 
    if(x == 0) return 0;
    return (x % 10) + doo(x / 10);
}

int main(){
    int x;
    cin >> x;
    
    int sum = doo(x);
    cout << sum;  
    return 0;
}



/*decimal to binary
int main(){
    int bin,dec;
    cin >> dec;
     bin=0;
    int rem;
    int pow=1;
   for(int i=0;dec!=0;i++){

    rem=dec%2;
    dec=dec/2;
    bin=bin+rem*pow;
    pow=pow*10;
   }
   cout << bin;
    return 0;
}
    */
  

int main(){
//getline -whole sentence
string str;
getline(cin,str);
       return 0;
}