#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class TeaMug
{
	private:
		string brand;
		string color;
		int capacity;
		int currentFilllevel;
	public:
		string getbrand()
		{
			return brand;
		}
		
		string getcolor()
		{
			return color;
		}
		
		int getcapacity()
		{
			return capacity;
		}
		
		int getcurrentFilllevel()
		{
			return currentFilllevel;
		}
		
		void setbrand(string brandP)
		{
			brand=brandP;
		}
		
		void setcolor(string colorP)
		{
			color=colorP;
		}
		
		void setcapacity(int capacityP)
		{
			capacity=capacityP;
		}
		
		void setcurrentFilllevel(int currentFilllevelP)
		{
			currentFilllevel=currentFilllevelP;
		}
		
		int checkempty()
		{
			if (currentFilllevel==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void siptea()
		{
			currentFilllevel--;
		}
		
		void refillmug()
		{
			currentFilllevel=capacity;
		}
};

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
	int count=0	,flag=0,key;
	string brandinput,colorinput;
	int capacityinput,filllevelinput;
	cout<<"Enter the brand name: \n";
	cin>>brandinput;
	cout<<"Enter the color: \n";
	cin>>colorinput;
	cout<<"Enter the capacity: \n";
	cin>>capacityinput;
	cout<<"Enter the current fill level: ";
	cin>>filllevelinput;
	cout<<"+-----+-----+-----+\n";
	cout<<"+-----+-----+-----+\n";
	TeaMug T;
	T.setbrand(brandinput);
	T.setcolor(colorinput);
	T.setcapacity(capacityinput);
	T.setcurrentFilllevel(filllevelinput);
	
	while (flag==0)
	{
		if (T.checkempty()==1)
		{
			cout<<"Wait for 2 minutes!The cup is being refilled!: \n";
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
			T.refillmug();
			cout<<"\n";
			cout<<"Press any key and then press enter to sip the tea: \n";
			cin>>key;
			cout<<"Sipping Tea!\n";
			T.siptea();
		}
		else
		{
			cout<<"Press any key and then press enter to sip the tea: \n";
			cin>>key;
			cout<<"Sipping Tea!\n";
			T.siptea();
		}
		count=count+1;
		if (count>=10)
		{
			cout<<"The mug of brand: "<<T.getbrand()<<" has a life of 10 refills.You need to change your cup now!\n";
			flag=1;
			cout<<"Program stopped!\n";
			break;
		}
		cout<<"+-----+-----+-----+\n";
		cout<<"Enter 1 if you are have finished studying: \n";
		cout<<"Enter 0 if you are still studying: \n";
		cout<<"+-----+-----+-----+\n";
		cin>>key;
		if (key==1)
		{
			flag=1;
			cout<<"Program stopped!\n";
		}
		else 
		{
			cout<<"Impressive!You work really hard!\n";
		}
		cout<<"+-----+-----+-----+-----+-----+-----+\n";
	}
}