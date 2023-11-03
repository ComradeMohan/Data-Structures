#include <stdio.h>
#include <math.h>
#include <string.h>

double binaryFractionToDecimal(char binaryFraction[]) {
    double decimalNumber = 0.0;
    int length = strlen(binaryFraction);
    
    for (int i = 0; i < length; i++) {
        if (binaryFraction[i] == '1') {
            decimalNumber += pow(2, -(i + 1));
        }
    }
    
    return decimalNumber;
}

int main() {
    char binaryFraction[50];
    
    printf("Enter a binary fraction (e.g., 0.1101): ");
    scanf("%s", binaryFraction);
    
    double decimalEquivalent = binaryFractionToDecimal(binaryFraction);
    
    printf("Decimal equivalent: %lf\n", decimalEquivalent);
    
    return 0;
}
