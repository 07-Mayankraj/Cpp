#include <iostream>
using namespace std;
int main()
{
  int n=5;
  //cin>>n;
  cout<<endl;

  int i=1;


  while (i<=n)
  {
    //first
    int j=1;
  
    while(j<=n-i+1)
    {
      cout<<j;
      j++;
    }


    //star
    int star=1;
    while(star<i)
    {
      cout<<"*";
      star++;

    }
    //backstar
    
      int backstar=i-1;
      while(backstar)
      {
        cout<<"*";
        backstar--;
      } 
    
  
    //last counting
    int last= n-i+1;
    while(last)
    {
      cout<<last;
      last--;
    }


    
    
    
    
    
    cout<<endl;
    i++;
  }
   
}
  
