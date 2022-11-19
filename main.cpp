#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string napis;

    while(getline(cin,napis))
    {
       for (unsigned int i=0; i<napis.size(); i++)
       {
           if(isspace(napis[i]))
           {
               napis[i]=0;
               napis[i+1]=toupper(napis[i+1]);
           }
        }
        for(unsigned int i=0; i<napis.size(); i++)
        {
            if (napis[i] != 0)
            {
                cout<<napis[i];
            }
        }
        cout<<"\n";
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    string tekst;
    while(getline(cin,tekst))
    {
        int bufor=0;
        for(int i=0; i<tekst.length(); i++)
        {
            if(tekst[i]>=97&&bufor==0&&tekst[i]<=122)
            {
                cout<<char(tekst[i]-32);
                bufor=1;
            }
            else if(tekst[i]==' ')
            {
                cout<<"";
                bufor=0;
            }
            else if(65<=tekst[i]<=90)
            {
                cout<<tekst[i];
                bufor=1;
            }
            else
            {
               cout<<tekst[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
