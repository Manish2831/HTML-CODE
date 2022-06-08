#include<iostream>
using namespace std;

//hold 
void printArray(int arr[15],int size){
    cout <<"printing the array" <<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout << arr[i] <<"";
    }
    cout <<"printing DONE" <<endl;
    
}


int main(){

//declare
int number[15] ={};

//accessing an array

cout<< "value at 14 index "<<  number[14] <<endl;

//cout<< "value at 20 index "<<    number[20] <<endl;

int second[3] = {3,7,11};
//accessing an a element
cout<< "value at 2 index "<<  second [2] <<endl;

int third[15] ={2,7};

int n=15;
cout<<"printing the array"<<endl;
//print the array
for(int i=0;i<n;i++){
    cout<< third[i] << " ";
}
int fourth[10] = {0};
n = 10;
cout<<"printing the array"<<endl;
//print the array
for(int i=0;i<n;i++){
    cout<< fourth[i] << " ";
}

int fifth[10] = {1};
n = 10;
cout<<"printing the array"<<endl;
//print the array
for(int i=0;i<n;i++){
    cout<< fifth[i] << " ";
}

char ch[5] = {'a','s','d','f','g'};
cout<< ch[3] <<endl;
cout<<"printing the array"<<endl;
//print the array
for(int i=0;i<5;i++){
    cout<< ch[i] << " ";
}
cout<<"printing done"<<endl;
double firstDouble[5];
float firstFloat[6];
bool firstBool[9];

cout<<"Everthing is fine"<<endl;

    return 0;
}