#include <stdio.h>

#define PI 3.14f
#define MULTIPLIER (4.f / 3.f)

int main(void) {
    float volume = MULTIPLIER * PI * 10 * 10 * 10;
    printf("%f\n", volume);

    return 0;
}