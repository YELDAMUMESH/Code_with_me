#include <stdio.h>


// Function to print binary of a number
void print_binary(unsigned int n) {
    printf("Size of unsigned int %u in bytes: %zu\n", n, sizeof(n));
    printf("Size of %zu bytes in bits: %zu\n", sizeof(n), sizeof(n) * 8);

    printf("Binary: ");
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0) printf(" "); // spacing for readability
    }
    printf("\n");
}


// Function to perform bitwise XOR and print binary
void binary_xor(unsigned int num1, unsigned int num2) {
    unsigned int XOR = num1 ^ num2;

    printf("===============================================\n");
    printf("Bitwise OR of %u ^ %u = %u\n", num1, num2, XOR);
    print_binary(XOR);

    return;
}

//Function to perform NOT operation and print in binary
void binary_not(unsigned int num1, unsigned int num2)
{
    unsigned int num01 = ~num1, num02 = ~num2;

    printf("===============================================\n");
    printf("NOT of %u = %u\n", num1, num01);
    print_binary(num01);

    printf("===============================================\n");
    printf("NOT of %u = %u\n", num2, num02);
    print_binary(num02);

    return;
}



// Function to perform left shift (<<) and print binary
void binary_leftShift(unsigned int *p,unsigned int *q) {
    unsigned int i;
    printf("===============================================\n");
    printf("Enter the left shift number: ");
    scanf("%d",&i);
    unsigned int shift1 = *p<<i;
    unsigned int shift2 = *q<<i;
    printf("Bitwise left shift of %u << %u= %u\n", *p,i, shift1);
    print_binary(shift1);
    printf("===============================================\n");
    printf("Bitwise left shift of %u << %u= %u\n", *q,i, shift2);
    print_binary(shift2);

    return ;
}


// Function to perform right shift (>>) and print binary
void binary_rightShift(unsigned int *p,unsigned int *q) {
    unsigned int i;
    printf("===============================================\n");
    printf("Enter the right shift number: ");
    scanf("%d",&i);
    unsigned int shift1 = *p>>i;
    unsigned int shift2 = *q>>i;
    printf("Bitwise right shift of %u >> %u= %u\n", *p,i, shift1);
    print_binary(shift1);
    printf("===============================================\n");
    printf("Bitwise right shift of %u >> %u= %u\n", *q,i, shift2);
    print_binary(shift2);

    return ;
}



// Function to perform bitwise OR and print binary
void binary_or(unsigned int num1, unsigned int num2) {
    unsigned int OR = num1 | num2;

    printf("===============================================\n");
    printf("Bitwise OR of %u | %u = %u\n", num1, num2, OR);
    print_binary(OR);

    return;
}


// Function to perform bitwise AND and print binary
void binary_add(unsigned int num1, unsigned int num2) {
    unsigned int And = num1 & num2;

    printf("===============================================\n");
    printf("Bitwise AND of %u & %u = %u\n", num1, num2, And);
    print_binary(And);

    return;
}

int main() {
    unsigned int num1, num2;

    printf("Enter two numbers: ");
    scanf("%u %u", &num1, &num2);

    print_binary(num1);
    print_binary(num2);

    binary_add(num1, num2);
    binary_or(num1,num2);
    binary_rightShift(&num1,&num2);
    binary_leftShift(&num1,&num2);
    binary_not(num1,num2);
    binary_xor(num1,num2);

    
    


    return 0;
}

