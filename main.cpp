#include <iostream>
#include <string>


int main()
{
   int x{10};
   int y{8};
   std::cout << "y = " << y << std::endl;
   std::cout << "x = " << x << std::endl;
   std::cout << "swapping..." << std::endl;

   int temp{0};

   temp = x;
   x = y;
   y = temp;
   std::cout << "y: " << y << std::endl;
   std::cout << "x: " << x << std::endl;
    
    
}



