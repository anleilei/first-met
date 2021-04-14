#include<stdio.h>
int m_table(void)
{
	register int i,j;
	for(i=1;i<=9;i++)
	   for(j=1;j<=i;j++)
	   {printf("%d*%d=%d",i,j,i*j);
	    putchar((i==j)?'\n':'\t');
	   }
	
 }
 main()
 {
 	m_table();
  } 
