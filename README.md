### Commands ###

To compile:

    cmake -H. -B_build  # (eventually add -G <your-generator>)
    cmake --build _build

To run:

    ./_build/example


### Result ###

    HIDING STATIC METHOD `getInstance()`:

    called Analytics::getInstance()
    called Analytics::Analytics()
    created 1st instance: 0x7fcde0402980
    called Singleton<>::getInstance
    called Analytics::Analytics()
    created 2nd instance: 0x7fcde0402990

    =========================================

    HIDING INSTANCE METHOD `getThis()` (1):

    called Analytics::getThis()
    this1a = 0x7fcde0402980
    called Singleton<>::getThis()
    this1b = 0x7fcde0402980

    =========================================

    HIDING INSTANCE METHOD `getThis()` (2):

    called Analytics::getThis()
    this2a = 0x7fcde0402990
    called Singleton<>::getThis()
    this2b = 0x7fcde0402990