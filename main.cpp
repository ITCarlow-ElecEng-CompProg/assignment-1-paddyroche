/**<
Patrick Roche
Exercise 1
Covert Celcius to Fahrenheit
 */

/**< preprocessor directives */
#include <iostream>

using namespace std;

/**< main() function */
int main()
{
    double tf,tc;


    cout << "enter temp in celcius" << endl;
    /**< Reading in temp in celcius */
    cin >> tc;

    /**< Formula needed to covert to Fahreheit */
    tf = 1.8*tc+32;

    /**< Displayed in Fahrenheit */
    cout << "temp in Fahrenheit: " << tf;

    return 0;
}
