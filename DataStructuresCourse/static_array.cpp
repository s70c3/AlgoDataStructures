//
// Created by Mari Rum on 14.02.2023.
//

#include <iostream>

int main(void)
{
    using namespace std;
    //task 1. regular creating.
    int ar[15];
    for (int i=0; i<15; i++) {
        ar[i]=-1;
    }
    ar[4] = 100;

    //task 2. chars and moving in array;
    char ar[7];
    char start = 'a';
    for (int i=0; i<7; i++) {
        ar[i] = start;
        start++;
    }
    for (int i=7; i>2; i--) {
        ar[i] = ar[i-1];
    }
    ar[2]='#';
    //task 3. copying arrays;
    char str_1[] = "Structures data";

    char str_2[20];
    for (int i=0; i<20; i++) {
        str_2[i] = str_1[i];
    }

    //task 4. sizeof
    int ar[] = {5, 6, 2, -1, 9, 4};
    int bytes_ar = sizeof(ar);

    int size_ar = sizeof(ar)/sizeof(int);

    //task 5. calculating functions from non 0 value as start.
    int func[17];
    for (int i=4; i<21; i++) {
        func[i-4] = 2*i-5;
    }
    //task 6
    short digits[] = {5, -4, 3, 10, 2, 7, 9, 2};
    for (int i=2; i<8; i++){
        digits[i] = digits[i+1];
    }
    //task 7.
    short ar[10] = {5, -4, 3, 10, 2, 7, 9, 2};
    for (int i=10; i>4; i--) {
        ar[i] = ar[i-2];
    }
    ar[3]=101;
    ar[4]=102;

    //tsk 8. vector.
    int vector3D[3] = {15, 4, -5};
    //I had to use loop here, had I? No way...
    int norm2 = vector3D[0]*vector3D[0] + vector3D[1]*vector3D[1] + vector3D[2]*vector3D[2];
    cout<<norm2;

    //task 9. avg.
    double m_avr = 0;
    char marks[] = {5, 4, 2, 2, 2, 3};
    for (int i=0; i<6; i++) {
        m_avr +=marks[i];
    }
    m_avr /= 6;

    //task 10.  scalar multiplication. ok, I'll use loop if you really want it.
    int v1[4] = {2, -1, 4, 3};
    int v2[4] = {5, 4, 7, -1};

    int v_res = 0;

    for(int i=0; i<4; i++) {
        v_res += v1[i]*v2[i];
    }
    return 0;
}