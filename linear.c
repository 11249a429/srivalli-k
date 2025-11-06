intlinearSearch(intarr[],intn,int key){
inti; 
for(i=0; i<n; i++){
if(arr[i]==key)
returni;
}
return-1;
}
intmain(){
intarr[]={5,3,8,6,2};
intn=sizeof(arr)/sizeof(arr[0]);
inttarget=2;
intresult=linearSearch(arr,n,target);
if(result!=-1){
printf("Element%dfoundatindex%d\n"
,target,result);
}else{
printf("Element%dnotfound\n"
,target);
}
return0;
}