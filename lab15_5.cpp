#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a,int *b,int *c,int *d){
	for (int i = 0; i < 4; i++)
	{
	
	int x=rand()%4;
	if(x==0){
		int y = *a;
		*a=*b; *b=y;
		}
	else if(x==1){
		int y = *c;
		*c=*d; *d=y;
		}
	else if(x==2){
		int y = *b;
		*b=*c; *c=y;
		}
	else if(x==3){
		int y = *d;
		*d=*a; *a=y;
			}	
	}
}