#include<stdio.h>
int main(){
    // int a[11/2];
    //     printf("%u",a);
    //     int x, y;
    //     for (int i = 0; i < 10; i++)
    //         printf("x: %d y: %d\n", x, y);

}

/*In your code, both `x` and `y` are uninitialized local variables. The values they contain are essentially random or garbage values that happen to be in the memory locations assigned to them when 
the program runs.

The reason why `x` consistently shows `0` while `y` shows a seemingly random positive number could be due to how the memory allocation and initialization are handled by the compiler or system.

When a variable is allocated in the stack, the memory might be set to `0` by default (especially in debug mode or with certain compiler settings), resulting in `x` being initialized as `0`. On the 
other hand, `y` happens to be assigned a different memory location with some existing value present, which appears as a seemingly random positive number.

Remember, uninitialized variables in C contain unpredictable values, and their initial values can vary between runs and under different conditions. It's essential to initialize variables explicitly 
before using them to avoid such issues.*/

/**
 * Yes, in Java, uninitialized local variables don't get default values like instance variables do. If you attempt to use a local variable without initializing it, Java will throw a compilation 
 * error, stating that the variable might not have been initialized.

For instance:

```java
public class Example {
    public static void main(String[] args) {
        int x, y;
        System.out.println("x: " + x + " y: " + y); // Compilation error
    }
}
```

Attempting to compile this code will result in an error stating that `x` and `y` might not have been initialized. Unlike in C, where uninitialized local variables might hold garbage values, 
Java enforces explicit initialization before using such variables to avoid potential bugs or unpredictable behavior.
 */