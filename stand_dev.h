#include<stdint.h>
#ifndef STANDART_DEV
#define STANDART_DEV
class standartDev
{
public:
    int N;//400
    int8_t* xPr;
    int j;
    long accumD;
    float  preNorm;
    standartDev();
    float operator()(int);
};



class  frBuHp2
{
public:
    float v[3];
    float operator()(float );
};


int threshB(int ,int );


class lowPassFr
{
private:
    float v[5];
public:
    float operator()(float);
};


class lowPassFr2
{
private:
    float v[5];
public:
    float operator()(float);
};

class matchedFr//  matched filter
{
public:
    int MFN;
    float weight;
    float *a;
    float *x, sum;
    matchedFr();
    float operator()(float);
};

class integrator
{
public:
    int cnt;
    float k;
    long buf;
    long operator()(int);
};

class WillisonAmp
{
public:
    int N;//400
    int8_t* xPr;
    int j;
    long accumD;
    WillisonAmp();
    float operator()(int y);
};


class featureExtr1
{
public:
    integrator IR;
    standartDev STD;
    lowPassFr2 LPF2;
    matchedFr MF;
    WillisonAmp WA;
    float operator()(int8_t);
};
#endif
