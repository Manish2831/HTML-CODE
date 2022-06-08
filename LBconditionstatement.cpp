#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Program1
   // int a;
    //cin>>a;
   // cout <<"Value of n is:"<< n <<endl;
   /*
   if(a>0){
       cout<<"A is positive"<<endl;
   }
   else{
       cout<<"A is negative"<<endl;
   }
  
  //Program2
  int a,b;
  cout<<"Enter the value of a:-"<<endl;
  cin>>a;
  cout<<"Enter the value of b:- "<<endl;
  cin>>b;
  if(a>b){
      cout<<" A is greater"<<endl;
  }
  if(b>a){
      cout<<"B is greater"<<endl;
  }
  
  //Program3
 int a;
 cout<<"Enter the value of a"<<endl;
 cin>>a;
 if(a>0){
     cout<<"A is positive";
 }
 else{
     if(a<0){
         cout<<"A is negative";
 }
 else{
     cout<<"A is 0";
 }
 }

//Program4
int n;
cin>>n;
int i=1;
while(i<=n){
    cout<<i<<" ";
    i=i+1;
}
 
 //Program5
 int n;
 cin>>n;
 int i=2;
 int sum=0;
 while(i<=n){
     sum=sum+i;
     i=i+1;
 }
 cout<<"Value of sum is: "<<sum<<endl;
 
 //Program6
 int n;
 cin>>n;
 int i=2;
 while(i<n){
   if(n%i==0){
       cout<<"Not prime"<<endl;
   }
   else{
       cout<<"Prime for"<<i<<endl;
   }  
   i=i+1;
 }
 
 //Program7
 int a;
 cin>>a;
 //cout<<"Value of n is :"<< n <<endl;
//if a is positive
if(a>0){
    cout<<"A is positive"<<endl;
}
else{
    cout<<"A is negative"<<endl;
}

//Program8
 int a,b;
 cout<<"Enter the Value of a" <<endl;
 cin>>a;
 cout<<"Enter the value of b"<<endl;
 cin>>b;
 if(a>b){
     cout<<"A is greater"<<endl;
 }
 if(b>a){
     cout<<"B is greater"<<endl;
 }
  
 //Program9
 int n;
 cin>>n;
 int i=1;
 while(i<=n){
     cout<<i<<" ";
     i=i+1;
 }
  
 //Program10
 int n;
 cin>>n;

 int i=1;
 int sum =0;

 while(i<=n){
     sum =sum+i;
     i = i+1;
 }
 cout<<"Value of sum is "<<sum<<endl;

//Program11
int n;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"Not prime"<<endl;
    }
    i=i+1;
}

//Program12
//Pattern1 making
int n;
cin>>n;

int i = 1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

//Program13
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<i;
        j=j+1;
    }
    cout<<endl; 
    i=i+1;
}
 
//Program14
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl; 
    i=i+1;
}

//Program15

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl; 
    i=i+1;
}

//Program16
int n;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

//Program17
int n;
cin>>n;
int row=1; 
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<"*";
        col=col+1;

    }
    cout<<endl;
    row=row+1;
}

//Program18
int n;
cin>>n;
int row=1; 
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<row;
        col=col+1;

    }
    cout<<endl;
    row=row+1;
}

//Program19
int n;
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    int value=row;
    while(col<=row){
        cout<<value;
        value=value+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}

//Program20
int n;
cin>>n;
int i=1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<(i-j+1)<<" ";
        j = j+1;
    }
    cout<<endl;
    i =i+1;
}

//Program21
int n;
cin>>n;
int row =1;
while(row<=n){
    int col =1;
    while(col<=n){
        char ch='A'+row-1;
    cout<<ch;
    col=col+1;
    }
    cout<<endl;
    row=row+1;
}

//Program22
int n;
cin>>n;
int row =1;
while(row<=n){
    int col =1;
    while(col<=n){
        char ch='A'+col-1;
    cout<<ch;
    col=col+1; 
    }
    cout<<endl;
    row=row+1;
}

//Program23
int n;
cin>>n;
int row =1;
while(row<=n){
   int col=1;
   while(col<=row){
       char ch=('A'+row-1);
       cout<<ch;
       col =col+1;
   } 
   cout<<endl;
   row=row+1;
}

//Program24
int a=4; 
int b=6;
cout<<"a&b"<<(a&b)<<endl;
cout<<"a|b"<<(a|b)<<endl;
cout<<"~a"<<~a<<endl;
cout<<"a^b"<<(a^b)<<endl;

//Program25
for(int i=0; i<5;i++) {
    cout<<"HI"<<endl;
    cout<<"HEY"<<endl;
    continue;
    cout<<"Reply to karde"<<endl;
}

//Program25
int a=3;
cout<<a<<endl;
if(true){
    int a=5;
    cout<<a <<endl;
}
cout<<a<<endl;

//Program26
int n;
cin>>n;
int ans =0;
int i=0;
while(n!=0){
    int bit = n& 1;
    ans= (bit * pow(10,i))+ans;
    n=n>>1;
    i++;
     
}
cout<<"Answer is " <<ans<<endl;

//Switch Statement & Function Program
//Program27
int num =2;
cout<< endl;
switch(num){
    case 1:cout<<"First"<<endl;
    break;
    case 2:cout<<"Second"<<endl;
    break;
    default:cout << "It is default case"<<endl;
}
cout<<endl;


//Program 28
// Mini Calculator 
int a,b;
cout<<"Enter the value of a"<<endl;
cin>>a;

cout<<"Enter the value of b"<<endl;
cin >>b;
char op;
cout<<"Enter thr Operation you want to perform"<<endl;
cin>>op;
switch(op){
    case '+':cout<<(a+b)<<endl;
    break;
    case '-':cout<<(a-b)<<endl;
    break;
    case '*':cout <<(a*b)<<endl;
    break;
    case '/':cout<<(a/b)<<endl;
    break;
    case '%':cout<<(a%b)<<endl;
    break;
    default:cout<<"Please enter a valid Operation"<<endl;

}

//Program 29
//Function topic
int a,b;
cin>> a>>b;
int ans =1;
for(int i=1;i<=b;i++){
    ans = ans *a;

}
cout<<"answer is : "<<ans <<endl;
return 0;

//Program 30
int actorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
 int nCr(int n,int r){
   int num = fact(n);
   int denpm = fact(r)*fact(n-r);
   int ans = num/denom;
   return ans;
 }

}
*/
