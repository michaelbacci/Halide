#include <Halide.h>
#include <stdio.h>

using namespace Halide;

int main(int argc, char **argv) {
    Func f("f"), g("g"), h("h");
    Var x("x"), y("y");

    f(x) = x;
    g(x) = f(x);
    h(x, y) = g(x);

    g.compute_at(h, y);

    // This makes no sense, because f is only used by g, which is computed at (h, y), which is outside of (h, x).
    f.compute_at(h, x);

    h.realize(10);

    printf("I should not have reached here\n");
    return 0;

}
