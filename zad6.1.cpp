
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj n: " << endl;
    cin >> n;
    cout << endl;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if(i % 5 == 0 && i % 3 != 0){
            cout << i << endl;
            counter++;
        }
        
    }

    cout << "Ilosc liczb mniejszych od " << n << ", podzielnych przez 5, ale nie przez 3 wynosi: " << counter << endl;



    return 0;
}
