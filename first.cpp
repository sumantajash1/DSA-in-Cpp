#include <iostream>
#include <algorithm>  
using namespace std;

int BinarySearch(int arr[], int size, int key){
       int start=0;
       int end=size;
       int mid=(start+end)/2;
       while(start <= end){
            if(arr[mid]==key){
                  return mid;
            }
            else if(key>arr[mid]){
                  start=mid+1;
            }
            else{
                  end=mid-1;
            }
            mid=(start + end)/2;
       }
       return -1;
       
}

int main(){
       int first[100];
       int second[100];

       int firstsize;
       cout<< " Please enter the size of the first array : ";
       cin>>firstsize;

       cout<< " Enter the elements of the first array : ";
       for(int i=0; i<firstsize; i++){
           cin>>first[i];
       }

       int key1;
       cout<<" Enter the element you want to find in the first array : ";
       cin>>key1;

       int secondsize;
       cout<< " Please enter the size of the second array : ";
       cin>>secondsize;

       cout<< " Enter the elements of the second array : ";
       for(int j=0; j<secondsize; j++){
           cin>>second[j];
       }
       
       int key2;
       cout<< " Enter the element you want to find in the second array : ";
       cin>>key2;

       if(BinarySearch(first, firstsize, key1)==-1){
          cout<< key1 <<" is not present in the first array."<<endl;
       }
       int Indexfirst = BinarySearch(first, firstsize, key1);
       cout<< "The element "<< key1 <<" has been found at Index No. "<< Indexfirst <<" of the first array" <<endl;

       if(BinarySearch(second, secondsize,key2)==-1){
          cout<< key2 <<" is not present in the second array."<<endl;
       }
       int Indexsecond = BinarySearch(second, secondsize,key2);
       cout<< "The element "<< key2 <<" has been found at Index No. "<< Indexsecond <<" of the second array "<<endl;

  

}