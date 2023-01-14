/* Pattern25 (Hollow Rhombus)

          *****
         *   *
        *   *
       *   *
      *****

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        for (int s = 1; s <= (n - row); s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= n; col++) {

            if (row == 1 || row == n || col == 1 || col == n) {

                std::cout << "*";
            } 

            else {

                std::cout << " ";
            }
        }

        std::cout << "\n";
    }









    return 0;
}