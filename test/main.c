#define CTEST_MAIN


#include <board.h>
#include <board_print_plain.h>

#include <ctest.h>



CTEST(PAWNMOVE, Correct) {
InitBoard();
    int result = moves("d2-d3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(PAWNMOVE, Incorrect) {
InitBoard();
    int result = moves("b2-b7");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(KNIGHTMOVE, Correct) {
InitBoard();
    int result = moves("b1-a3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(KNIGHTMOVE, Incorrect) {
InitBoard();
    int result = moves("g1-h5");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(BISHOPMOVE, Correct) {
InitBoard();
    int result = moves("c1-e3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(BISHOPMOVE, Incorrect) {
InitBoard();
    int result = moves("c1-c3");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(QUEENMOVE, Correct) {
InitBoard();
    int result = moves("d1-d3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(QUEENMOVE, Incorrect) {
InitBoard();
    int result = moves("d1-e3");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}



int main(int argc, const char** argv) {
    
   return ctest_main(argc, argv);
   
}
