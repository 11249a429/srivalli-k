#include<stdio.h>
#include<ctype.h> 
#include<string.h>
#defineMAX100
typedefstruct{
chararr[MAX];
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
voidpush(Stack *s,charc){
if(!isFull(s)){
s->arr[++(s->top)]=c;
}
}
charpop(Stack *s){
if(!isEmpty(s)){
returns->arr[(s->top)--];
}
return'\0'
;
}
charpeek(Stack *s){
if(!isEmpty(s)){
returns->arr[s->top];
}
return'\0'
;
}
intprecedence(charop){
switch(op){
case '+'
:
case '-'
:return1;
case '*'
:
case '/'
:return2;
case '^'
:return3;
}
return0;
}
intisOperator(charc){
returnc==
'+'||c==
'-'||c==
'*'||c==
'/'||c==
'^'
;
}
voidinfixToPostfix(char*infix,char*postfix){
Stack s;
init(&s);
intk=0;
for(inti=0; infix[i]!=
'\0'
;i++){
charc=infix[i];
if(isalnum(c)){
postfix[k++]=c;
}
,pushtostack
elseif(c==
'('){
push(&s,c);
}
,popandoutputuntil '('
elseif(c==
')'){
while(!isEmpty(&s)&&peek(&s)!=
'('){
postfix[k++]=pop(&s);
}
pop(&s);
elseif(isOperator(c)){
while(!isEmpty(&s)&&precedence(peek(&s))>=precedence(c)){
if(c==
'^'&&peek(&s)==
'^'){
operator
break;
}else{
postfix[k++]=pop(&s);
}
}
push(&s,c);
}
}
while(!isEmpty(&s)){
postfix[k++]=pop(&s);
}
postfix[k]=
'\0'
;
}
intmain(){
charinfix[MAX];
charpostfix[MAX];
printf("Enterinfixexpression:
");
fgets(infix,MAX,stdin);
infix[strcspn(infix,
"\n")]=
'\0'
;
infixToPostfix(infix,postfix);
printf("Postfixexpression:%s\n"
,postfix);
return0;
}