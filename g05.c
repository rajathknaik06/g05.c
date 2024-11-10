#include<stdio.h>
 int main()
 {
     int firstletter;
     char age;
     float height;
     
     scanf("%c %d %f",&firstletter,&age,&height);        //A   44    1.66
     
     printf("Initial : %c\n",firstletter);
     printf("Age : %d years\n",age);
     printf("Height : %.2f meters\n",height);
     
     return 0;
 }
