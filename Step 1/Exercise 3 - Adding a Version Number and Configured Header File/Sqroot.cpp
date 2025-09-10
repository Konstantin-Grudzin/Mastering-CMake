#include<iostream>
#include <cmath>
#include "Sqroot.h"

int main(int argc,char* argv[])
{
    std::cout<<Tutorial_VERSION_MAJOR<<"."<<Tutorial_VERSION_MINOR<<std::endl;
    if(argc>1)
    {
        double x = std::stod(argv[1]);
        std::cout<<std::sqrt(x)<<std::endl;
    }
}