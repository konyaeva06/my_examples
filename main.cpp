// #include<iostream> 
// #include <locale.h>
// using namespace std;

// int main ()
// {
//     int c;
//     c = 2 + 2 * 2;
//     cout << c << endl;
//     return 0; 
// }

// void get_number()
// {
//     setlocale(LC_ALL, "Rus");
//     int Var, Var2;
//     cout << "Введите 1 число ";
//     cin >> Var;
//     cout << "Введите 2 число ";
//     cin >> Var2;
//     cout << "Число 1 = " << Var << endl << "Число 2 = " << Var2 << endl;
// }

// int main()
// {
//     get_number();
//     return 0;
// }


#include <iostream>
#include <cstdlib> 
using namespace std;
int main () {
    // system("chcp 1251>nul");
    const double kmInMile=1.609344;
    double distMile,distKm;
    cout<<"Укажите расстояние в милях: ";
    cin>>distMile;
    distKm=distMile*kmInMile;
    cout<<"Расстояние (в км) : "<<distKm<<endl;
    // system("pause>nul");
    return 0;
}

