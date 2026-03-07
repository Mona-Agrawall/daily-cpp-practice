#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
void generateFibonacci(int n, int fib[])
{
    fib[0] = 0;

    if(n > 1)
        fib[1] = 1;

    for(int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void analyzePrimeFibonacci(int n)
{

    if(n < 1 || n > 100)
    {
        cout << "Please enter a value between 1 and 100.\n";
        return;
    }

    int fib[100];

    generateFibonacci(n, fib);

    cout << "\nFibonacci Price Levels:\n";

    for(int i = 0; i < n; i++)
    {
        cout << fib[i] << " ";
    }

    cout << "\n\nPrime Fibonacci Trading Signals:\n";

    for(int i = 0; i < n; i++)
    {
        if(isPrime(fib[i]))
        {
            cout << fib[i] << " ";
        }
    }

    cout << endl;
}

void checkPrime()
{
    int num;

    cout << "Enter number to check: ";
    cin >> num;

    if(isPrime(num))
        cout << "Number is Prime\n";
    else
        cout << "Number is Not Prime\n";
}

int main()
{
    int choice;

    while(true)
    {
        cout << "\n----- Fibonacci Prime Stock Analyzer -----\n";
        cout << "1. Generate Fibonacci Levels\n";
        cout << "2. Check Prime Number\n";
        cout << "3. Analyze Prime Fibonacci Signals\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        if(choice == 1)
        {
            int n;
            int fib[100];

            cout << "Enter number of levels: ";
            cin >> n;
            if(n < 1 || n > 100)
            {
                cout << "Please enter a value between 1 and 100.\n";
                continue;
            }

            generateFibonacci(n, fib);

            cout << "Fibonacci Levels:\n";

            for(int i = 0; i < n; i++)
            {
                cout << fib[i] << " ";
            }

            cout << endl;
        }

        else if(choice == 2)
        {
            checkPrime();
        }

        else if(choice == 3)
        {
            int n;

            cout << "Enter number of levels: ";
            cin >> n;

            analyzePrimeFibonacci(n);
        }

        else if(choice == 4)
        {
            cout << "Program Ended\n";
            break;
        }

        else
        {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}