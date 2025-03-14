#include <iostream>

// Function to perform a sample test
bool sampleTest() {
    int a = 5, b = 10;
    return (a + b == 15);  // Test condition
}

int main() {
    std::cout << "🚀 Application Build Successful!" << std::endl;

    // Running a simple test case
    if (sampleTest()) {
        std::cout << "✅ Test Passed!" << std::endl;
    } else {
        std::cerr << "❌ Test Failed!" << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "🚀 Deploying Application..." << std::endl;
    std::cout << "✅ Deployment Successful!" << std::endl;

    return 0; // Successful execution
}
