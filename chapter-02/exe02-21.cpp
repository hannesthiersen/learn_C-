// Exe. 2.20    exe02-20.cpp
// Write a program that prints a box, an oval, an arrow and a diamond as
// follows:
//
// *********            ***                *                *
// *       *          *     *             ***              * *
// *       *         *       *           *****            *   *
// *       *         *       *             *             *     *
// *       *         *       *             *            *       *
// *       *         *       *             *             *     *
// *       *         *       *             *              *   *
// *       *          *     *              *               * *
// *********            ***                *                *

#include <iostream>

using std::cout;

int main()
{

    // box
    cout << "*********\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*********\n\n";

    // oval
    cout << "   ***   \n";
    cout << " *     * \n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << " *     * \n";
    cout << "   ***   \n\n";

    // arrow
    cout << "    *    \n";
    cout << "   ***   \n";
    cout << "  *****  \n";
    cout << "    *    \n";
    cout << "    *    \n";
    cout << "    *    \n";
    cout << "    *    \n";
    cout << "    *    \n";
    cout << "    *    \n\n";


    // diamand
    cout << "    *    \n";
    cout << "   * *   \n";
    cout << "  *   *  \n";
    cout << " *     * \n";
    cout << "*       *\n";
    cout << " *     * \n";
    cout << "  *   *  \n";
    cout << "   * *   \n";
    cout << "    *    \n\n";


    return 0;
}
