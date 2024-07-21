#include <iostream>
using namespace std;
int main()
{
    int Rs, r100, h, r50, f, r20, t, r10, d, r1, r;
    cout << "Enter the Amount : ";
    cin >> Rs;
    
    while ( Rs != 0 ){
        if ( Rs >= 100 ){
        h = Rs / 100;
        r100 = Rs % 100;
        cout << "100 Rs notes = " << h << endl;
        Rs = Rs - h*100;
    }
    else if ( r100 >= 50 ) {
        f = r100 / 50;
        r50 = r100 % 50;
        cout << "50 Rs notes = " << f << endl;
        Rs = Rs - f*50;
    }
    else if ( r50 >= 20 ) {
        t = r50 / 20;
        r20 = r50 % 20;
        cout << "20 Rs notes = " << t << endl;
        Rs = Rs - t*20;
    }
    else if ( r20 >= 10 ) {
        d = r20 / 10;
        r10 = r20 % 10;
        cout << "10 Rs notes = " << d << endl;
        Rs = Rs - d*10;
    }
    else if ( r10 >= 1 ) {
        r = r10 / 1;
        cout << "100 Rs notes = " << r << endl;
        Rs = Rs - r*1;
    }
    }

    return 0;
}