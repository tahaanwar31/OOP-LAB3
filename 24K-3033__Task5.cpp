#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class GroceryStore
{
	private:
		string itemName;
		double price;

	public:
		void setItem(string name, double itemPrice)
		{
			itemName = name;
			price = itemPrice;
		}

		string getItemName()
		{
			return itemName;
		}

		double getPrice()
		{
			return price;
		}

		void updatePrice(double newPrice)
		{
			price = newPrice;
		}
};

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void loadingEffect()
{
    char spinner[] = "|/-\\";
    for (int i = 0; i < 30; i = i + 1)
    {
        printf("%c", spinner[i % 4]);
        fflush(stdout);
        Sleep(100);
        printf("\b");
    }
}

int main()
{
	int numItems;
	cout << "Enter the number of items in inventory: ";
	cin >> numItems;

	GroceryStore* store = new GroceryStore[numItems];

	string name;
	double price;
	for (int i = 0; i < numItems; i = i + 1)
	{
		cout << "Enter item name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter item price: ";
		cin >> price;
		store[i].setItem(name, price);
	}

	int flag = 0;
	while (flag == 0)
	{
		int choice;
		cout << "\n1. Add More Items\n";
		cout << "2. Update Item Price\n";
		cout << "3. View Inventory\n";
		cout << "4. Generate Receipt\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			int newItems;
			cout << "Enter number of new items to add: ";
			cin >> newItems;

			GroceryStore* newStore = new GroceryStore[numItems + newItems];
			for (int i = 0; i < numItems; i = i + 1)
			{
				newStore[i] = store[i];
			}

			delete[] store;
			store = newStore;

			for (int i = numItems; i < numItems + newItems; i = i + 1)
			{
				cout << "Enter item name: ";
				cin.ignore();
				getline(cin, name);
				cout << "Enter item price: ";
				cin >> price;
				store[i].setItem(name, price);
			}

			numItems = numItems + newItems;
			cout << "Items added successfully!\n";
		}
		else if (choice == 2)
		{
			cout << "Enter item name to update price: ";
			cin.ignore();
			getline(cin, name);

			int found = 0;
			for (int i = 0; i < numItems; i = i + 1)
			{
				if (store[i].getItemName() == name)
				{
					cout << "Enter new price: ";
					cin >> price;
					store[i].updatePrice(price);
					cout << "Price updated successfully!\n";
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				cout << "Item not found!\n";
			}
		}
		else if (choice == 3)
		{
			cout << "Current Inventory:\n";
			for (int i = 0; i < numItems; i = i + 1)
			{
				cout << store[i].getItemName() << " - Rs." << store[i].getPrice() << "\n";
			}
		}
		else if (choice == 4)
		{
			cout << "Generating Receipt...\n";
			setColor(10);
			loadingEffect();
			setColor(15);

			cout << "----- RECEIPT -----\n";
			double total = 0;
			for (int i = 0; i < numItems; i = i + 1)
			{
				cout << store[i].getItemName() << " - Rs." << store[i].getPrice() << "\n";
				total = total + store[i].getPrice();
			}
			cout << "--------------------\n";
			cout << "Total: Rs." << total << "\n";
		}
		else if (choice == 5)
		{
			cout << "Exiting program...\n";
			flag = 1;
		}
		else
		{
			cout << "Invalid choice!\n";
		}
	}

	delete[] store;
	return 0;
}
