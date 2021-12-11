#include <iostream>
using namespace std;
int main(){
	int a,b,c,r;
	r=24;
	for(a=1;a<r-1;a++){
		for(b=1;b<r-a;b++){
			c=r-a-b;
			int a1,a2,a3,b1,b2,b3,c1,c2,c3;
			a1=a-b-c;
			b1=2*b;
			c1=c*2;
			if(a1<1){
				continue;
			}
			a2=a1*2;
			b2=b1-c1-a1;
			c2=c1*2;
			if(b2<1){
				continue;
			}
			a3=2*a2;
			b3=2*b2;
			c3=c2-b2-a2;
			if(c3<1){
				continue;
			}
			if(a3==b3&&b3==c3){
				cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
				//cout<<"a1="<<a1<<" b1="<<b1<<" c1="<<c1<<endl;
				//cout<<"a2="<<a2<<" b2="<<b2<<" c2="<<c2<<endl;
				//cout<<"a3="<<a3<<" b3="<<b3<<" c3="<<c3<<endl;	
			}
		}
	}
		
	return 0; 
} 

