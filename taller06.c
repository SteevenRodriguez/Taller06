#include <stdio.h>

void desglosar(char *ptr);
int * direccion(int *num, int elem,int tam);
void swap(int *a, int *b); 


int main(){
char * fecha= "2017-06-06";
desglosar(fecha);
int a=3;
int b=2;

swap(&a,&b);

printf("%d\n",a);
printf("%d\n",b);

int arreglo[100]={0,1,2,3,4,5,6,7,8,9};
direccion(arreglo,5,10);

return 0;
}


void desglosar (char *ptr){
printf("Dia: %.*s\n",2,ptr+8);
printf("Mes: %.*s\n",2,ptr+5);
printf("Dia: %.*s\n",4,ptr);

}

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;

}

int * direccion(int *num, int elem, int tam){
	int i;
	for(i=0;i<tam;i++){
		if (*(num+i)== elem){
			printf("Direccion del elemento %x\n", num);
			return num;
	}
}
return -1;
}


