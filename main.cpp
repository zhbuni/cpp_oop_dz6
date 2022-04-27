#include<iostream>
#include "complex.h"

void bubble_sort(int* arr, int size){
    for(int i = 0;i < size - 1;++i){
        for(int j = i; j < size - 1;++j){
            if (arr[i] > arr[j + 1]){
                int t = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}


void bubble_sort(float* arr, int size){
    for(int i = 0;i < size - 1;++i){
        for(int j = i; j < size - 1;++j){
            if (arr[i] > arr[j + 1]){
                float t = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void bubble_sort(double* arr, int size){
    for(int i = 0;i < size - 1;++i){
        for(int j = i; j < size - 1;++j){
            if (arr[i] > arr[j + 1]){
                double t = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void bubble_sort(Complex* arr, int size){
    for(int i = 0;i < size - 1;++i){
        for(int j = i; j < size - 1;++j){
            if (arr[i].module() > arr[j + 1].module()){
                Complex t = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}


int main(){
    int arr[12] = {1, 6, 1, 8, 5, 9, 3, 9, 2, 11, 1, 0};
    for(int el: arr) std::cout << el << ' ';
    std::cout << '\n';
    bubble_sort(arr, 12);
    for(int el: arr) std::cout << el << ' ';
    std::cout << '\n' << '\n';
    float arr1[12] = {1.1, 6.5, 1.1, 8.8, 5.7, 9.44, 3.22, 9.11, 2.98, 11.45, 1.76, 0.44};
    for(float el: arr1) std::cout << el << ' ';
    std::cout << '\n';
    bubble_sort(arr1, 12);
    for(float el: arr1) std::cout << el << ' ';
    std::cout << '\n' << '\n';

}