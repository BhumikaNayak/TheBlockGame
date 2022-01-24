//code of The Block Game 
#include<stdio.h>
int main()
{
    int Testcases;//number of test Testcases
    scanf("%d",&Testcases);
    
    while(Testcases--)
    {
      int number,remainder,reverse=0;//declaration of variables
      int count,wins,loses;
      scanf("%d",&number);
      count=number;
      
      while(number != 0)  //using while loop
      {                   //logic
          remainder=number%10;
          reverse=reverse*10 + remainder;
          number /= 10;
      }
      if(reverse == count)
      {
          printf("wins\n");
      }
      else
      {
          printf("loses\n");
      }
    }
    
    return 0;
}
//Code By Bhumika Nayak

        