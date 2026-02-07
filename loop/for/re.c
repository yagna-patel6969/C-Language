#include<stdio.h>
#include<math.h>

int main(){
    int a, p = 0, c, sum = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    int original = a;
    
    // FIRST: Count total digits
    int temp = a;
    while(temp > 0) {
        temp = temp / 10;
        p++;
    }
    printf("Total digits: %d\n", p);
    
    // SECOND: Calculate sum using the fixed digit count
    int b;
    printf("Calculation: ");
    int first = 1;
    
    while(a > 0) {
        b = a % 10;
        
        if(!first) printf(" + ");
        printf("%d^%d", b, p);
        first = 0;
        
        c = pow(b, p);        // Now p is the correct total digit count
        sum = sum + c;
        a = a / 10;
    }
    
    printf(" = %d\n", sum);
    printf("Original number: %d\n", original);
    
    if(sum == original) {
        printf("Given number is armstrong\n");
    }
    else {
        printf("Given number is not armstrong\n");
    }
    
    return 0;
}

/* 
DEMONSTRATION OF THE PROBLEM IN YOUR ORIGINAL CODE:
Let's trace through 153:

Your code does this:
Step 1: b=3, p=0, c=pow(3,0)=1, sum=1, p becomes 1
Step 2: b=5, p=1, c=pow(5,1)=5, sum=6, p becomes 2  
Step 3: b=1, p=2, c=pow(1,2)=1, sum=7, p becomes 3

Final: sum=7, but 153 ≠ 7 → Wrong!

Correct calculation should be:
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
*/