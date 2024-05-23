#include <iostream>
# include <cstdlib>
using namespace std;
// 1 - Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

int main()
{
	int a, b, c, sum;
	cout<<"escreva um numero a: ";
	cin>>a;
	cout<<"escreva um numero b: ";
	cin>>b;
	cout<<"escreva um numero c: ";
	cin>>c;
	sum=a+b;
	cout<<"o resultado da soma entre a e b e: "<<sum;
	if(sum>=c){
		cout<<"\nc e menor que a soma entre a e b";
	}
	else{
		cout<<"\nc e maior que a soma entre a e b";
	};
}