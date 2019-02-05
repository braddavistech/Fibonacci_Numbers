//
//  main.cpp
//  NumberSequence
//
//  Created by Brad Davis on 2/5/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next = 0;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Series to ";
    cout << n;
    cout << " places: \n";

    
    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1 )
        {
            cout << " " << first;
            continue;
        }
        if(i == 2)
        {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        
        cout << next << " ";
    }
    cout << "\n";
    return 0;
}
