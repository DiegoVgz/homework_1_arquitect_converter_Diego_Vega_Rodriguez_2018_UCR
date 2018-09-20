#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>


int main() {

int base;
unsigned int temp;
int value;
long result=0;
char var [100];
int lenght;
int x=0;
char character;
int elv;
int binary=0;

printf("Ingrese  el numero que desea convertir: ");
scanf("%s",var);


printf("\nDigite la base del numero que desea convertir : ");
scanf("%i",&base);

lenght = strlen(var);
temp=lenght;

if(base==2){


while(x<lenght){
	
	temp=temp-1;
	character=var[temp];
	
	if(binary>0){
		
		if(character=='1'){
		
	binary= binary*2;
	result=result+binary;	
	printf("\n %i",binary);			
	}
	
	if(character=='0'){
		
	binary= binary*2;
	
	}
	}if(binary==0){
		
		if(character=='1'){
			binary=1;
			result= binary;
			printf("\n %i",binary);	
		}
		
		if(character=='0'){
		    binary=1;
			
		}
	}
	
	
	x++;
}

printf("\n el decimal de %s",var);
	printf("  es : %li",result);
			
	
}else{

 
   	
    	
  
    while(x<lenght){
   	temp=temp-1;
	character=var[temp];
    	
   	 
   	 	 if (character=='0') {
            value=0;
        }  if (character=='1') {
            value=1;
        }  if (character=='2') {
            value=2;
        }  if (character=='3') {
            value=3;
        }  if (character=='4') {
            value=4;
        }  if (character=='5') {
            value=5;
        }  if (character=='6') {
            value=6;
        }  if (character=='7') {
            value=7;
        }  if (character=='8') {
            value=8;
        }  if (character=='9') {
            value=9;
        }  if (character=='A') {
            value=10;
        }  if (character=='B') {
            value=11;
        }  if (character=='C') {
            value=12;            
        }  if (character=='D') {
            value=13;
        }  if (character=='E') {
            value=14;
        }  if (character=='F') {
            value=15;
        }
   	 
   	 elv= value * pow(base,x);
   	 result= result + elv;
       
   	 printf("\nresultado de la multiplicacion: %li",result);
   	 
	 x++; 
    } 
    	
    printf("\n el decimal de %s",var);
	printf("  es : %li",result);	

}
return 0;
}
