/*
//���� 2�� �Լ� ���

#include <stdio.h>

int main()
{
int x=0;
double result=0;

printf("x�� ���� �Է��Ͻÿ� : ",x);
scanf("%d",&x);


if(x<=0)
result = x*x*x-9*x+2;
else
result = 7*x+2;

printf("f(x)�� ���� %lf\n",result);
}

*/

/*
�����ι�������̽������� - ��,��,ȣ����,�䳢,��,��,��,��,������,��,��,����   => 3��, �¾�⵵�� �� ���

#include <stdio.h>

int main()
{
int birth=0;

printf("�¾ �⵵�� �Է��Ͻÿ� : ",birth);
scanf("%d",&birth);

switch(birth%12)  //1960�� ���(��) -> 1960%12 = 4 -> ��-������ 4/ ��-������ 5/ ��-������ 6/ ��-������ 7/ ��-������ 8/ ��-������ 9/
//                                  ��-������ 10/ ��-������ 11/ ��-������ 0/ ��-������ 1/ ��-������ 2/ ��-������ 3/
{
case 0:
printf("%d���� �����̶�[��] �Դϴ�.\n",birth);
break;
case 1:
printf("%d���� �߶�[��] �Դϴ�.\n",birth);
break;
case 2:
printf("%d���� ����[��] �Դϴ�.\n",birth);
break;
case 3:
printf("%d���� ������[��] �Դϴ�.\n",birth);
break;
case 4:
printf("%d���� ���[��] �Դϴ�.\n",birth);
break;
case 5:
printf("%d���� �Ҷ�[��] �Դϴ�.\n",birth);
break;
case 6:
printf("%d���� ȣ���̶�[��] �Դϴ�.\n",birth);
break;
case 7:
printf("%d���� �䳢��[��] �Դϴ�.\n",birth);
break;
case 8:
printf("%d���� ���[��] �Դϴ�.\n",birth);
break;
case 9:
printf("%d���� ���[��] �Դϴ�.\n",birth);
break;
case 10:
printf("%d���� ����[��] �Դϴ�.\n",birth);
break;
case 11:
printf("%d���� ���[��] �Դϴ�.\n",birth);
break;
}
}


//4������ 
//////////////////////////////////////
#include <stdio.h>

int main()
{
int number=0;
int i=0;
int sum=0;

printf("������ �Է��Ͻÿ� : ",number);
scanf("%d",&number);

while(number<=1000)
{
for(i=1;i<=number;i++)
{
for(i=1
if((number%3==0) || (number%6==0) || (number/100==3) || (number/100=6))
printf("*");


printf("%d",i);

}

/*

///////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
int i,j=0;

for(i=2;i<101;i++){
for(j=2;j<i-1;j++)
{
if(i%j==0){
break;
}

if(i==j){
printf("%d",i);
}
}
}
}

//���� 6�� �Ҽ� ���ϴ� ���α׷�
#include <stdio.h>

int main(){
int i, j;
int sum=0;

printf("2���� 100������ �Ҽ�\n");
for(i=2;i<101;i++){
for(j=2;j<=i-1;j++){
if(i%j==0){
break;
}
}
if(i==j){
sum=sum+i;
//sum+=i
printf("%d ",i);
}
} 
printf("\n\n");
printf("2���� 100���� �Ҽ��� ���� %d �Դϴ�.\n",sum );
return 0;
}
/////////////////////////////////////////////////////////////////////
//���� 5��


#include <stdio.h>

int main()
{
int i=1,n=0;
int sum=0;
int max=0;
while(sum<9999)
{
sum+=(i*3);
i++;
max=(i*3);
}
printf("(1*3)+(2*3)+(3*3)+ �� +(i*3)�� ����Ͽ� �� ���� 9999�� �ʰ����� �ʴ� �ִ��� %d �̰�, �׶��� ���� %d �Դϴ�.\n",max,sum);
return 0;
}

/*

/////////////////
//���� 7��
#include <stdio.h>

int main(){

int i=0;
int j=0;
printf("������ �Է��Ͻÿ� : ",j);
scanf("%d",&j);

for(i=1;i<=5;i++)
{
for(j=1;j<i+1;j++)
printf("%d ",j);
printf("\n");
}
}


///////////////////////////////////////
//���� 9��


#include <stdio.h>
#include <ctype.h>

int main()
{

char x;
printf("�ϳ��� ���ڸ� �Է��Ͻÿ� : ");
scanf("%c",&x);


if((65>x && 122<x) || (91<=x && 96>=x))
printf(" ��Ÿ �����Դϴ�.\n"); 


else if(x == 'a' || x=='e' || x=='i' || x=='o' || x=='u' ){
x=toupper(x);
printf("%c�� ���� �Դϴ�.\n",x);
}


else if(x == 'A' || x=='E' || x=='I' || x=='O' || x=='U' ){
x=tolower(x);
printf("%c�� ���� �Դϴ�.\n",x);
}


else{
if(65<=x && 90>=x){
x=x+32;
printf("%c�� ���� �Դϴ�.\n",x);
}


else{
x=x-32;
printf("%c�� ���� �Դϴ�.\n",x);
}
}
return 0;
}


///���� 9��
#include <stdio.h> 

int main()
{
int i;                   
int r;
int n;
double result=1;           


printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
scanf("%d",&r);                              
printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
scanf("%d",&n);      


for(i=1;i<=n;i++)                  
{
result=result*r;                         
// ���
}
printf("������� %lf ",result);
return 0;
}


//332p 8�� 8������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();

int main()
{
int x;

srand((unsigned)time(NULL));

for(x=0;x<5;x++)
printf("%lf ", f_rand());
printf("\n");

return 0;
}

double f_rand()
{
double a;

a = (rand()/(double)RAND_MAX);

return a;
}


//����11��

#include <stdio.h>

void print_value(int n);

int main()
{
int b;

do{
printf("���� �Է��Ͻÿ�(����� ����):  ");
scanf("%d", &b);
fflush(stdin);

print_value(b);
printf("\n");
}while(b>=0);
return 0;
}

void print_value(int n)
{
int a;
for(a=0;a<n;a++)
printf("*");
}
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void is_leap(int y);

int main()
{
int c;

printf("������ �Է��Ͻÿ� : ");
scanf("%d", &c);

is_leap(c);

printf("\n");

return 0;
}


void is_leap(int y)
{
int a=365, b=366;
if(y%400==0 || (y%4==0 && y%100!=0))
printf("%d���� %d�� �Դϴ�.", y, b);
else
printf("%d���� %d�� �Դϴ�.", y, a);
}

/////////////////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
int i,j;

for(i=1;i<8;i++)
{
for(j=15;j>j;j--)
{
printf(" ");
printf("*");
}

printf("\n");
}

}



#include <stdio.h>

int account =0;
void save(int);
void draw(int);
int get_amount();

int main(){
int amount =0;
int ch,sum;

while(1){
printf("�޴��� �����Ͻÿ� : (1)����, (2)����, (0)���� : ");
scanf("%d",&ch);

if(ch==1){
amount=get_amount();
save(amount);
printf("���� �ܾ��� %d�� �Դϴ�.\n",account);
}
else if(ch==2){
amount=get_amount();
draw(amount);
printf("���� �ܾ��� %d�� �Դϴ�.\n",amount);
}
else if(ch==0)
break;
else
printf("�߸� �Է��Ͽ����ϴ�.\n");
}
return 0;
}

void save(int amount){
account +=amount;
}
void draw(int amount){
account -=amount;
}
int get_amount(){
int amount;
printf("������ �ݾ� : ");
scanf_s("%d",&amount)
return amount;
}

/////////////////////////////////////////////


#include <stdio.h>

int account = 0;

void save(int);
void draw(int);
int get_amount();

int main() {
int amount = 0;
int ch, sum;

while(1) {
printf("�޴��� �����ϼ���: ����(1), ����(2) : ");
scanf("%d", &ch);

if(ch == 1) {
amount = get_amount();
save(amount);
printf("���� �ܾ��� %d�Դϴ�. \n", account);
}
else if(ch == 2) {
amount = get_amount();
draw(amount);
printf("���� �ܾ��� %d�Դϴ�. \n", account);
}
}
return 0;
}

void save(int amount) {
account += amount;
}
void draw(int amount) {
account -= amount;
}
int get_amount() {
int amount;
printf("������ �ݾ�: ");
scanf_s("%d", &amount);
return amount;
}
/*
////////////////////////////////////////////
#include <stdio.h>

int main()
{
int i, j, k;                                          

for(k=1 ; k < 9 ; k += 3)
{
for(j=1 ; j <= 9 ; ++j)
{
for(i=k ; i <= k+2 ; i++)
printf("%d * %d = %2d \t", i, j, i*j); 
printf("\n");
} 
printf("\n");
}
return 0;
}


#include <stdio.h>

int main()
{
int  x,i;

printf("���� �Է�(1000 ���ϱ����� �Է°���) : ");
scanf("%d",&x);


for(i=1;i<=x;i++)
{
if(x<=1000)
if(i%3==0 || i%10==3 || i/10==3)
printf("%c ",'*');

else if(i%6==0 || i%10==6 || i/10==6)
printf("%c ",'*');

else
printf("%d ",i);
}
printf("\n");
return 0;
}


#include <stdio.h>

int main()
{
int num;

printf("���� �Է� : ");
scanf("%d",&num);

do{
printf("%2d",num%10);
num/=10;  //num=num/10
}while(num);

printf("\n");

return 0;
}
////////////////////////////////////
#include <stdio.h>

int main() 
{
int i,j;

for(j=1 ;j<=2;j+3){
for(i=1;i<=100;i++){
printf("%3d ",i);
if(i%10==0) puts("");
}
}

return 0;
}

////////////////////

////////////���Ƕ�̵� ���

#include <stdio.h>

int main()
{
int a=0;
int b=0;

for(a=0;a<8;a++){
for(b=0;b<8-a;b++){	
printf(" ");
}
for(b=0;b<2*a-1;b++)	
{                
if(a==7)
printf("*");
else if(b==0 || b==2*a-2)		
printf("*");
else
printf(" ");

}
printf("\n");
}
return 0;
}


///�Ƕ�̵�///

#include <stdio.h>

int main()
{
int a,b=0;
for(a=1;a<=7;a++){             //1~7�� ����
for(b=0;b<8-a;b++)		   //	
printf(" ");

for(b=0;b<2*a-1;b++)
{
if(a==7)
printf("*");
else if(b==0 || b==2*a-2)             
printf("*");
else
printf(" ");
}
printf("\n");
}
printf("\n");
return 0;
}
//////////////////////////////////////////////////////////////

//������ �Է¹޾� ���� ���//
#include <stdio.h>

int main()
{
double salary;
double yearsalary;

printf("������ �Է��Ͻÿ� : ");
scanf("%lf",&yearsalary);

salary = yearsalary/12;

printf("������ %.lf���� �Դϴ�\n",salary);
}


/////////////////////////////////////////////////////////////

////�簢�� �ѷ� ����
#include <stdio.h>

int main()
{
double width=0;
double height=0;
double area=0;
double perimeter=0;

printf("****�簢���� ���� & �ѷ� ���� ���α׷�****\n\n");
printf("�簢���� ���� ���̸� �Է��Ͻÿ� : ");
scanf("%lf",&width);

printf("�簢���� ���� ���̸� �Է��Ͻÿ� : ");
scanf("%lf",&height);

area=(width*height);
perimeter=2*(width+height);

printf("�簢���� ������ %.lf �Դϴ�.\n",area);
printf("�簢���� �ѷ��� %.lf �Դϴ�.\n",perimeter);

return 0;
}


/////////////////////////////////////////////////////////////////////
//3-5 ���׽� ���
*/

