/*
//과제 2번 함수 계산

#include <stdio.h>

int main()
{
int x=0;
double result=0;

printf("x의 값을 입력하시오 : ",x);
scanf("%d",&x);


if(x<=0)
result = x*x*x-9*x+2;
else
result = 7*x+2;

printf("f(x)의 값은 %lf\n",result);
}

*/

/*
자축인묘진사오미신유술해 - 쥐,소,호랑이,토끼,용,뱀,말,양,원숭이,닭,개,돼지   => 3번, 태어난년도로 띠 출력

#include <stdio.h>

int main()
{
int birth=0;

printf("태어난 년도를 입력하시오 : ",birth);
scanf("%d",&birth);

switch(birth%12)  //1960년 쥐띠(자) -> 1960%12 = 4 -> 자-나머지 4/ 축-나머지 5/ 인-나머지 6/ 묘-나머지 7/ 진-나머지 8/ 사-나머지 9/
//                                  오-나머지 10/ 미-나머지 11/ 신-나머지 0/ 유-나머지 1/ 술-나머지 2/ 해-나머지 3/
{
case 0:
printf("%d년은 원숭이띠[신] 입니다.\n",birth);
break;
case 1:
printf("%d년은 닭띠[유] 입니다.\n",birth);
break;
case 2:
printf("%d년은 개띠[술] 입니다.\n",birth);
break;
case 3:
printf("%d년은 돼지띠[해] 입니다.\n",birth);
break;
case 4:
printf("%d년은 쥐띠[자] 입니다.\n",birth);
break;
case 5:
printf("%d년은 소띠[축] 입니다.\n",birth);
break;
case 6:
printf("%d년은 호랑이띠[인] 입니다.\n",birth);
break;
case 7:
printf("%d년은 토끼띠[묘] 입니다.\n",birth);
break;
case 8:
printf("%d년은 용띠[진] 입니다.\n",birth);
break;
case 9:
printf("%d년은 뱀띠[사] 입니다.\n",birth);
break;
case 10:
printf("%d년은 말띠[오] 입니다.\n",birth);
break;
case 11:
printf("%d년은 양띠[미] 입니다.\n",birth);
break;
}
}


//4번부터 
//////////////////////////////////////
#include <stdio.h>

int main()
{
int number=0;
int i=0;
int sum=0;

printf("정수를 입력하시오 : ",number);
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

//과제 6번 소수 구하는 프로그램
#include <stdio.h>

int main(){
int i, j;
int sum=0;

printf("2부터 100까지의 소수\n");
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
printf("2부터 100까지 소수의 합은 %d 입니다.\n",sum );
return 0;
}
/////////////////////////////////////////////////////////////////////
//과제 5번


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
printf("(1*3)+(2*3)+(3*3)+ … +(i*3)을 계산하여 그 합이 9999를 초과하지 않는 최댓값은 %d 이고, 그때의 합은 %d 입니다.\n",max,sum);
return 0;
}

/*

/////////////////
//과제 7번
#include <stdio.h>

int main(){

int i=0;
int j=0;
printf("정수를 입력하시오 : ",j);
scanf("%d",&j);

for(i=1;i<=5;i++)
{
for(j=1;j<i+1;j++)
printf("%d ",j);
printf("\n");
}
}


///////////////////////////////////////
//과제 9번


#include <stdio.h>
#include <ctype.h>

int main()
{

char x;
printf("하나의 문자를 입력하시오 : ");
scanf("%c",&x);


if((65>x && 122<x) || (91<=x && 96>=x))
printf(" 기타 문자입니다.\n"); 


else if(x == 'a' || x=='e' || x=='i' || x=='o' || x=='u' ){
x=toupper(x);
printf("%c는 모음 입니다.\n",x);
}


else if(x == 'A' || x=='E' || x=='I' || x=='O' || x=='U' ){
x=tolower(x);
printf("%c는 모음 입니다.\n",x);
}


else{
if(65<=x && 90>=x){
x=x+32;
printf("%c는 자음 입니다.\n",x);
}


else{
x=x-32;
printf("%c는 자음 입니다.\n",x);
}
}
return 0;
}


///과제 9번
#include <stdio.h> 

int main()
{
int i;                   
int r;
int n;
double result=1;           


printf("실수의 값을 입력하시오 : ");
scanf("%d",&r);                              
printf("거듭제곱횟수를 입력하시오 : ");
scanf("%d",&n);      


for(i=1;i<=n;i++)                  
{
result=result*r;                         
// 출력
}
printf("결과값은 %lf ",result);
return 0;
}


//332p 8장 8번문제
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


//과제11번

#include <stdio.h>

void print_value(int n);

int main()
{
int b;

do{
printf("값을 입력하시오(종료는 음수):  ");
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

printf("연도를 입력하시오 : ");
scanf("%d", &c);

is_leap(c);

printf("\n");

return 0;
}


void is_leap(int y)
{
int a=365, b=366;
if(y%400==0 || (y%4==0 && y%100!=0))
printf("%d년은 %d일 입니다.", y, b);
else
printf("%d년은 %d일 입니다.", y, a);
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
printf("메뉴를 선택하시오 : (1)저축, (2)인출, (0)종료 : ");
scanf("%d",&ch);

if(ch==1){
amount=get_amount();
save(amount);
printf("현재 잔액은 %d원 입니다.\n",account);
}
else if(ch==2){
amount=get_amount();
draw(amount);
printf("현재 잔액은 %d원 입니다.\n",amount);
}
else if(ch==0)
break;
else
printf("잘못 입력하였습니다.\n");
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
printf("저축할 금액 : ");
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
printf("메뉴를 선택하세요: 저축(1), 인출(2) : ");
scanf("%d", &ch);

if(ch == 1) {
amount = get_amount();
save(amount);
printf("현재 잔액은 %d입니다. \n", account);
}
else if(ch == 2) {
amount = get_amount();
draw(amount);
printf("현재 잔액은 %d입니다. \n", account);
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
printf("저축할 금액: ");
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

printf("숫자 입력(1000 이하까지만 입력가능) : ");
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

printf("숫자 입력 : ");
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

////////////빈피라미드 출력

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


///피라미드///

#include <stdio.h>

int main()
{
int a,b=0;
for(a=1;a<=7;a++){             //1~7줄 선언
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

//연봉을 입력받아 월급 계산//
#include <stdio.h>

int main()
{
double salary;
double yearsalary;

printf("연봉을 입력하시오 : ");
scanf("%lf",&yearsalary);

salary = yearsalary/12;

printf("월급은 %.lf만원 입니다\n",salary);
}


/////////////////////////////////////////////////////////////

////사각형 둘레 면적
#include <stdio.h>

int main()
{
double width=0;
double height=0;
double area=0;
double perimeter=0;

printf("****사각형의 면적 & 둘레 산출 프로그램****\n\n");
printf("사각형의 가로 길이를 입력하시오 : ");
scanf("%lf",&width);

printf("사각형의 세로 길이를 입력하시오 : ");
scanf("%lf",&height);

area=(width*height);
perimeter=2*(width+height);

printf("사각형의 면적은 %.lf 입니다.\n",area);
printf("사각형의 둘레는 %.lf 입니다.\n",perimeter);

return 0;
}


/////////////////////////////////////////////////////////////////////
//3-5 다항식 계산
*/

