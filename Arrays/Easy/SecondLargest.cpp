// PLATFORM -> GFG //
int getSecondLargest(int *arr, int n) {
   int secondlargest=-1;
   int largest=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>largest){
           secondlargest=largest;
           largest=arr[i];
       }
   }
   return secondlargest;
}
