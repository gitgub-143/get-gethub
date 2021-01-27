#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[50];
    int vowel = 0, consonant = 0, num = 0, special_char = 0, space = 0;
    cout<<"Enter a string :";
    cin>>str;
    for(int i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] == 'a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            ++vowel;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z'))
        {
            ++consonant;
        }
        else if (str[i] >= '0' || str[i] <= '9')
        {
            ++num;
        }
        else if (str[i] == ' ' )
        {
            ++space;
        }
        else
        {
            ++special_char;
        }
        
    }
    cout<<"\n Number of vowels :" << vowel;
    cout<<"\n Number of consonants :" << consonant;
    cout<<"\n Numbers of num :" << num;
    cout<<"\n Number of special characters :" << special_char;
    return 0;

}