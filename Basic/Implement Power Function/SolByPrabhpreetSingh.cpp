#include <iostream>

float power1(float base, int pow){
    float tmp;  
    if(pow == 0)  
        return 1;  
    
    tmp = power1(base, pow / 2);  
    
    if (pow % 2 == 0) {
        return tmp * tmp; 
    }
    else if (pow > 0)
    {  
        return base * tmp * tmp;  
    }  
    else
    {
        return (tmp * tmp) / base;  

    }
}

int main(){
    float base; 
    std::cin >> base;

    int pow; 
    std::cin >> pow;
    
    std::cout << "Answer: " << power1(base, pow) << std::endl;
    return 0;
}
