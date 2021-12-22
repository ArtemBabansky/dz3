#include <iostream>

using namespace std;
extern int a, b, c, d;

int main() {
 //task2

 int num;
 cout << "Enter number:  ";
 cin >> num;
 const int numLimit = 21;
 const int answer = (num<= numLimit) ? (num-numLimit): (num-numLimit) <<1;
 count <<"Task2 = "<< answer <<endl;
 //task3
 const int size = 3;
    int array [size] [size] [size]={0};
    int *pArr = nullptr;
    pArr = &array[1] [1] [1];
    *pArr=1000000
    count <<"Task3 = " array[1] [1] [1] << endl;
    count <<"Task3 = " << *pArr<< endl;
    // Task 4
    const float var = a* (b+(static_cast<float>(c)/d));
    cout << "Task4 = " <<var<<endl;
    return 0;
    }
