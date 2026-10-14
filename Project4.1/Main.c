#include "Solutions.h"

int main(void)
{
int exit = 0, num = 0, print = 0, index;

    for (num != 3)
    {
        printf("Do you want to:\n");
        printf("1. Print The Rules For The Game\n");
        printf("2. Play The Game.\n");
        printf("3. Exit The Game.\n");
        
        if(num = 1)
        {
        void print_game_rules (void);
        }
        if(num = 2)
        {
        for (num != 3)
            {
            ++index;
            printf("Do you want to:\n");
            printf("1. Print Your Bank Balance");
            printf("2. Roll");
            printf("3. Cash Out Your Winings");
            if(num = 1)
            {
            double get_bank_balance (void);
            }
            if (num = 2)
            {
                double get_bank_balance (void);
                double get_wager_amount (void);
                int check_wager_amount (double wager, double balance);
                int die1_value = roll_die(void);
                int die2_value = roll_die(void);
                int sum_dice = calculate_sum_dice(die1_value, die2_value);
                int win = is_win_loss_or_point(sum_dice);
                int is_point_loss_or_neither (sum_dice, point_value);
                double adjust_bank_balance (bank_balance, wager_amount, add_or_subtract);
            }



            }
        }
        if(num = 3)
        {
        printf("You are about to exit the Game");
        return 3;
    }





return 0;
}


