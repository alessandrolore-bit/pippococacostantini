#include <stdio.h>

menu()
{
  int a;
  printf("\x1b[1mInserisci il numero dell'operazione:\x1b[0m\n");
  scanf("%d",&a);
  return a;
}

add()
{
  int a,b,risultato;
  printf("\x1b[1mInserisci i valori da sommare:\x1b[0m\n");
  scanf("%d",&a);
  scanf("%d",&b);
  risultato= a+b;
  printf("\x1b[1mLa loro somma vale: %d\x1b[0m\n",risultato);
  return 0;
}
togli()
{
  int a,b,risultato;
    printf("\x1b[1mInserisci i valori da sottrarre\x1b[0m\n");
    scanf("%d",&a);
    scanf("%d",&b);
    risultato=a-b;
    printf("\x1b[1mLa sottrazione vale:%d\x1b[0m\n",risultato);
  return 0;
}
prodotto()
{
    int a,b,risultato;
  printf("\x1b[1mInserisci i valori da moltiplicare:\x1b[0m\n");
  scanf("%d",&a);
  scanf("%d",&b);
  risultato=a*b;
  printf("\x1b[1mIl loro prodotto vale: %d\x1b[0m\n",risultato);
  return 0;
}
quad()
{
  int a,risultato;
  printf("\x1b[1mInserisci il valore da elevare al quadrato:\x1b[0m\n");
  scanf("%d",&a);
  risultato=a*a;
  printf("\x1b[1mIl quadrato del valore è: %d\x1b[0m\n",risultato);
  return 0;
}
cub()
{
  int a,risultato;
  printf("\x1b[1mInserisci il valore da elevare al cubo:\x1b[0m\n");
  scanf("%d",&a);
  risultato=a*a*a;
    printf("\x1b[1mIl cubo del valore è: %d\x1b[0m\n",risultato);
  return 0;
}
diviso()
{
  int a,b,risultato,resto;
  printf("\x1b[1mInserisci i valori da dividere:\x1b[0m\n");
  scanf("%d",&a);
  scanf("%d",&b);
  risultato=a/b;
  resto=a%b;
  printf("\x1b[1mIl quoziente vale:%d\x1b[0m\n",risultato);
  if(resto==0)
    printf("\x1b[1mLa divisione non ha resto\x1b[0m\n");
  else
    printf("\x1b[1mIl resto della divisione vale:%d\x1b[0m\n",resto);
return 0;
}
even()
{
  int a;
  printf("\x1b[1mInserisci un numero:\x1b[0m\n");
  scanf("%d",&a);
  if(a>0)
  {
      printf("\x1b[1mIl numero è positivo\x1b[0m\n");
  }
  else
    printf("\x1b[1mIl numero è negativo\x1b[0m\n");
    if(a%2==0)
    printf("\x1b[1mIl numero è pari\x1b[0m\n");
    else
    printf("\x1b[1mIl numero è dispari\x1b[0m\n");
  return 0;
}
major()
{
  int a,b;
  printf("\x1b[1mInserisci due numeri e ti dirò il maggiore:\x1b[0m\n");
  scanf("%d",&a);
  scanf("%d",&b);
  if(a>b)
  printf("\x1b[1mIl maggiore è %d\x1b[0m\n",a);
  else
  printf("\x1b[1mIl maggiore è %d\x1b[0m\n",b);
  return 0;
}
int main()
{
int i;
do{
  printf(" \x1b[1mPer sommare due numeri premi 1\n Per sottrarre due numeri premi 2\n Per moltiplicare due numeri premi 3\n Per dividere due numeri premi 4\n Per elevare al quadrato un numero premi 5\n Per elevare al cubo un numero premi 6\n Per vedere se un numero è positivo, negativo e pari o dispari premi 7\n Per vedere quale fra due numeri è maggiore premi 8\x1b[0m\n");
switch(menu())
  {
    case 1: add();
    break;
    case 2: togli();
    break;
    case 3: prodotto();
    break;
    case 4: diviso();
    break;
    case 5: quad();
    break;
    case 6: cub();
    break;
    case 7: even();
    break;
    case 8: major();
    break;
    default: putchar('\a');
  }

  printf("\x1b[1mPer terminare il programma premere 0, per continuare premere altro numero\x1b[0m\n");
  scanf("%d",&i);
}
  while(i!=0);

return 0;
}
