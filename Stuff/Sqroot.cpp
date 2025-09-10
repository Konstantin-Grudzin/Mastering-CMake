#include<iostream>
#include <cmath>

int main(int argc,char* argv[])
{
    if(argc>1)
    {
        double x = std::stoi(argv[1]);
        std::cout<<std::sqrt(x)<<std::endl;
    }
}