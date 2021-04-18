#include <stdio.h>

int main()
{
  int arr1[3][3],i,j,c[3][3];
  
       printf("\n\nRead a 2D array :\n");
       printf("------------------------------------------------------\n");  
  
 
    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
 printf("The sum of diagonal Element is: \n");
 if(i==j)
 {
 
	 
 c[i][j] = arr1[0][0]+arr1[1][1]+arr1[2][2];
 printf("the sum is: %d",c[i][j]);
 
 }
 else
 {
 	c[i][j]=NULL;
 }
}
