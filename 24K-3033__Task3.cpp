#include <iostream>
#include <string>

using namespace std;

class Planner
{
	public:
		string January[31],February[28],March[31],April[30],May[31],June[30],July[31],August[31],September[30],October[31],November[30],December[31];
		
		void addtasks()
		{
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for January: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>January[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for February: \n";
			for (int i=0;i<28;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>February[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for March: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>March[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for April: \n";
			for (int i=0;i<30;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>April[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for May: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>May[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for June: \n";
			for (int i=0;i<30;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>June[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for July: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>July[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for August: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>August[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for September: \n";
			for (int i=0;i<30;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>September[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for October: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>October[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for November: \n";
			for (int i=0;i<30;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>November[i];
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Enter the tasks for December: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"+-----+-----+-----+\n";
				cout<<"Enter the task for day "<<i+1<<": \n";
				cin>>December[i];
			}
			
		}
		
		void removetasks()
		{
			string month;
			int day;
			cout<<"Enter the month from which you want to remove the task: \n";
			cin>>month;
			cout<<"Enter the day from which you want to remove the task: \n";
			cin>>day;
			
			if (month=="January")
			{
				January[day-1]=" ";
			}
			else if(month=="February")
			{
				February[day-1]=" ";
			}
			else if(month=="March")
			{
				March[day-1]=" ";
			}
			else if(month=="April")
			{
				April[day-1]=" ";
			}
			else if(month=="May")
			{
				May[day-1]=" ";
			}
			else if(month=="June")
			{
				June[day-1]=" ";
			}
			else if(month=="July")
			{
				July[day-1]=" ";
			}
			else if(month=="August")
			{
				August[day-1]=" ";
			}
			else if(month=="September")
			{
				September[day-1]=" ";
			}
			else if(month=="October")
			{
				October[day-1]=" ";
			}
			else if(month=="November")
			{
				November[day-1]=" ";
			}
			else if(month=="December")
			{
				December[day-1]=" ";
			}
		}
		
		void displaytasks()
		{
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for January: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<January[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for February: \n";
			for (int i=0;i<28;i++)
			{
				cout<<"Task "<<i+1<<": "<<February[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for March: \n";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<March[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for April: ";
			for (int i=0;i<30;i++)
			{
				cout<<"Task "<<i+1<<": "<<April[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for May: ";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<May[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for June: ";
			for (int i=0;i<30;i++)
			{
				cout<<"Task "<<i+1<<": "<<June[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for July: ";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<July[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for August: ";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<August[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for September: ";
			for (int i=0;i<30;i++)
			{
				cout<<"Task "<<i+1<<": "<<September[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for October: ";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<October[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for November: ";
			for (int i=0;i<30;i++)
			{
				cout<<"Task "<<i+1<<": "<<November[i]<<"\n";
			}
			cout<<"+-----+-----+-----+-----+-----+-----+-----+\n";
			cout<<"Tasks for December: ";
			for (int i=0;i<31;i++)
			{
				cout<<"Task "<<i+1<<": "<<December[i]<<"\n";
			}
		}
};

int main()
{
	int flag=0,choice;
	Planner P;
	while (flag==0)
	{
		cout<<"Enter 1 if you want to add tasks: \n";
		cout<<"Enter 2 if you want to remove a task: \n";
		cout<<"Enter 3 if you want to display all the tasks: \n";
		cout<<"Enter 4 if you want to stop the program: \n";
		cin>>choice;
		
		if (choice==1)
		{
			P.addtasks();
		}
		else if(choice==2)
		{
			P.removetasks();
		}
		else if(choice==3)
		{
			P.displaytasks();
		}
		else if(choice==4)
		{
			flag=1;
			cout<<"Program stopped!\n";
		}
	}
}