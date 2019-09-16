#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct st
{
int re,ro;
char na[20],dt1[30],dt2[30];
};
void main()
{
struct st s[10];
int x,n=0,i,b,t=0,g;
clrscr();
while(1){
printf("\n******************WELCOME TO STUDENT OUTING PORTAL**********************");
printf("\n1.Admin\n2.Student\n3.Exit");
printf("\nEnter Your Choice:");
scanf("%d",&x);
switch(x){
case 1:{
if(t==0){
printf("\nEnter The New Password(4 digit number): ");
scanf("%d",&b);
t=1;
if(n!=0){
printf("\nName Reg No.  Room No. Day and time of Out   Day and time of In\n");
for(i=0;i<n;i++){
printf("\n%s     %d        %d           %s                 %s              ",s[i].na,s[i].re,s[i].ro,s[i].dt1,s[i].dt2);
}
}else{
printf("\nNo Student went Outing Today");
}
}
else{
printf("\nEnter The Password:");
scanf("%d",&g);
if(g==b){
if(n!=0){
printf("\nName Reg No.  Room No. Day and time of Out   Day and time of In\n");
for(i=0;i<n;i++){
printf("\n%s     %d        %d           %s                 %s              ",s[i].na,s[i].re,s[i].ro,s[i].dt1,s[i].dt2);
}
}else{
printf("\nNo Student went Outing Today");
}
}else{
printf("\nPassword is Wrong");
}
}
break;
}
case 2:{
printf("\nEnter the name of student :");
scanf("%s",&s[n].na);
printf("\nEnter the Register Number of Student:");
scanf("%d",&s[n].re);
printf("\nEnter the Room Number:");
scanf("%d",&s[n].ro);
printf("\nEnter the day and time of out(day-time):");
scanf("%s",&s[n].dt1);
printf("\nEnter the day and time of In(day-time):");
scanf("%s",&s[n].dt2);
n=n+1;
break;
}
case 3:exit(1);
}
}
getch();
}