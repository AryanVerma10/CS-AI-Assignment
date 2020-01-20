#include<stdio.h>
int main()
{
    printf("Is every human good grader \n");
    int e[4]={1,1,0,0};
    int c[4]={0,1,0,1};
    int lst[4]={};
    for(int i=0;i<4;i++)
     {
            if(e[i]==0)
            { 
                    lst[i]=(1 &&  c[i]);
             }
          else if(e[i]==1)
            {
                 lst[i]=(0 && c[i]);
            }
     }
    for(int j=0;j<4;j++)
    {
          if(lst[j]==0)
          {
               printf("No");
               break;
           }
          else
          {
               printf("Yes");
           }
    }
return 0;
} 