int main()
{
 unsigned seed;
 int r,a,b;
 printf("Input a random number seed: ");
 scanf("%u",&seed);
 srand(seed);
 for(a=1;a<4;a++)
 {
 for(b=1;b<4;b++)
 {
 r=rand();
 printf("%dt",r);
 }
 putchar('n');
 }
 return(0);
}
