/* Currency System */

#include <stdio.h>

int main(){
    int currency,newstore ,rsHundread,rsFifty,rsTen,rsTwo,rsOne,rsFive,total; 
    printf("Enter the currency ");
    scanf("%d",&currency);
    newstore =currency;
    rsHundread = currency/100;
    currency = currency%100;
    rsFifty =currency/50;
    currency = currency%50;
    rsTen =currency/10;
    currency=currency%10;
    rsFive =currency/5;
    currency=currency%5;
    rsTwo=currency/2;
    currency=currency%2;
    rsOne=currency/1;
    total =rsHundread + rsFifty + rsTen +rsFive+rsTwo+rsOne;
    printf(" %d have %d note of 100Rs , %d notes of 50Rs, %d notes of 10Rs,%d notes of 5Rs,%d notes of 2Rs, %d notes of 1Rs \n",
    newstore,rsHundread,rsFifty,rsTen,rsFive,rsTwo,rsOne);
    printf("The smallest number of notes that will combine to give Rs. %d is %d",newstore,total);

}
