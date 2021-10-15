#include<iostream>

using namespace std;

int main(){
	
	int fatorial,num;
	
	cout<<"Insira um numero para calcular o fatorial ";
	cin>>num;
	
	for (fatorial=1;num>1;num=num-1) {
		fatorial=fatorial*num;
		//cout<<"O fatorial e igual a "<<fat;
		
	}
	
	cout<<"O fatorial eh igual a "<<fatorial;
	
	//return fat;
	
}
