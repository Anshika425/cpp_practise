#include<iostream>
using namespace std;

int main()
{
    int budget;
    cout << "enter a budget: " << endl;
    cin >> budget;

    if(budget > 70000000)
    {
        cout << "can buy fortuner" << endl;
    }
    else
    {
        cout << "cannot buy fortuner" << endl;
    }
    return 0;
}