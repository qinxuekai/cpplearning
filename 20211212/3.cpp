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

	
	cout<<"��1��С������"<<q1<<"���ǹ���"<<endl;
	cout<<"��2��С������"<<q2<<"���ǹ���"<<endl;
	cout<<"��3��С������"<<q3<<"���ǹ���"<<endl;
	cout<<"��4��С������"<<q4<<"���ǹ���"<<endl;
	cout<<"��5��С������"<<q5<<"���ǹ���"<<endl;
	return 0; 
}
