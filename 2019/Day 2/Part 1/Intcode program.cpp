#include <iostream>
#include <cstdio> /* printf */

int main()
{
    std::cout << " ==========INFO==========\n"
              << " This program is counts\n"
              << " values of intigers based\n"
              << " on previous intigers\n"
              << " ========================\n\n";
    system("pause");
    std::cout << "\n\n";

    // Sorry for this, I'm still working on file based input
    // Working on files is easier in Python...
    //
    // Input data
    int data[] =
        {
            1,
            0,
            0,
            3,
            1,
            1,
            2,
            3,
            1,
            3,
            4,
            3,
            1,
            5,
            0,
            3,
            2,
            1,
            9,
            19,
            1,
            19,
            5,
            23,
            2,
            6,
            23,
            27,
            1,
            6,
            27,
            31,
            2,
            31,
            9,
            35,
            1,
            35,
            6,
            39,
            1,
            10,
            39,
            43,
            2,
            9,
            43,
            47,
            1,
            5,
            47,
            51,
            2,
            51,
            6,
            55,
            1,
            5,
            55,
            59,
            2,
            13,
            59,
            63,
            1,
            63,
            5,
            67,
            2,
            67,
            13,
            71,
            1,
            71,
            9,
            75,
            1,
            75,
            6,
            79,
            2,
            79,
            6,
            83,
            1,
            83,
            5,
            87,
            2,
            87,
            9,
            91,
            2,
            9,
            91,
            95,
            1,
            5,
            95,
            99,
            2,
            99,
            13,
            103,
            1,
            103,
            5,
            107,
            1,
            2,
            107,
            111,
            1,
            111,
            5,
            0,
            99,
            2,
            14,
            0,
            0};
    //
    typedef unsigned short small;

    // Not sure about it, but it works...
    // sizeof(data) / sizeof(*data)

    for (small i = 0; i < (sizeof(data) / sizeof(*data)); i++)
    {
        int result = 0;

        printf(" Pos:   %d\n", i);
        printf("  Value: %d\n", data[i]);

        switch (data[i])
        {
        case 1:

            // Adding two numbers from positions:
            // - data[data[i+1]]
            // And:
            // - data[data[i+2]]
            // Then storing it at position:
            // - data[data[i+3]]

            std::cout << " Case 1 - ading 2 values\n";

            //  [x]: y
            //   ^   ^
            //   |  Intiger value
            //  Intiger position

            for (small j = 1; j <= 2; j++)
            {
                printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                result += data[data[i + j]];
            };

            // Stroing data to next intiger
            data[data[i + 3]] = result;

            break;

        case 2:

            // Multiplying two number
            // (Like above)

            std::cout << " Case 2 - multiplying 2 values\n";

            // Result must be 1, because 1234*0 is still 0
            result = 1;

            // See above for explanation of this 'for'

            for (small j = 1; j <= 2; j++)
            {
                printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                result *= data[data[i + j]];
            };

            data[data[i + 3]] = result;

            break;

        case 99:
            // Halt program

            std::cout << " Case 99 - halting the program\n";

            // Forcing iterator to be out of range
            i = (sizeof(data) / sizeof(*data)) + 1;
            break;

        default:
            // Just don't do anything else
            // if no 'opcode' found

            std::cout << " Nothing to do\n";
            break;
        }; /* switch */
    };     /* for */

    std::cout << "\n\n==========Final=====\n\n";
    for (small i = 0; i < (sizeof(data) / sizeof(*data)); i++)
    {
        printf("%d, ", data[i]);
    };

    std::cout << "\n\n";
    system("pause");
    return 0;
}; /* main */