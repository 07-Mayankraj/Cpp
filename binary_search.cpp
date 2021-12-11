#include <iostream>
using namespace std;

///bbinary search
int binarySearch(int arr[],int n,int key){
  int start=0; //delcareing start
  int end = n-1; //delcareing end of array
  
   int mid= start+(end - start)/2; //finding mid of the array.(start+end)/2 not using to avoid intger addition out of INT_MAX
  
  while (start <= end) //loop chalega jab tak start chota h ya baraber h end se 
  {
    if(arr[mid] == key) //compare mid ko key se
    {
      return mid;
    }
    if(key>arr[mid]) //ager key badi  h mid se to big part pe chale jao
    {
      start=mid+1; //end same hoga but start chage hoga mid ke age se
    }
    else { //ager key choti h mid se left pe chale jao 
      end = mid-1;
    }

    //new mid upadate hoga
   mid= start+(end - start)/2; // (start+end)/2 not using to aoid over intger addition
  }
  return -1;

}

int main() {
int even[6]={2,4,6,8,10,12} ;
int odd[5]={1,2,3,4,5};
int index = binarySearch(odd , 5 , 0);
cout<< "4 in the arry is on:"<<index<<endl;

} 