/*
/////////////////////////////////////////////////////////////////////
//4�� ����


#include <stdio.h>
#define TAX_RATE 0.2

int main()
{
const int MONTHS = 12;
int m_salary,y_salary;
o
printf("������ �Է��Ͻÿ� : ");
scanf("%d",&m_salary);

y_salary=MONTHS*m_salary;
printf("������ %d �Դϴ�.\n",y_salary);


printf("������ %f �Դϴ�.\n",y_salary*TAX_RATE);
}


/////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{

int x=3;
int y=-3;

printf("x=%08X\n",x);
printf("x=%d\n",x);
printf("y=%08X\n",y);
printf("y=%d\n",y);

printf("x+y=%08X\n",x+y);
printf("x+y=%d\n",x+y);

}	

/////////////////////////////////////////////////////////////////////
///5��. �ʴ����� �ð��� �Է¹޾Ƽ� �� �� �� �� ���� ����ϴ� ���α׷�.
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int input, minute, seconds;
	
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d",&input);

	minute=input / SEC_PER_MINUTE;
	seconds=input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n",input,minute,seconds);
}
///////////////////////////////////////////////////////////////////////

//161page  ����
#include <stdio.h>

int main()
{
	int x=10, y=10;

	printf("x=%d\n",x);
	printf("++x�� ��=%d\n",++x);
	printf("x=%d\n\n",x);

	printf("y=%d\n",y);
	printf("y++�� ��=%d\n",y++);
	printf("y=%d\n",y);
}
*/
#include <stdio.h>

int main()
{
	int x,y=0;

	printf("�ΰ��� ������ �Է� : ");
	scanf("%d %d",&x,&y);

	printf("x==y�� ����� : %d\n",x==y);
	
	printf("x!=y�� ����� : %d\n",x!=y);
	
	printf("x>y�� ����� : %d\n",x>y);
	
	printf("x<y�� ����� : %d\n",x<y);
	
	printf("x>=y�� ����� : %d\n",x>=y);
	
	printf("x<=y�� ����� : %d\n",x<=y);
}