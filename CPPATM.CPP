#include<iostream>
#include<conio.h>
using namespace std;

class atm
{
	private:
	double ch,wd,ab,de,ac,rac;

	public:

	atm (double x, double y)
	{
	ab=65000;



	 cout<<"Enter Your Account Number = ";
	 cin>>ac;

		if(ac==12345)
		{
			cout<<endl<<"Re Enter Your Account Number = ";
			cin>>rac;

			if(ac==rac)
			{
			cout<<endl<<"Enter 1 For Balace Enquiry";
			cout<<endl<<"Enter 2 For Deposit Money";
			cout<<endl<<"Enter 3 For Withdraw Money";

			cout<<endl<<endl<<"ENTER YOUR CHOICE = ";
			cin>>ch;

			if(ch==1)
			{
			cout<<endl<<"Account Balance = "<<ab;
			}
			else if(ch==2)
			{

				cout<<endl<<"Enter Amount to Deposit = ";
				cin>>de;

				x=ab+de;
				ab=x;
				cout<<endl<<endl<<"Account Balance = "<<ab;


			}
				else if(ch==3)
				{

				cout<<endl<<"Enter Amount to Withdraw = ";
				cin>>wd;

					if(wd<=ab)
					{
					y=ab-wd;
					ab=y;
					cout<<endl<<endl<<"Account Balance = "<<ab;
					}
					else
					{
					cout<<endl<<endl<<"Insufficient Balance";
					}

				}
					else
					{
					cout<<endl<<"Enter a Valid Option";
					}

			}
			else
			{
			cout<<endl<<"Account Number Mis Match";
			}


		}
		else
		{
		cout<<endl<<"No Such Account Found 2";
		}

	}
};

int main()
{
double n1,n2;
cout<<endl<<"\t\t\tWekcome to the BANK OF BARODA"<<endl<<endl;
	 atm obj1(n1,n2);

getch();
return 0;
}