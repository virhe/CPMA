#include <stdio.h>

#define PI 3.14f
#define MULTIPLIER (4.f / 3.f)

int main(void) {
    int radius = 0;
    scanf("%d", &radius);

    float volume = MULTIPLIER * PI * radius * radius * radius;
    printf("%f\n", volume);

    return 0;
}