/*
/////////////////////////////////////////////////////////////////////
//4장 변수


#include <stdio.h>
#define TAX_RATE 0.2

int main()
{
const int MONTHS = 12;
int m_salary,y_salary;
o
printf("월급을 입력하시오 : ");
scanf("%d",&m_salary);

y_salary=MONTHS*m_salary;
printf("연봉은 %d 입니다.\n",y_salary);


printf("세금은 %f 입니다.\n",y_salary*TAX_RATE);
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
///5장. 초단위의 시간을 입력받아서 몇 분 몇 초 인지 계산하는 프로그램.
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int input, minute, seconds;
	
	printf("초를 입력하시오 : ");
	scanf("%d",&input);

	minute=input / SEC_PER_MINUTE;
	seconds=input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초 입니다.\n",input,minute,seconds);
}
///////////////////////////////////////////////////////////////////////

//161page  증가
#include <stdio.h>

int main()
{
	int x=10, y=10;

	printf("x=%d\n",x);
	printf("++x의 값=%d\n",++x);
	printf("x=%d\n\n",x);

	printf("y=%d\n",y);
	printf("y++의 값=%d\n",y++);
	printf("y=%d\n",y);
}
*/
#include <stdio.h>

int main()
{
	int x,y=0;

	printf("두개의 정수를 입력 : ");
	scanf("%d %d",&x,&y);

	printf("x==y의 결과값 : %d\n",x==y);
	
	printf("x!=y의 결과값 : %d\n",x!=y);
	
	printf("x>y의 결과값 : %d\n",x>y);
	
	printf("x<y의 결과값 : %d\n",x<y);
	
	printf("x>=y의 결과값 : %d\n",x>=y);
	
	printf("x<=y의 결과값 : %d\n",x<=y);
}