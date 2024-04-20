#include <iostream>
using namespace std;

class demo {
    int row;
    int col;
    int **matrix;

public:
    void get_data() {
        cout << "Enter the number of rows: ";
        cin >> row;
        cout << "Enter the number of columns: ";
        cin >> col;
        matrix = new int*[row];
        for (int i = 0; i < row; i++) {
            matrix[i] = new int[col];
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << "matrix[" << i << "," << j << "] = ";
                cin >> matrix[i][j];
            }
        }
    }

    void show() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    demo operator*(demo &obj) {
        demo temp;
        while(1){
        if(col != obj.row){
        cout << "Invalid Details" << endl;
        cout << "--------Exiting the program--------" << endl;
            break;
        }
        temp.matrix = new int*[row];
            temp.row = row;
            temp.col = obj.col;
            for (int i = 0; i < row; i++) {
                temp.matrix[i] = new int[obj.col];
                for (int j = 0; j < obj.col; j++) {
                    temp.matrix[i][j] = 0;
                    for (int k = 0; k < col; k++) {
                        temp.matrix[i][j] += matrix[i][k] * obj.matrix[k][j];
                    }
            }   }
            break;
        }
        return temp;
    }

    ~demo() {
        for (int i = 0; i < row; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};

int main() {
    demo obj1, obj2, product;
    cout << "Enter data for the first matrix:" << endl;
    obj1.get_data();
    cout << "Enter data for the second matrix:" << endl;
    obj2.get_data();
    product = obj1 * obj2;
    cout << "Product of matrices:" << endl;
    product.show();
}