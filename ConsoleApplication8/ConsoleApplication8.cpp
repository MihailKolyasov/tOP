/*#include <iostream>
#include "sha256.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    string input = "grape";
    string output1 = sha256(input);

    cout << "sha256('" << input << "'):" << output1 << endl;
    return 0;
}


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

using namespace std;

unsigned CircularShift(int bits, unsigned word)
{
    return ((word << bits) & 0xFFFFFFFF) | ((word & 0xFFFFFFFF) >> (32 - bits));
}

int main(void)
{
    string mess;
    cin >> mess;
    unsigned int lm = mess.length();
    unsigned int lmb = lm * 8;
    unsigned char* messc;
    messc = (unsigned char*)malloc((sizeof(unsigned char)) * 64);

    for (unsigned short int i = 0; i < 64; i++)
    {
        messc[i] = char(0x00);
    }
    for (int i = 0; i < mess.length(); i++)
    {
        messc[i] = mess[i];
    }
    messc[lm] = (unsigned char)128;
    messc[56] = (lmb >> 24) & 0xFF;
    messc[57] = (lmb >> 16) & 0xFF;
    messc[58] = (lmb >> 8) & 0xFF;
    // messc[59] = (lmb) & 0xFF;
    messc[60] = (lmb >> 24) & 0xFF;
    messc[61] = (lmb >> 16) & 0xFF;
    messc[62] = (lmb >> 8) & 0xFF;
    messc[63] = (lmb) & 0xFF;
    for (int i = 0; i < 64; i++)
    {
        cout << hex << (int)messc[i] << " ";
    }
    unsigned* H;
    H = (unsigned*)malloc(5 * sizeof(unsigned));
    H[0] = 0x67452301;
    H[1] = 0xEFCDAB89;
    H[2] = 0x98BADCFE;
    H[3] = 0x10325476;
    H[4] = 0xC3D2E1F0;
    const unsigned K[] = { 0x5A827999,0x6ED9EBA1,0x8F1BBCDC,0xCA62C1D6 };
    int         t;
    unsigned    temp;
    unsigned* W;
    unsigned    A, B, C, D, E;
    W = (unsigned*)malloc(80 * sizeof(unsigned));
    unsigned char* messh;
    messh = (unsigned char*)malloc(64 * sizeof(unsigned char));
    int k;
    for (t = 0; t < 16; t++)
    {
        W[t] = ((unsigned)messc[t * 4]) << 24; ;
        W[t] |= ((unsigned)messc[t * 4 + 1]) << 16;
        W[t] |= ((unsigned)messc[t * 4 + 2]) << 8;
        W[t] |= ((unsigned)messc[t * 4 + 3]);
    }
    for (t = 16; t < 80; t++)
    {
        W[t] = CircularShift(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
    }

    A = H[0];
    B = H[1];
    C = H[2];
    D = H[3];
    E = H[4];

    for (t = 0; t < 20; t++)
    {
        temp = CircularShift(5, A) + ((B & C) | ((~B) & D)) + E + W[t] + K[0];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 20; t < 40; t++)
    {
        temp = CircularShift(5, A) + (B ^ C ^ D) + E + W[t] + K[1];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 40; t < 60; t++)
    {
        temp = CircularShift(5, A) +
            ((B & C) | (B & D) | (C & D)) + E + W[t] + K[2];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 60; t < 80; t++)
    {
        temp = CircularShift(5, A) + (B ^ C ^ D) + E + W[t] + K[3];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = CircularShift(30, B);
        B = A;
        A = temp;
    }

    H[0] = (H[0] + A) & 0xFFFFFFFF;
    H[1] = (H[1] + B) & 0xFFFFFFFF;
    H[2] = (H[2] + C) & 0xFFFFFFFF;
    H[3] = (H[3] + D) & 0xFFFFFFFF;
    H[4] = (H[4] + E) & 0xFFFFFFFF;

    cout << "\nTHIS IS SHHHHHAAAAAAAAAAA\n";
    for (int i = 0; i < 5; i++)
    {
        cout << hex << H[i] << " ";
    }

    //Message_Block_Index = 0;


}
*/
#include <iostream>
#include <cmath>
using namespace std;



int main(int argc, char* argv[])
{
    
    long long int t = pow(2, 30);
    long long int f = t * sqrt(3);

    cout << hex << f << endl;
    return 0;
}