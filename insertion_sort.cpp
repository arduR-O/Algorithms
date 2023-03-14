#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {12,2,45,223,21,4,12};
    int siz = sizeof(arr)/sizeof(int);
    for (int i = 1; i < siz; i++){
        for (int j = i; j>0 && arr[j-1]>arr[j]; j--){
            /*
            so i continuously grows upto the index of last element every loop. j works it's way down from
            i to 0 in each loop, so we access the array in reverse, one element extra in each loop
            now, we want our array to be in the descending order, so we run the inner loop till it encounters
            an index where the next index (to the left) is lesser than the given index, at this point it stops.
            you see since we continuously grow from 0 to last index (in form of i), it is always ensured that
            the array is sorted upto the current value of i, in each iteration we take access to one additional
            element and then swap it's way to lower indexes until it's on the right position, that's how this
            works!!

            {12,3,22,4}

            i=1
            j=1-0
            {3,12,22,4} 

            i=2
            j=2-0
            {3,12,22,4}

            //observe how the loop upto i is sorted already, we just have to fit in the new element

            i=3
            j=3-0
            {3,12,4,22}
            {3,4,12,22}
            sorted!!
            */
            
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
    for (int i : arr){
        cout<< i <<" ";
    }
    


}