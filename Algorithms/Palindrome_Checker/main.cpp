#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool palindromeChecker(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[str.length() - (i + 1)]))
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cout << palindromeChecker("Henrique");
    cout << palindromeChecker("Tacocat");
    return 0;
}
