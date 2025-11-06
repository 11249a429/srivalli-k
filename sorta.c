#include<stdio.h>
voidselectionSort(intarr[],intn){
inti,j,minIndex,temp;
for(i=0; i<n- 1;i++){
minIndex=i;
for(j=i+1; j<n; j++){
if(arr[j]<arr[minIndex])
minIndex=j;
}
temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;
}
}
voidprintArray(intarr[], intn){
for(inti=0; i<n; i++)
printf("%d"
,arr[i]);
printf("\n");
}
intmain(){
intarr[]={64,25,12,22,11};
intn=sizeof(arr)/sizeof(arr[0]);
printf("Originalarray:
");
printArray(arr,n);
selectionSort(arr,n);
printf("Sortedarray(SelectionSort):
");
printArray(arr,n);
return0;
}