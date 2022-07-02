#include <stdio.h>
#include <math.h>
int main()
{
  int maths,physics,chemistry,hindi,english;
  int average,total;
  printf("Enter Marks \n1.Maths \n2.Physics\n3.Chemistry\n4.Hindi\n5.English \n");
  scanf("%d%d%d%d%d",&maths,&physics,&chemistry,&hindi,&english);
  total = maths + physics + chemistry + hindi + english;
  average = total / 5;
  printf("The average marks of five subject is %d ",average);

return 0;
}
