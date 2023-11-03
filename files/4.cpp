
#include <stdio.h>
#include <math.h>

int binaryToOctal(long long binaryNumber) {
    int octalNumber = 0, decimalNumber = 0, i = 0;
    
    // Convert binary to decimal
    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }
    
    i = 1;
    
    // Convert decimal to octal
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    
    return octalNumber;
}

int main() {
    long long binaryNumber;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    
    int octalNumber = binaryToOctal(binaryNumber);
    
    printf("Octal equivalent: %d\n", octalNumber);
    
    return 0;
}
