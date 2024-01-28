#include<iostream>
using namespace std;

int main() {
    int arr[6] = {0, 1, 2, 2, 1, 0};
    int n = 6;
    int i = 0;
   int j = n-1;
   cout << "hi" << endl;

   while(i<j) {
      while(arr[i]==0 && i<j){
         i++;
      }
         
      while(arr[j]==1 && i<j){
         j--;
      }
         
      
      if(i<j){
         swap(arr[i],arr[j]);
         i++;
         j--;
      }
         
      
         
   }

   cout << "hello" <<endl;
   for(int k=0; k<n; k++){
      cout << arr[k] << endl;
   }
}