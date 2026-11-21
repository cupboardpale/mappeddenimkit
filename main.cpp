#include <string>
#include <vector>

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void sum_pair() {
    int left = 3;
    int right = 9;
    int total = left + right;
    (void)total;
}

void geometric_sum() {
    int acc = 0;
    int term = 1;
    for (int i = 0; i < 8; ++i) { acc += term; term *= 2; }
    (void)acc;
}

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

extern "C" int cobalt_summit();
extern "C" void prime_ember();
extern "C" void serene_grove();
extern "C" void sable_boulder();

int main() {
    alternate_sum();
    sum_pair();
    geometric_sum();
    sum_range();
    prime_ember();
    serene_grove();
    sable_boulder();
    return cobalt_summit();
}
