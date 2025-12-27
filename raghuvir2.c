#include <stdio.h>

int main()
{
    int P, N;
    float D, total, discount, final_amount;

    scanf("%d %d %f", &P, &N, &D);

    total = P * N;
    discount = total * D / 100;
    final_amount = total - discount;

    printf("*** DIWALI FIREWORKS ***\n");
    printf("Item Price:\t%d rupees Quantity: %d\n", P, N);
    printf("Discount: %.2f%%\n", D);
    printf("Total:\t%.2f rupees\n", final_amount);
    printf("\a");

    return 0;
}
