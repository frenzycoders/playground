#include <iostream>
#include <string>
using namespace std;

class Ds
{
public:
    void options()
    {
        cout << "\n"
             << "> 1 for linear search algorithm" << endl;
        cout << "> 2 for binary search algorithm" << endl;
    };
    void messagePrint(string msg)
    {
        std::cout << "===================================" << endl;
        std::cout << "          " << msg << "          " << endl;
        std::cout << "===================================" << endl;
    }

    bool linear_search()
    {
        int size = 0;
        std::cout << "> Please enter length of array: ";
        std::cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            std::cout << "> Please enter value for " << i << " Index: ";
            std::cin >> arr[i];
        }

        for (auto a : arr)
        {
            std::cout << "| " << a;
        }

        std::cout << "\n> Please enter element which you want to find: ";
        int element;
        std::cin >> element;

        // Linear search algorithm implementation

        for (auto a : arr)
        {
            if (a == element)
            {
                return true;
            }
        }
        return false;
    }

    bool binarySearch()
    {
        int size;
        cout << "> Please enter size of array: ";
        cin >> size;
        int arr[size];
        cout << "> Plese enter element in ascending or descending: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "> Please enter value for index " << i << " :";
            cin >> arr[i];
        }

        cout << "> Please enter element which you want to find: ";
        int element;
        cin >> element;
        bool isFound = false;
        int left = 0, right = size, mid = (left + right) / 2;
        while (isFound == false && right >= left)
        {
            if (element == arr[mid])
            {
                isFound = true;
            }
            else if (element < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }

            mid = (left + right) / 2;
        }

        if (isFound)
        {
            messagePrint("Item found at index " + to_string(mid));
        }
        else
        {
            messagePrint("Item not found");
        }
    }

    
};

int main()
{

    Ds ds = Ds();
    int option = 0;
    bool flag = true;
    while (flag)
    {
        ds.options();
        cout << "> Please enter your choice: ";
        cin >> option;

        ds.messagePrint("Your selection " + to_string(option));

        switch (option)
        {
        case 1:
            if (ds.linear_search())
            {
                ds.messagePrint("Item Found");
            }
            else
            {
                ds.messagePrint("Not Found");
            }
            break;
        case 2:
            ds.binarySearch();
            break;

        default:
            cout << "> Bye";
            flag = false;
            break;
        }
    }

    return 0;
}