//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXI
// Versuch 02
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>

int fibonacci(int n)
{
    int previousFib = 1;
    int currentFib = 1;
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    	for (int i = 2; i < n; i++)
    {
        int newFib = previousFib + currentFib ;
        currentFib = previousFib ;
        previousFib = newFib ;

    }
    return currentFib ;
}

int main ()
{
    std::cout << " Fibonacci - Zahlen von 0 bis 12:" << std::endl ;
    for (int i = 1; i <= 12 ; i ++)
    {
        std::cout << "(" << i << ") = " << fibonacci(i) << std::endl ;
    }
    return 0;
}
