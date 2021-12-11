#include <iostream>
using namespace std;
int main(){
	int q,q1,q2,q3,q4,q5;
	cin>>q;
	q1=q;
	q2=q;
	q3=q;
	q4=q;
	q5=q;
	q1=q1/3;
	q2=q2+q1;
	q5=q5+q1;
	
	q2=q2/3;
	q1=q1+q2;
	q3=q3+q2;
	
	q3=q3/3;
	q2=q2+q3;
	q4=q4+q3;
	
	q4=q4/3;
	q5=q5+q4;
	q3=q3+q4;
	
	q5=q5/3;
	q1=q1+q5;
	q4=q4+q5;

	
	cout<<"第1个小朋友有"<<q1<<"颗糖果。"<<endl;
	cout<<"第2个小朋友有"<<q2<<"颗糖果。"<<endl;
	cout<<"第3个小朋友有"<<q3<<"颗糖果。"<<endl;
	cout<<"第4个小朋友有"<<q4<<"颗糖果。"<<endl;
	cout<<"第5个小朋友有"<<q5<<"颗糖果。"<<endl;
	return 0; 
}
