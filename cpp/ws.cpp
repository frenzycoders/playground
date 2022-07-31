#include <bits/stdc++.h>
#include <string>
using namespace std;
class book_store
{

public:
    string *au_name;
    string *title;
    int *stock;
    int price = 500;
    book_store()
    {
        this->au_name = new string[5];
        this->title = new string[5];
        this->stock = new int[5];

        au_name[0] = "William Shakespeare";
        au_name[1] = "William Shakespeare";
        au_name[2] = "J.K. Rowling";
        au_name[3] = "J.K. Rowling";
        au_name[4] = "Munshi Premchand";

        title[0] = "Hamlet";
        title[1] = "Romeo and Juliet";
        title[2] = "Harry Potter";
        title[3] = "Fantastic Beasts";
        title[4] = "Godaan";

        stock[0] = 100;
        stock[1] = 80;
        stock[2] = 120;
        stock[3] = 110;
        stock[4] = 60;
    }
    void show_data()
    {
        cout << "Author names are\n";
        for (int i = 0; i < 5; i++)
            cout << au_name[i] << "  ";
        cout << endl;

        cout << "Title names are\n";
        for (int i = 0; i < 5; i++)
            cout << title[i] << "  ";
        cout << endl;

        cout << "Stocks\n";
        for (int i = 0; i < 5; i++)
            cout << stock[i] << "  ";
        cout << endl;
    }
    void buy_book()
    {
        string au, tn;
        bool isFound = false;

        int c;
        cin.ignore();
        cout << "Enter the author name\n";
        getline(cin, au);
        for (int i = 0; i < 5; i++)
        {

            if (au == au_name[i])

            {
                cout << "Enter the title name\n";
                getline(cin, tn);
                if (tn == title[i])
                {
                    isFound = true;
                    cout << "Enter the no. of copies\n";
                    cin >> c;
                    if (c < stock[i])
                    {
                        stock[i] -= c;
                        cout << "Total cost = " << c * price << endl;
                        break;
                    }
                    else
                    {
                        cout << "Required no. of copies not available\n";
                        break;
                    }
                }
                else
                {
                    cout << "Title Name is not correct\n";
                    break;
                }
            }
            else
            {
                isFound = false;
            }
        }

        if (!isFound)
        {
            std::cout << "Author not found";
        }
    }
};
int main()
{
    book_store bok;
    int var;

    while (1)
    {
        cout << "Input 1 : Show Data \nInput 2 : Buy Book \nInput 0 : Exit \n";
        cin >> var;
        switch (var)
        {
        case 1:
            bok.show_data();
            break;
        case 2:
            bok.buy_book();
            break;
        case 0:
            exit(0);

        default:
            cout << "Wrong Input \n";
            break;
        }
    }

    return 0;
}