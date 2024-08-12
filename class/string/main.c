#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "test";
    char str2[] = "Test";

    int result = strcmpi(str1, str2);

    printf("Comparison result: %d\n", result);

    if (result == 0) {
        printf("Strings are identical.\n");
    } else if (result > 0) {
        printf("'%s' is greater than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is less than '%s'.\n", str1, str2);
    }

    return 0;
}
