int main()
{
  int i;
  for (i = 0; i < 8; i++) //loop will run n time (n=1)
  {
    int n5 = fork();
    printf("Hello Holberton\n");
  }
  return 0;
}
