#include <cstdlib>
#include <iostream>
using namespace std;
//5 - Faça um algoritmo que leia o valor do salário mínimo e o valor 
//do salário de um usuário, calcule quantos salários mínimos esse 
//usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.293,20).

int main(void){
	float sal;
	float sal_min = 1293.20;
	float multi;
	cout<<"digite seu salario: ";
	cin>>sal;
	multi = sal/sal_min;
	cout<<"seu salario e "<<sal<<" e voce recebe "<<multi<<" salarios minimos";
	return 0;
}