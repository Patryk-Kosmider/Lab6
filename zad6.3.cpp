#include <iostream>
#include <vector>

using namespace std;

int main()
{
	struct student
	{
		int id;
		string imie;
		int inf;
		int mat;
		int chm;
		int jkp;
	};

	vector <student> st(6);

	for(int i = 0; i < 6; i++)
	{
		st[i].id = i + 1;
		cout << "Podaj imie ucznia nr. " << st[i].id << endl;
		cin >> st[i].imie;
		cout << "Podaj ocene z informatyki: " << endl;
		cin >> st[i].inf;
		cout << "Podaj ocene z matematyki: " << endl;
		cin >> st[i].mat;
		cout << "Podaj ocene z chemii: " << endl;
		cin >> st[i].chm;
		cout << "Podaj ocene z jezyka polskiego: " << endl;
		cin >> st[i].jkp;
		cout << endl;

	}

	int numq;
	int studentId;
	int objectId;
	cout << "Podaj liczbe zapytan: " << endl;

	cin >> numq;

	for(int i = 0; i < numq; i++)
	{
		cout << "Podaj nr ucznia [1...6]: " << endl;
		cin >> studentId;
		studentId = studentId - 1;
		cout << "Podaj nr przedmiotu [0...3]: " << endl;
		cin >> objectId;
		if(objectId == 0)
		{
			cout << "Uczen: " << st[studentId].imie << ", ocena z informatyki: " << st[studentId].inf << endl;
		}
		else if (objectId == 1)
		{
			cout << "Uczen: " << st[studentId].imie << ", ocena z matematyki: " << st[studentId].mat << endl;

		}else if (objectId == 2)
		{
			cout << "Uczen: " << st[studentId].imie << ", ocena z chemii: " << st[studentId].chm << endl;
		}
		else if(objectId == 3)
		{
			cout << "Uczen: " << st[studentId].imie << ", ocena z jezyka polskiego: " << st[studentId].jkp << endl;
		}

	}


	return 0;
}
