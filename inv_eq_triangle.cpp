#include <iostream>

int main() {
    int n;
    std::cin >> n;
   
    for (int i = 0; i < n; i++) {
        // space  
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        
        // star
        for (int j = 0; j < 2 * n- (2*i+1); j++) {
            std::cout << "*";
        }
        
        // space
        for (int j = 0; j <i; j++) {
            std::cout << " ";
        }
        
        std::cout << '\n';
    }
    
    return 0;
}
