#include <iostream>
#include <vector>

using namespace std;

int main()
{
	struct student
	{
		int id;
		string imie;
		string nazwisko;

	};

	int n;
	cout << "Podaj ile bedzie studentow: " << endl;
	cin >> n;
	cout << endl;

	vector <student> st(n);

	
	for(int i = 0; i < n; i++)
	{
		cout << "Podaj id dla studenta: " << endl;
		cin >> st[i].id;
		cout << "Podaj imie: " << endl;
		cin >> st[i].imie;
		cout << "Podaj nazwisko: " << endl;
		cin >> st[i].nazwisko;

		cout << " " << endl;


	}

	cout << "Przed sortowaniem: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << st[i].id << " " << st[i].imie << " " << st[i].nazwisko << endl;
	}

	cout << endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			if (st[j].id > st[j + 1].id)
			{
				student pom = st[j];
				st[j] = st[j + 1];
				st[j + 1] = pom;
			}
		}
	}

	cout << "Po sortowaniu: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << st[i].id << " " << st[i].imie << " " << st[i].nazwisko << endl;
	}



	return 0;
}
