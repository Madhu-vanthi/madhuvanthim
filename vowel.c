#include <stdio.h>
 #include <conio.h>
 void  main()
 {
 char ch;
 printf("\n enter the value of ch:");
scanf("%c",&ch);
switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("\n alphabet is vowel");
break;
default:
printf("\n consonant");
}}