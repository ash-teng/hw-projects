#include <iostream>

using namespace std;


int main()
{
    int num[100];
    int t = 0;
    int x = 0;
    while (1){

    cout << "Enter an integer " ;
    cin >> num[t];

    if (num[t] == 0)
        break;
    else
        t++;
    }

    for (int i = 0;i<t-1;i++)
    {
        for (int j = 0;j<t-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                x=num[j+1];
                num[j+1]=num[j];
                num[j]=x;
            }
        }
    }


    cout << "OK,here's your list in numeric order: "<<endl;
    cout << num[0];
    for (int i=1;i<t;i++)
    {
        cout <<" -> "<<num[i] ;
    }
    cout << endl;

    while(1)
    {
        cout << "What do you want to delete?";
        cin >> x;
        if (x == 0)
            {
               cout  << "bye";
               break;
            }
           // 1 2 3 4 5 6 7 0
           // 0 1 2 3 4 5 6 7
        for (int i=0; i<t+1; i++)
            {

                if (x == num[i])
                {
                    while(i<t)
                    {
                        num[i] = num[i+1];
                        i++;
                    }
                    t--;
                    cout << "OK, here's your list in number order : ";
                    for(int j=0; j<t;j++)
                    {
                        cout << num[j] <<" ";
                    }
                    cout << endl;
                    continue;
                }
                if (num[i] == 0)
                {
                    cout << "can't delete"<<endl;

                }
            }


    }
    return 0;
}
