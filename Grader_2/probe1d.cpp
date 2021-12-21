#include "probelib.h"
#include <cstdio>
#include <cmath>

int num;

int main()
{
    int num = probe_init();
    int medium, bottom, top;
    bottom = 0;
    top = num - 1;
    while (true)
    {
        int total = bottom + top;
        medium = floor(total / 2);
        if (bottom > medium) {
            probe_answer(-1);
            break;
        }
        if (probe_check(bottom, medium)) {
            top = medium;
            if (bottom == medium)
                probe_answer(bottom);
        }
        else {
            bottom = medium + 1;
        }
    }
}