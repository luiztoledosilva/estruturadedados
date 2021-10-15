#include <iostream>

using namespace std;


int main(){


 float* gasto=new float[5];

 float media;
 
 float  total;
 
 int i;
 
 for (i=0;i<5;i++){
 	
 	cout<<"Digite o valor do gasto da  "<<i+1<<" familia R$ "<<endl;
 	cin>>gasto[i];
 	
    total += gasto[i];
    
    media=total/5;
    
 		
 }
 
 
cout << "media: " <<media<< endl;
	
for(i=0;i<5;i++)	{

	
    if (gasto[i]<media)
    {
    	cout << gasto[i] << " "<<endl;
        
    	cout<<"Gasto menor do que a media "<<endl;
	}else if(gasto[i>media]){
			cout << gasto[i] << " "<<endl;
		cout<<"Gasto maior do que a media "<<endl;
	}else{
		cout << gasto[i] << " "<<endl;
		cout<<"gasto igual a media "<<endl;
	}
	

}
	
delete [] gasto;


    return 0;	






	
	
	
	
	
}
