#include <iostream>
using namespace std;

int main()
{
    unsigned  int a ;
    cout<<"Vasha zarplata($): ";
    cin >>a;
    try
    {
        if (a>1000)
        {
            if (a>1000000)
            {
                cout <<"Ti millioner!";
                throw 0;
            }
            cout <<"Horosho";
            throw 0;
        }
        cout <<"Rabotai bolshe";
        throw 0;
    }
    catch(int d)
    {
        cout <<"...no ti molodec";
        return d;
    }
}
