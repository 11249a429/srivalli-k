#include<stdio.h>
#defineMAX100
typedefstruct{
intarr[MAX];
inttop;
}Stack;
voidinit(Stack *s){
s->top=-1;
}
intisEmpty(Stack *s){
returns->top==-1;
}
intisFull(Stack*s){
returns->top==MAX-1;
}
voidpush(Stack *s,intvalue){
if(isFull(s)){
printf("StackOverflow!Cannotpush %d\n"
, value);
return;
}
s->arr[++(s->top)]=value;
printf("Pushed %d\n"
, value);
}
intpop(Stack*s){
if(isEmpty(s)){
printf("StackUnderflow!Cannotpop\n");
return-1;
}
returns->arr[(s->top)--];
}
intpeek(Stack *s){
if(isEmpty(s)){
printf("Stackisempty\n");
return-1;
}
returns->arr[s->top];
}
intmain(){
Stack s;
init(&s);
push(&s,10);
push(&s,20);
push(&s,30);
printf("Topelementis%d\n"
,peek(&s));
printf("Poppedelementis%d\n"
,pop(&s));
printf("Poppedelementis%d\n"
,pop(&s));
if(isEmpty(&s)){
printf("Stackisemptynow\n");
}else{
printf("Stackisnotempty\n");
}
return0;
}