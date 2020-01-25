#include<stdio.h>
{
   int workers;
   float salary;
 };
void main()
  {
  struct semployee e1=(100,25000);
  union uemployee e2;
  e2.workers=50;
  e2.salary=15000;
  printf("employee details using structure\n");
  printf("num of workers=%d\n salary=%f\n",e1.workers,e1.salary);
  pritnf("employe details using union\n");
  printf("num of workers=%d\n",e2.workers);
  printf("salsry=%f\n",e2.salary);
}

