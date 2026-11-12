
#include <iostream>
using namespace std;



bool IsPair(const char* str, int i)
{
    return
        (str[i] == 'a' && str[i + 1] == 'a') ||
        (str[i] == 'b' && str[i + 1] == 'b') ||
        (str[i] == 'c' && str[i + 1] == 'c');
}

int Count(const char* str, int i)
{
    if (str[i] == '\0' || str[i + 1] == '\0')
        return 0;

    if (IsPair(str, i))
        return 1 + Count(str, i + 2);

    return Count(str, i + 1);
}

void Change(const char* str, char* result, int i, int j)
{
    if (str[i] == '\0')
    {
        result[j] = '\0';
        return;
    }

    if (str[i + 1] != '\0' && IsPair(str, i))
    {
        result[j] = '*';
        result[j + 1] = '*';
        result[j + 2] = '*';

        Change(str, result, i + 2, j + 3);
    }
    else
    {
        result[j] = str[i];
        Change(str, result, i + 1, j + 1);
    }
}

#ifndef UNIT_TEST
int main()
{
    char str[101];
    char result[151];

    cout << "Enter string: ";
    cin.getline(str, 101);

    int k = Count(str, 0);

    cout << "Number of pairs: " << k << endl;

    Change(str, result, 0, 0);

    cout << "Original string: " << str << endl;
    cout << "Modified string: " << result << endl;

    return 0;
}
#endif
