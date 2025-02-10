#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class MarkerPens
{
	private:
		string brand;
		string color;
		int inklevel=100;
		int refillable;	
	
	public: 
		string getbrand()
		{
			return brand;
		}
		void setbrand(string brandP)
		{
			brand=brandP;
		}
		
		string getcolor()
		{
			return color;
		}
		void setcolor(string colorP)
		{
			color=colorP;
		}
		
		int getinklevel()
		{
			return inklevel;
		}
		void setinklevel(int levelP)
		{
			inklevel=levelP;
		}
		void updateinklevel(int decrease)
		{
			inklevel=inklevel+decrease;
		}
		
		int getrefillable()
		{
			return refillable;
		}
		void setrefillable(int refillableP)
		{
			refillable=refillableP;
		}
};

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
	int flag=0;
	MarkerPens P;
	string brandinput,colorinput;
	int refillableinput,inklevelinput,choice;
		
	cout<<"Enter the brand name of the pen: \n";
	getline(cin,brandinput);
		
	cout<<"Enter the color of the pen: \n";
	getline(cin,colorinput);
		
	cout<<"Enter 1 if the marker is refillable and 0 if non refillable: \n";
	cin>>refillableinput;
		
	cout<<"Enter the inklevel of the pen: (MAX:10 MIN:0)\n";
	cin>>inklevelinput;
		
	P.setbrand(brandinput);
	P.setcolor(colorinput);
	P.setrefillable(refillableinput);
	P.setinklevel(inklevelinput);
	while (flag==0)
	{

		
		if (P.getinklevel()>0)
		{
			cout<<"Sir Ahmed is writing with his " <<P.getcolor()<<" pen of brand "<<P.getbrand()<<" \n";
			P.updateinklevel(-1);
			
		}
		else if (P.getinklevel()==0 && P.getrefillable()==1)
		{
			cout<<"Wait for 2 minutes!Sir Ahmed is refilling his pen: \n";
			setColor(10); 
			char spinner[] = "|/-\\"; 
		    for (int i = 0; i < 40; i++)
		    {
		        printf("%c", spinner[i % 4]);  
		        fflush(stdout);  
		        Sleep(100);  
		        printf("\b");  
			}
			setColor(15);
			P.setinklevel(10);
			cout<<"Sir Ahmed is writing with his " <<P.getcolor()<<" pen of brand "<<P.getbrand()<<" \n";
			P.updateinklevel(-1);
		}
		else if(P.getinklevel()==0 && P.getrefillable()==0)
		{
			cout<<"Sir Ahmad needs to buy a new pen to take the class!\n";
			flag=1;
		}
		
		cout<<"\n\n";
		cout<<"Enter 1 if you want to take another class: \n";
		cout<<"Enter 2 if you do not have any other class: \n";
		
		cin>>choice;
		if (choice==1)
		{
			cout<<"+-----+-----+-----+-----+-----+-----\n";
			cout<<"Taking another class!\n";
		}
		else if (choice==2)
		{
			cout<<"Goodbye!Class ended!\n";
			flag=1;
		}
	
		
	}
}