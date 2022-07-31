// #include <iostream>

// #include <string>

// #include <algorithm>

// using namespace std;

// class A  

// {  

//   int x;  

//   public:  

//   void print(){cout<<"hello"<<x;}  

// };  

  

// class B: public A  

// {  

//   int y;  

//   public:  

//   void assign(int a)

//   {

//     y = a;

//     cout<<y;

//   }

// };

// int main()

// {

//   B obj;

//   obj.assign(10);

//   return 0;

// }

// #include <iostream>

// using namespace std;

//  int main()

//   {

//     int x = 10;

//     void *p = &x;

//     int *pi = static_cast<int*>(p);

//     cout << *pi << endl;

//     return 0;

//   }

// #include <iostream>

// using namespace std;

//  int main()

// // {

// //   try

// //   {

// //     try

//     {

//       throw 20;

//     }

//     catch (int n)

//     {

//       cout << "Print Catch1\n";

//       throw;

//     }

//   }

//   catch (int x)

//   {

//     cout << "Print Catch2\n";

//   }

//   return 0;

// }

#include <iostream>

using namespace std;

 int operate (int a, int b)

  {

    return (a * b);

  }

  float operate (float a, float b)

  {

    return (a / b);

  }

  int main()

  {

    int x = 50, y = 100;

    float n = 5.0, m = 2.0;

    cout << operate(x, y) <<"\t";

    cout << operate (n, m);

    return 0;

  }