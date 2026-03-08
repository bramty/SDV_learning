#include "io.h"

int main(void) {
    int x{readNumbers()};
    int y{readNumbers()};

    writeAnswer(x+y);

    return 0;
}
