#include<iostream>

using namespace std;

int main(){
	
    int n,fatorial;
    
    cout<<"Insira um numero para calcular o fatorial ";
    cin>>n;
    
    if (n<=1){
    	
    	cout<<"O fatorial é igual a 1 ";
	}else{
		fatorial=n*fatorial;
		cout<<"O fatorial eh igual a "<<fatorial;
		
	}
    	

	
	return 0;
	
	
}
