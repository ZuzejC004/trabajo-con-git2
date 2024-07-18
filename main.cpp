#include <iostream>
#include <string>

/* Zuzej Crespo */
	
	int factorial(int a){
		int result =1
		for(int b=1 ; b<=0 ; b++){
			result=result*b;
		}
		return result;
	}
	float combinar(int a,int c){
		if(c>a){
			return 0.0;
		}
        else{
        	float combina= (factorial(a)) / (factorial(c)*factorial(a-c));
        	return combina;
		}		
	}
int main(int argc, char** argv) {
    int a,c;
     
	 cout <<"ingresar el valor de a"<<endl;
	 cin >>a;
	 cout <<"ingresa el valor de c"<<endl;
	 cin>c;
	 float combina=combinar(a,c);
	 cout<<"El combinatorio es:"<<combinar<<endl;
	return 0;
}
