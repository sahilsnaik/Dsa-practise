#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str1[50] = {0};
    char str2[50] = {0};

    cout << "Enter a string: ";
    fgets(str1, sizeof(str1), stdin);

    int n = strlen(str1) - 1;

    for (int i = 0; i <= n; i++)
    {
        str2[i] = str1[n - i];
    }

    cout << "Reversed string: " << str2;

    return 0;
}
