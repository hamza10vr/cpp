
#include <iostream>

int main()
{
    std::cout << "please enter a number: " ;
    int x ;
    std::cin >> x ;

    if ( x < 0)
    {
        // x < o
        std::cout << " you entered a negative numeber" << std::endl;
    }

    else if ( x > 0)
    {
        // x < o
        std::cout << " you entered a Positive numeber" << std::endl;
    }
    else
    {
        // x < o
        std::cout << " ZERO" << std::endl;
    }

    return 0;

}
