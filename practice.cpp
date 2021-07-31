#include <iostream>

using namespace std;

// not using string
void duplicateStr(char str[])
{
    
    char* str2; str2 = new char[strlen(str) + 1];
    strcpy(str2, str);
    strcat(str, str2);
    cout << "duplicated: " << str << endl;
    strcpy(str, str2);
}

void reverseStr(char str[])
{
    char* str1; str1 = new char[strlen(str) + 1];
    strcpy(str1, str);
    int a = strlen(str);
    for (int i = 0; i < a; i++) {
        str[i] = str1[a - i - 1];

    }
    cout << "reversed: " << str << endl;
}


int main() {
    char str[50] = "abcdefg";
    duplicateStr(str);
    reverseStr(str);
    
    return 0;
}