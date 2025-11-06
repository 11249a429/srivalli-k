#include<stdio.h>
#defineTABLE_SIZE10
inthashTable[TABLE_SIZE];
voidinitHashTable(){
for(inti=0; i<TABLE_SIZE; i++){
hashTable[i]=-1;
}
}
inthashFunction(intkey){
returnkey%TABLE_SIZE;
}
voidinsert(int key){
inthashIndex=hashFunction(key);
intoriginalIndex=hashIndex;
while(hashTable[hashIndex]!=-1){
hashIndex=(hashIndex+1)%TABLE_SIZE;
if(hashIndex==originalIndex){
printf("Hashtableisfull,cannotinsert%d\n"
,key);
return;
}
}
hashTable[hashIndex]=key;
}
intsearch(int key){
inthashIndex=hashFunction(key);
intoriginalIndex=hashIndex;
while(hashTable[hashIndex]!=-1){
if(hashTable[hashIndex]==key)
returnhashIndex;
hashIndex=(hashIndex+1)%TABLE_SIZE;
if(hashIndex==originalIndex)
break;
}
return-1;
}
voiddisplay(){
printf("HashTable:\n");
for(inti=0; i<TABLE_SIZE; i++){
if(hashTable[i]==-1)
printf("[%d]:Empty\n"
, i);
else
printf("[%d]:%d\n"
,i,hashTable[i]);
}
}
intmain(){
initHashTable();
insert(23);
insert(43);
insert(13);
insert(27);
insert(37);
display();
intkey=13;
intresult=search(key);
if(result!=-1)
printf("Key%dfoundatindex %d\n"
,key,result);
else
printf("Key%dnotfoundinhashtable\n"
,key);
key=50;
result=search(key);
if(result!=-1)
printf("Key%dfoundatindex %d\n"
,key,result);
else
printf("Key%dnotfoundinhashtable\n"
,key);
return0;
}