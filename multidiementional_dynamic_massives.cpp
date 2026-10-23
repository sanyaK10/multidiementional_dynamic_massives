#include <iostream>

void fillArr(int* arr, int size, int min, int max) {
    for (int i = 0;i < size;++i) {
        int range = max - min + 1;
        arr[i] = rand() % range + min;
    }
}

void printArr(int* arr,int size) {
    for (int i = 0;i < size;++i) {
        cout << arr[i] << ' ';
    }
}
using namespace std;
int main()
{
    srand(time(NULL));

    int size_x;
    cin >> size_x;

    int** jaggedArr = new int* [size_x];
    int* sizes = new int[size_x];

    for (int i = 0;i < size_x;++i) {
        int size_y;
        cin >> size_y;
        sizes[i] = size_y;
        jaggedArr[i] = new int[size_y];
        fillArr(jaggedArr[i], size_y, 0, 20);
        printArr(jaggedArr[i], size_y);
        cout << '\n';
    }

    for (int i = 0;i < size_x;+i) {
        printArr(jaggedArr[i], sizes[i]);
        cout << '\n';
    }

    for (int i = 0;i < size_x;++i) {
        delete[] jaggedArr[i];
    }
    delete[] jaggedArr;

    //int size_x, size_y,size_z,size_k;

    //cin >> size_x >> size_y>>size_z>>size_k;
    //int**** arr4d = new int*** [size_x];

    //for (int i = 0;i < size_x;++i) {
    //    arr4d[i] = new int** [size_y];
    //    for (int j = 0;j < size_y;++j) {
    //        arr4d[i][j] = new int*[size_z];
    //        for (int k = 0;k < size_k;++k) {
    //            arr4d[i][j][k] = new int[size_k];
    //            fillArr(arr4d[i][j][k], size_k, 0, 20);
    //            printArr(arr4d[i][j][k], size_k);
    //        }
    //        cout << '\n';
    //    }
    //    cout << '\n';
    //}

    //for (int i = 0;i < size_x;++i) {
    //        for (int j = 0;i < size_y;++j) {
    //            for (int k = 0;i < size_z;++k) {
    //                delete[] arr4d[i][j][k];
    //            }
    //            delete[] arr4d[i][j];
    //        }
    //        delete[] arr4d[i];
    //    }
    //    delete[] arr4d;


    //int*** arr3d = new int** [size_x];

    //for (int i = 0;i < size_x;++i) {
    //    arr3d[i] = new int* [size_y];
    //    for (int j = 0;j < size_y;++j) {
    //        arr3d[i][j] = new int[size_z];
    //        fillArr(arr3d[i][j],size_z, 0, 20);
    //        printArr(arr3d[i][j], size_z);
    //    }
    //    cout << '\n';
    //}

    //for (int i = 0;i < size_x;++i) {
    //    for (int j = 0;i < size_y;++j) {
    //        delete[] arr3d[i][j];
    //    }
    //    delete[] arr3d[i];
    //}
    //delete[] arr3d;

    //int** arr2d = new int* [size_x];

    //for (int i = 0;i < size_x;++i) {
    //    arr2d[i] = new int[size_y];
    //    fillArr(arr2d[i], size_y, 0, 20);
    //    printArr(arr2d[i], size_y);
    //}
    //for (int i = 0;i < size_x;++i) {
    //    delete[] arr2d[i];
    //}
    //delete[] arr2d;
}