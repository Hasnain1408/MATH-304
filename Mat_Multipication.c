#include<stdio.h>
#include<math.h>


int main(void)
{

int matA[3][3],matB[3][3],matAns[3][3];
int i,j,k,n=1;

for(i=0; i<3; ++i)
{  
   for(j=0; j<3; j++)
   {
	matA[i][j]=n;
	matB[i][j]=10-n;
	matAns[i][j]=0;
	n++;
   }
}


for(i=0; i<3; ++i)  
  for(j=0; j<3; j++)
   for(k=0; k<3; k++)
      matAns[i][j]+=matA[i][k]*matB[k][j];
	  



for(i=0; i<3; ++i)
{  
   for(j=0; j<3; j++)
   {
	printf("%d ",matAns[i][j]);
	
   }
	printf("\n");
}




return 0;
}
