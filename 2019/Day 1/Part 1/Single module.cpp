#include <iostream>
#include <cstdio> /* printf */

int countFuel(float mass)
{
    return (mass / 3) - 2;
};

int main()
{

    std::cout << " ===========INFO===========\n"
              << " Program is counting needed fuel for only 1 module\n"
              << " Nice for pre-dev testing or sm\n"
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

    // Module mass
    int mass = 0;

    std::cout << " Press 'Ctrl + C' to exit\n\n";

    while (true)
    {
        std::cout << " Provide mass: ";
        std::cin >> mass;
        printf(" Needed fuel:  %d\n\n", countFuel(mass));
    };

    return 0;
}