#include <iostream>

using namespace std;

int main()
{
    char slt;
    int n;
     do
    {
        system("cls");
cout << "\n\n\n\t\t =============================================================\n" << endl;
       cout <<"\t\t                      FOR LOOP INVERTED TRIANGLE                \n" << endl;
        cout <<"\t\t =============================================================\n\n" << endl;
        cout <<"\t\t Enter the Number of Row: " << endl;
        cout <<"%i", &n << endl;
 <
        cout <<"\n" << endl;

        for(i = n; i >= 0; --i)
        {
            cout << "\t\t                           "<< endl;
            for(j = 1; j <= n - i; ++j)
            {
                cout <<" " << endl;
            }
            for(j = 1; j <= i; ++j)
            {
                cout << "* " << endl;
            }
           cout <<"\n" << endl;
        }

        cout <<"\t\t =============================================================\n" << endl;
        cout <<"\n\t\t Do you want to TRY AGAIN? [y/n] : " <<endl;
        cout <<"%s", &slt << endl;

    } while (slt == 'y' || slt == 'Y');

    } while

    return 0;
}
