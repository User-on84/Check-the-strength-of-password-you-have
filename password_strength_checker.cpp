#include<iostream>
#include<string>
using namespace std;

int getstrength(string password)
{
int count=0;
{
if(password.length()>=12)
{
    count++;
}
 if(password.length()>=8)
{
    count++;
}
bool haslower=false;
for(char c:password)
{
    if(c>='a' && c<='z')
    {
        haslower=true;
    }
}
if(haslower)
{
    count++;
}
bool hasupper=false;
for(char c:password)
{
    if(c>='A' && c<='Z')
    {
        hasupper=true;
    }
}
if(hasupper)
{
    count++;
}
bool specialchar=false;
for(char c:password)
{


if (!((c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z') ||
      (c >= '0' && c <= '9')))
{
    specialchar = true;
}
}
if(specialchar)
{
    count++;
}
return count;
}
}

int main()
{


    cout<<"------------Password strength checker------"<<endl;
    string password;
    cout<<"Enter your password:";
    cin>>password;

    cout<<endl;
    int score=getstrength( password);

    cout<<"Your strength of password is:"<<score <<"/5"<<endl;
    switch(score)
    {
    case 1:
        cout<<"Very Inefficient"<<endl;
        break;
    case 2:
        cout<<"Very Inefficient"<<endl;
        break;
    case 3:
        cout<<"Mid"<<endl;
        break;
    case 4:
        cout<<"Getting there"<<endl;
        break;
    case 5:
        cout<<"You have the best password"<<endl;
        break;
    }

return 0;
}


