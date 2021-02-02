#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle (int &a,int &s,int &d,int &f){
	int N=4;
	for(int i=0;i<=N;i++){
		int p = rand()%12+1;
		switch(p)
		{
			case 1:
				swap(a,s);
				break;
			case 2:
				swap(a,d);
				break;
			case 3:
				swap(a,f);
				break;
			case 4:
				swap(s,a);
				break;
			case 5:
				swap(s,d);
				break;
			case 6:
				swap(s,f);
				break;
			case 7:
				swap(d,a);
				break;
			case 8:
				swap(d,s);
				break;
			case 9:
				swap(d,f);
				break;
			case 10:
				swap(f,a);
				break;
			case 11:
				swap(f,s);
				break;
			case 12:
				swap(f,d);
				break;
		}
	}
}
void swap(int &x,int &y){
	int cham =x;
	x=y;
	y=cham;
}