#include <iostream>
using namespace std;
int main () {

    int tables = 0, rows = 0;

    for (int i = 0; i >= 0; i++){

        cout << "Please, enter the number of tables and rows for both arrays (has to be the same number) >" << endl;
        cin >> tables >> rows;

        if (tables != rows){

            cout << "Erorr, number of tables and rows does not match, try again..." << endl;

        }
        else {

            break;

        }

        cout << endl;

    }

    cout << endl;

    int array[rows][tables];
    int array1[rows][tables];
    int array_final[rows][tables];

    cout << "Now please fill in elements of first array >" << endl;
    cout << endl;

    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            cin >> array[i][m];

        }
    }
    
    cout << endl;
    cout << "Now please fill in the elements of second array >" << endl;
    cout << endl;
     
    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            cin >> array1[i][m];

        }
    }

    cout << endl;

    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            cout << array[i][m] << " " << flush;

        }

        cout << endl;
        
    }

    cout << endl;

    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            cout << array1[i][m] << " " << flush;

        }

        cout << endl;
        
    }

    cout << endl;

    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            array_final[i][m] = 0;

            for (int k = 0; k < tables; k++){

               array_final[i][m] += array[i][k] * array1[k][m];

            }

        }
        
    }

    
    for (int i = 0; i < rows; i++){

        for (int m = 0; m < tables; m++){

            cout << array_final[i][m] << " " << flush;

        }

        cout << endl;
        
    }

    return 0;
}