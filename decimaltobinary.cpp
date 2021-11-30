#include<iostream>
#include<math.h>
using namespace std;

int main()
{

	int ans=0 , i=0;
  int n;
  cin>> n;


  if (n<0)
  {
    cout<<"entered negative number"<<endl;
	 n=n*(-1);
	 while(n!=0)
	 {
    //binary of n

		int bit=n&1;
		ans=(bit*pow(10,i))+ans; //to reverse ans=(digit*10^i)+ans
		n=n>>1;
		i++;
	 }
	 //for negative numbers
	 int ones = ~(ans); //1's complement  convesion
	 int twos = ones+1; // 2's complement added 1

   /// another 2's complement to print them 
	 int ones1 = ~(twos); //1's complement convesion
	 int twos1 = ones1 + 1; // 2's complement 
	 cout<< twos1; // printed
  }
  else 
  {
    cout<<"number is postive"<<endl;
     while(n!=0)
	 {
    //binary of n

		int bit=n&1;
		ans=(bit*pow(10,i))+ans; //to reverse ans=(digit*10^i)+ans
		n=n>>1;
		i++;
	 }
  
     cout<<ans;
  }

}







