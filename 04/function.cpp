#include    <iostream>
using namespace std;
int main()
{
    double a[50], b[100];

    double max = a[0];
    for(int i=1; i < 50; i++)
        if(max < a[i])
            max = a[i];
    cout << max << endl;
    max = b[0];
    for(int i=1; i < 100; i++)
        if(max < b[i])
            max = b[i];
    cout << max << endl;
    }