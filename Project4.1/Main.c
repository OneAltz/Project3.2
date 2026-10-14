#include "Solutions.h"

int main(void)
{
int exit = 0, num = 0, print = 0, index = 0, point_value = 0, add_or_subtract = 0, bank_balance = 100, wager = 0;

    while  (num != 3)
    {
        printf("Do you want to:\n");
        printf("1. Print The Rules For The Game\n");
        printf("2. Play The Game.\n");
        printf("3. Exit The Game.\n");
        scanf("%d", &num);
        if(num == 1)
        {
        void print_game_rules (void);
        }
        if(num == 2)
        {
            while (num != 3)
            {
            ++index;
            printf("Do you want to:\n");
            printf("1. Print Your Bank Balance");
            printf("2. Roll");
            printf("3. Cash Out Your Winings");
            scanf("%d", &num);
            if(num == 1)
                {
                get_bank_balance (bank_balance);
                }
                if (num == 2)
                {
                get_wager_amount ();
                check_wager_amount (wager, bank_balance);
                int die1_value = roll_die();
                int die2_value = roll_die();
                int sum_dice = calculate_sum_dice(die1_value, die2_value);
                int win = is_win_loss_or_point(sum_dice);
                is_point_loss_or_neither (sum_dice, point_value);
                adjust_bank_balance (bank_balance, wager, add_or_subtract);
                }
            }
        }
        if(num == 3)
        {
        printf("You are about to exit the Game");
        return 3;
        }

    }
return 0;
}

