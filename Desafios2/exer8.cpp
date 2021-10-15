#include <iostream>

using namespace std;


int main(){
	
	int op;
	
    int tamanho;
   
    
do{
	 
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for (int i=0 ; i<tamanho ; i++){
        cout << "Digite o elemento " << i+1 << "do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor;
   
	
	
	
	cout<<"Caso deseje imprimir outro vetor digite 1, caso contrario digita qualquer tecla ";
	cin>>op;
	
	
	
	
}while(op!= 1);
	
}




