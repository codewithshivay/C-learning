int power(a,b)
{
  int r = 1, i;
  for(i=1; i <= b; i++)
  {
    r = r * a;
  }
  return r;
}



int  main()
{

    int a,b;
  printf("Enter base and power");
  scanf("%d %d", &a, &b);
  printf("%d", power(a,b));
}
