#include <iostream>

using namespace std;
/*Shell sort-Move entries more than one position at a time by h-sorting the array*/
void shellSort(int Arr[],int N){
    int temp;
    int h = 1;
    while (h < N/3){h = (3*h)+1;}
    while (h >= 1)
        for (int i = h; i < N; i++) {
            for (int j = i; j >= h && Arr[j] < Arr[j-h] ; j -= h) {
                temp = Arr[j-h];
                Arr[j-h] = Arr[j];
                Arr[j] = temp;
            }
            h = h/3;
        }
};

int main() {
   int B[] = {10,2,5,8,13,19,25,16,12,17,20,22,11,14,26,23,0,30,27,15,18,31};
   shellSort(B,22);
    for (int i = 0; i < 22; ++i) {
        cout << B[i] <<" ";
    }
    return 0;
}
