#include <bits/stdc++.h>
using namespace std;

//max number 
int getMax(int num[],int n){
  int maxi = INT_MIN;
for(int i=0; i<n;i++)
  {
    //using predefine funtion
    maxi=max(maxi,num[i]);
    
    //if( num[i]>max){
   //   max=num[i];
   //}
  }
  return maxi;
}
//minimum number
int getMin(int num[],int n){
  int mini = INT_MAX;
  
  for(int i=0;i<n;i++){
    if(num[i]<INT_MAX){
      mini=num[i];
    }
  }
  return mini;
}
//sum of array funtion

int sumOf(int num[] ,int n ){
  int sum=0;
  for(int i=0; i<n; i++){
    sum=num[i]+sum;
  }
  return sum;
}

//reverse an array
void rev(int num[], int n){
  int start=0;
  int end = n-1;
  
  while (start<=end){
    swap(num[start],num[end]);
    start++;
    end--;
  }
  
}
void printArray(int num[], int n){
  for (int i=0; i<n;i++){
    cout<<num[i]<<" ";
  }
}



int main() {
  int size;
  cin>>size;

  int num[100];

  for(int i=0; i<size;i++)
  {
    cin>>num[i];
  }
  cout<<"maximum value: "<<getMax(num ,size)<<endl;
  cout<<"minimum value is :"<<getMin(num, size )<<endl;
  cout<<"sum of array is : "<<sumOf(num,size)<<endl;
  rev(num,size);
  printArray(num,size);
  
  
  
  
  return 0;


} 