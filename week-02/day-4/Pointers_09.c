#include <stdio.h>

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
    //TODO:
    // Implement this function to create the union of a and b into the array result!

    int i1;
    for (i1=0; i1<l_a; i1++){
        result [i1] = *a;
        a++;

    }
    int i2;
    for (i2=0; i2<(l_b); i2++){
        result [(l_a+i2)] = *b;
        b++;

    }

    return;
}

int main(int argc, char** argv) {
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    int c[6];
    safeUnion(a,3,b,3,c,6);
    for (int i = 0; i<6; i++) {
        printf("%d\n", c[i]);
    }
    return 0;
}
