#include<stdio.h>
voidswap(int*a,int*b){
intt*a;
*a=*b;
*b=t;
}
intpartition(intarr[], intlow,inthigh){
intpivot=arr[high]; //pivot
inti=low- 1; // Indexofsmallerelement
for(intj=low; j<=high-1; j++){
if(arr[j]<pivot){
i++;
swap(&arr[i],&arr[j]);
}
}
swap(&arr[i+1],&arr[high]);
returni+1;
}
voidquickSort(intarr[],intlow,inthigh){
if(low<high){
intpi=partition(arr,low,high);
quickSort(arr,low,pi- 1);
quickSort(arr,pi+1,high);
}
}
voidprintArray(intarr[], intn){
for(inti=0; i<n; i++)
printf("%d"
,arr[i]);
printf("\n");
}
intmain(){
intarr[]={10,7,8,9,1,5};
intn=sizeof(arr)/sizeof(arr[0]);
printf("Originalarray:
");
printArray(arr,n);
quickSort(arr,0,n-1);
printf("Sortedarray(QuickSort):
");
printArray(arr,n);
return0;
}