#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Laptop
{
	private:
		string brand;
		string model;
		string processor;
		int ram;
		int storage;
		int isOn = 0;

	public: 
		string getbrand()
		{
			return brand;
		}
		void setbrand(string brandP)
		{
			brand = brandP;
		}

		string getmodel()
		{
			return model;
		}
		void setmodel(string modelP)
		{
			model = modelP;
		}

		string getprocessor()
		{
			return processor;
		}
		void setprocessor(string processorP)
		{
			processor = processorP;
		}

		int getram()
		{
			return ram;
		}
		void setram(int ramP)
		{
			ram = ramP;
		}

		int getstorage()
		{
			return storage;
		}
		void setstorage(int storageP)
		{
			storage = storageP;
		}

		int getisOn()
		{
			return isOn;
		}
		void setisOn(int power)
		{
			isOn = power;
		}
};

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void loadingEffect()
{
	setColor(10);
	char spinner[] = "|/-\\";
	for (int i = 0; i < 30; i++)
	{
		printf("%c", spinner[i % 4]);
		fflush(stdout);
		Sleep(100);
		printf("\b");
	}
	setColor(15);
}

void compareLaptops(Laptop B, Laptop A)
{
	cout << "\n\nAnalyzing laptops...\n";
	loadingEffect();
	cout << "\n\n";

	cout << "Bilal's Laptop Specifications:\n";
	cout << "Brand: " << B.getbrand() << "\n";
	cout << "Model: " << B.getmodel() << "\n";
	cout << "Processor: " << B.getprocessor() << "\n";
	cout << "RAM: " << B.getram() << " GB\n";
	cout << "Storage: " << B.getstorage() << " GB\n";
	cout << "Power Status: " << (B.getisOn() == 1 ? "ON" : "OFF") << "\n";

	cout << "\nAyesha's Laptop Specifications:\n";
	cout << "Brand: " << A.getbrand() << "\n";
	cout << "Model: " << A.getmodel() << "\n";
	cout << "Processor: " << A.getprocessor() << "\n";
	cout << "RAM: " << A.getram() << " GB\n";
	cout << "Storage: " << A.getstorage() << " GB\n";
	cout << "Power Status: " << (A.getisOn() == 1 ? "ON" : "OFF") << "\n\n";

	cout << "Superiority Analysis:\n";
	
	if (B.getprocessor() > A.getprocessor())
	{
		cout << "Bilal's processor (" << B.getprocessor() << ") is better than Ayesha's processor (" << A.getprocessor() << ").\n";
	}
	else if (B.getprocessor() < A.getprocessor())
	{
		cout << "Ayesha's processor (" << A.getprocessor() << ") is better than Bilal's processor (" << B.getprocessor() << ").\n";
	}
	else
	{
		cout << "Both laptops have the same processor.\n";
	}

	if (B.getram() > A.getram())
	{
		cout << "Bilal's laptop has more RAM (" << B.getram() << " GB) than Ayesha's (" << A.getram() << " GB).\n";
	}
	else if (B.getram() < A.getram())
	{
		cout << "Ayesha's laptop has more RAM (" << A.getram() << " GB) than Bilal's (" << B.getram() << " GB).\n";
	}
	else
	{
		cout << "Both laptops have the same RAM.\n";
	}

	if (B.getstorage() > A.getstorage())
	{
		cout << "Bilal's laptop has more storage (" << B.getstorage() << " GB) than Ayesha's (" << A.getstorage() << " GB).\n";
	}
	else if (B.getstorage() < A.getstorage())
	{
		cout << "Ayesha's laptop has more storage (" << A.getstorage() << " GB) than Bilal's (" << B.getstorage() << " GB).\n";
	}
	else
	{
		cout << "Both laptops have the same storage capacity.\n";
	}
}

int main()
{
	int flag = 0;
	Laptop B, A;
	string brandB, modelB, processorB, brandA, modelA, processorA;
	int ramB, storageB, ramA, storageA, choice;

	cout << "Enter Bilal's laptop details:\n";
	cout << "Brand: ";
	getline(cin, brandB);
	cout << "Model: ";
	getline(cin, modelB);
	cout << "Processor (e.g., i3, i5, i7): ";
	getline(cin, processorB);
	cout << "RAM (GB): ";
	cin >> ramB;
	cout << "Storage (GB): ";
	cin >> storageB;
	cin.ignore();

	B.setbrand(brandB);
	B.setmodel(modelB);
	B.setprocessor(processorB);
	B.setram(ramB);
	B.setstorage(storageB);
	B.setisOn(0);

	cout << "\nEnter Ayesha's laptop details:\n";
	cout << "Brand: ";
	getline(cin, brandA);
	cout << "Model: ";
	getline(cin, modelA);
	cout << "Processor (e.g., i3, i5, i7): ";
	getline(cin, processorA);
	cout << "RAM (GB): ";
	cin >> ramA;
	cout << "Storage (GB): ";
	cin >> storageA;
	cin.ignore();

	A.setbrand(brandA);
	A.setmodel(modelA);
	A.setprocessor(processorA);
	A.setram(ramA);
	A.setstorage(storageA);
	A.setisOn(0);

	while (flag == 0)
	{
		cout << "\nChoose an action:\n";
		cout << "1. Turn Bilal's laptop ON/OFF\n";
		cout << "2. Turn Ayesha's laptop ON/OFF\n";
		cout << "3. Check laptop specifications\n";
		cout << "4. Exit\n";
		cin >> choice;

		if (choice == 1)
		{
			if (B.getisOn() == 0)
			{
				cout << "Bilal is turning ON his laptop...\n";
				B.setisOn(1);
			}
			else
			{
				cout << "Bilal is turning OFF his laptop...\n";
				B.setisOn(0);
			}
		}
		else if (choice == 2)
		{
			if (A.getisOn() == 0)
			{
				cout << "Ayesha is turning ON her laptop...\n";
				A.setisOn(1);
			}
			else
			{
				cout << "Ayesha is turning OFF her laptop...\n";
				A.setisOn(0);
			}
		}
		else if (choice == 3)
		{
			compareLaptops(B, A);
		}
		else if (choice == 4)
		{
			cout << "Goodbye!\n";
			flag = 1;
		}
		else
		{
			cout << "Invalid choice!\n";
		}
	}
}
