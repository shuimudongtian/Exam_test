//
// Created by z lin zhang on 2018/10/16.
//

#include <stdio.h>
union U1
 {
   char s[ 9 ];
   int n;
   double d;
 };

 union U2
 {
   char s[ 5 ];
   int n;
   double d;
 };

 struct student{

     char A;
     int B;
     short C;

 }student1;
struct tagPhone{
     char   A;
     short  C;
     int    B;
}Phone2;
struct str2
{
    double a;
    int b;
    char c;
    double d;
}str21;
int main(){
    union U1 u1;
    union U2 u2;
    printf("char short int float  double is %d %d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(float),sizeof(double));
    printf("u1 is %d\n", sizeof(u1));
    printf("u2 is %d\n", sizeof(u2));
    printf("student1 is %d\n", sizeof(student1));
    printf("phone2 is %d\n", sizeof(Phone2));
    printf("str21 is %d\n", sizeof(str21));

}