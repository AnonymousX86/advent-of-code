#include <iostream>
#include <cstdio> /* printf */

// Amount of additional fuel for one module
int finalResult = 0;

// Final amout of fuel for all of
int neededFuel = 0;

int singleModule(float mass)
{
    return (mass / 3) - 2;
};

void countFuel(float mass)
{
    int result = ((mass / 3) - 2);
    if (result > 0)
    {
        finalResult += result;
        countFuel(result);
    }
    else
    {
        return;
    };
};

int main()
{

    std::cout << " ===========INFO===========\n"
              << " Program counts needed fuel for each module"
              << " and for all modules,\n"
              << " additional fuel for each module\n"
              << " and for all modules\n"
              << " ==========================\n\n";
    system("pause");
    std::cout << "\n";

    int data[] = {
        127117,
        121199,
        80494,
        83466,
        125933,
        80813,
        137787,
        122687,
        123256,
        128013,
        90525,
        116909,
        95227,
        86368,
        96748,
        131600,
        101434,
        98226,
        88614,
        76871,
        65553,
        141639,
        55075,
        133494,
        149211,
        51775,
        139337,
        94542,
        76351,
        100791,
        107426,
        91462,
        78691,
        70162,
        95006,
        101280,
        59398,
        77396,
        66276,
        100207,
        67200,
        58985,
        64763,
        125001,
        149661,
        129085,
        114919,
        77844,
        108209,
        121125,
        54662,
        103292,
        112164,
        121118,
        71847,
        130912,
        81068,
        137253,
        56703,
        107683,
        108181,
        142507,
        112673,
        97242,
        50195,
        123852,
        130090,
        144719,
        133862,
        73461,
        81374,
        56574,
        147026,
        140613,
        148938,
        123768,
        64967,
        106133,
        123961,
        87190,
        71348,
        148830,
        87261,
        58942,
        132417,
        101993,
        94510,
        138358,
        72539,
        80356,
        74249,
        103109,
        135176,
        128635,
        116062,
        82975,
        135814,
        62702,
        80696,
        95607};

    typedef unsigned int small;

    for (small i = 0; i < 100; i++)
    {
        finalResult = 0;
        countFuel(data[i]);
        neededFuel += finalResult;
        printf("\n%d ----------\n", i + 1);
        printf(" Mass      %d\n", data[i]);
        printf(" Fuel      %d\n", singleModule(data[i]));
        printf(" Add. fuel %d\n", finalResult);
        printf(" Sum       %d\n", neededFuel);
    };

    std::cout << "\n==End==\n";
    system("pause");
    return 0;
}