#include <iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
      cout<<"vowel";
    else if(65<=a<=90||97<=a<=122) 
     cout<<"consonant";
}
