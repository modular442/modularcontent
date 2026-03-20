#include <iostream>

#ifdef __linux__
int main() {
    std::cout << "Linux is shit" << std::endl;
    return 0;
}
int main() {
    std::cout << "Windows is shit" << std::endl;
    return 0;
}
#endif