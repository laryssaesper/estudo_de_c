#include <iostream>
#include <cstdlib>
using namespace std;
//2 - Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.

int main()
{
	int num;
	cout<<"digite um numero: ";
	cin>>num;
	if (num%2==0){
		cout<<"\no seu numero e par";
	}
	else{
		cout<<"\nseu numero e impar";
	};
	if(num>0){
		cout<<"\nseu numero e positivo";
	}
	else{
		cout<<"\nseu numero e negativo";
	};
	
}