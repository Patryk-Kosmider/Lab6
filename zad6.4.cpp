#include <iostream>

using namespace std;

int main()
{
	string abc;
	string res;
	int n;
	cout << "Podaj stringa: " << endl;
	cin >> abc;
	cout << "Podaj ile razy chcesz dokonac kokatenacji: " << endl;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		res = res + abc;
	}


	cout << "Wynik:  " << res << endl;


	return 0;
}