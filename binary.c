#include<stdio.h>
intbinarySearch(intarr[],intn,inttarget){
intlow=0;
inthigh=n- 1;
while(low<=high){
intmid=low+(high-low) /2; //Toavoidoverflow
if(arr[mid]==target);
returnmid; //Foundthetarget
}elseif(arr[mid]<target){
low=mid+1;
}else{
high=mid-1;
}
}
return-1; //Notfound
}
intmain(){
intarr[]={2,3,5,6,8};
intn=sizeof(arr)/sizeof(arr[0]);
inttarget=6;
intresult=binarySearch(arr,n,target);
if(result!=-1){
printf("Element%dfoundatindex%d\n"
,target,result);
}else{
printf("Element%dnotfound\n"
,target);
}
return0;
}