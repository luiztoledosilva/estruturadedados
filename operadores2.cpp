#include<iostream>

using namespace std;

int main(){

	
	int num1, num2, soma, sub, multi, div;
	
	cout<<"Digite o primeiro numero: " ;//<< endl;
	cin>>num1;
	cout<<"Digite o segundo numero: " ;//<< endl;
	cin>>num2;
	
	soma=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	
	cout <<"A soma eh "<< soma << endl;
	
	cout <<"A subtracao eh "<<sub << endl;	
	
	cout <<"A multiplicacao eh "<<multi << endl;	
	
	cout <<"A divisao eh "<<div << endl;	
	system("pause");
	return 0;
	
	
	
	
}
