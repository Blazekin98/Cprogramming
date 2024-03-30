#include<stdio.h>
#include<string.h>
int main(){
 typedef struct cricketer

{ char firstname[20];
  char lastname[20];
  int age ;
  int noofmatch;
  float average;
    
}cricketer;
//-> 3 Cricketer;
cricketer a[3];
for (int i = 0; i < 3; i++)
{   scanf("%s",a[i].firstname);
    scanf("%s",a[i].lastname);
    scanf("%d",&a[i].age);
    scanf("%d",&a[i].noofmatch);
    scanf("%f",&a[i].average);
}
for (int i = 0; i < 3; i++)
{   printf("Name->%s %s\n",a[i].firstname,a[i].lastname);
    printf("Age->%d\n",a[i].age);
    printf("No of match->%d\n",a[i].noofmatch);
    printf("Average->%f\n\n",a[i].average);
}

return 0;
}