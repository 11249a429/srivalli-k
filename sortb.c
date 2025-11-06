#include<stdio.h>
voidheapify(intarr[], intn,inti){
intlargest=i;
intleft=2 *i+1;
intright=2*i+2;
inttemp;
if(left<n&&arr[left]>arr[largest])
larget=left;
if(right<n&&arr[right]>arr[largest])
largest=right;
if(largest!=i){
temp=arr[i];
arr[i]=arr[largest];
arr[largest]=temp;
heapify(arr,n, largest);
}
}
voidheapSort(intarr[],intn){
inttemp;
for(inti=n/2 -1; i>=0;i--)
heapify(arr,n, i);
for(inti=n-1; i>0; i--){
temp=arr[0];
arr[0]=arr[i];
arr[i]=temp;
heapify(arr,i,0);
}
}
voidprintArray(intarr[], intn){
for(inti=0; i<n; i++)
printf("%d"
,arr[i]);
printf("\n");
}
intmain(){
intarr[]={12,11,13,5,6,7};
intn=sizeof(arr)/sizeof(arr[0]);
printf("Originalarray:
");
printArray(arr,n);
heapSort(arr,n);
printf("Sortedarray(HeapSort):
");
printArray(arr,n);
return0;
}