# 1-Addition
Addition Assignment
#include <studio.h>
#include <stdlib.h>
int add(int a, int b) 
{
return(a+b) ;
}
int main (argc, char* argv[]) 
{
int num1, num2;
if (argc==1) 
printf("no command line arguments found. \n") ;
{
else {
num1=atoi(argv[1]) ;
num2=atoi(argv[2]) ;
printf("%d\n", add(num1, num2)) ;
}
return 0;
}
