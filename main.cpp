#include <iostream>

void printArray(int array[][2], const int ARRAY_ROWS, std::string arrayTag)
{
    std::cout << arrayTag << ":\n";
    for (int i = 0; i < ARRAY_ROWS; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int main() {

    const int TABLE_SEATS_IN_ROW = 6;
    const int TABLE_ROWS = 2;

    int dishes[TABLE_SEATS_IN_ROW][TABLE_ROWS];
    int cutlery[TABLE_SEATS_IN_ROW][TABLE_ROWS];
    int chairs[TABLE_SEATS_IN_ROW][TABLE_ROWS];

    for (int i = 0; i < TABLE_SEATS_IN_ROW; i++)
    {
        for (int j = 0; j < TABLE_ROWS; j++)
        {
            dishes[i][j] = 3;
            cutlery[i][j] = 2;
            chairs[i][j] = 1;
            if (i == 0)
            {
                dishes[i][j]++;
                cutlery[i][j]++;
            }
        }
    }

    printArray(cutlery, TABLE_SEATS_IN_ROW, "Cutlery");
    printArray(chairs, TABLE_SEATS_IN_ROW, "Chairs");
    printArray(dishes, TABLE_SEATS_IN_ROW, "Dishes");

    std::cout << "\n---After some time...---\n\n";

    chairs[4][0]++; //Woman with child on seat 5 in row 1
    cutlery[2][1]--; //Spoon is stolen on seat 3 in row 2
    cutlery[0][0]--; //VIP is giving his spoon
    cutlery[2][1]++; //VIP spoon is received by table seat 3 in row 2
    dishes[0][0]--; //Plate was removed from VIP seat 1 in row 1

    printArray(cutlery, TABLE_SEATS_IN_ROW, "Cutlery");
    printArray(chairs, TABLE_SEATS_IN_ROW, "Chairs");
    printArray(dishes, TABLE_SEATS_IN_ROW, "Dishes");

    return 0;
}
