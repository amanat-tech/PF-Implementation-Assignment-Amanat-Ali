#include<iostream>
using namespace std;
int main()
{
	int NoStu;
	int fee;
	double Totalfee=0;
	int lateRegistration=0;
	cout<<"  Enter number of students :  ";
	cin>>NoStu;

	for(int a=1; a<=NoStu; a++)
	{
		cout<<"  Enter fee paid by student  "<<a<<" is :  ";
		cin>>fee;
		Totalfee=fee+Totalfee;

		if(fee>2500)
		{
			cout<<"  late Registration "<<endl;
			lateRegistration ++ ;
		}
	}

	cout<<"  Total fee paid by students is "<<Totalfee<<endl;
	cout<<"  Number of Late Registration is "<<lateRegistration<<endl;
	return 0;
}