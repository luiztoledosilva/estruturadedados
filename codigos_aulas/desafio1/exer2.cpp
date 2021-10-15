#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;


int main(){
	
	float n1,n2,n3, media_sala,media;
	
	
	cout<<"Digite a primeira nota do aluno ";
	cin>>n1;
	
	cout<<"Digite a segunda nota do aluno ";
	cin>>n2;
	
	cout<<"Digite a terceira nota do aluno ";
	cin>>n3;
	
	cout<<"Informe media geral da sala ";
	cin>>media_sala;
	
	media=(n1+n2+n3)/3;
	//cout << fixed;   /// para limitar casa decimais 
	cout<<"Media do aluno igual= "<<fixed<<setprecision(2)<<media;
	
    endl;

	
	if (media>media_sala) {
		cout<<"O aluno esta acima da media da sala "
		
		
	}else if(media<media_sala) {
		cout<<"O aluno esta abaixo da media da sala ";
		
		
	} else{
		
		cout<<"O aluno esta dentro da media da sala ";
	}





	
	return 0;
	
}
