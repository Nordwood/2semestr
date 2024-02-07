#include <iostream>

using namespace std;




int findUniqNumb(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool uniq = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                uniq = false;
                break;
            }
        }
        if (uniq) {
            return arr[i];
        }
    }
    return -1;
}


void test_uniqNumb(){
int a[11] = { 1, 1, 3, 3, 5, 5, 7, 7, 9,9,999 };
int s[11] = { 1, 1, 3, 3, 5, 5, 11, 11, 9,9,222 };
int k[11] = { 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6 };

if (findUniqNumb(a, 11) == 999){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (findUniqNumb(s, 11) == 222){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (findUniqNumb(k, 11) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }


}



int main() {
   

test_uniqNumb();

    return 0;
}
