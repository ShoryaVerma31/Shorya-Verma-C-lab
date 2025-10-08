#include <stdio.h>


struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex c1, c2, sum, product;

    
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    
    product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    product.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;

    
    printf("\nFirst complex number: %.2f + %.2fi\n", c1.real, c1.imaginary);
    printf("Second complex number: %.2f + %.2fi\n", c2.real, c2.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Product: %.2f + %.2fi\n", product.real, product.imaginary);

    return 0;
}
