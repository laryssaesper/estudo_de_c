#include <iostream>
#include <cstdlib>
using namespace std;
//3 - Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores, caso contrário devera 
//multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e imprimir seu valor na tela.

int main()
{
	int a, b, c;
	cout<<"escreva um numero inteiro: ";
	cin>>a;
	cout<<"escreva um numero inteiro: ";
	cin>>b;
	if(a==b){
		c=a+b;
		cout<<c;
	}
	else{
		c=a*b;
		cout<<c;
	}
}