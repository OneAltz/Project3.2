#include "Solutions.h"

int main(void)
{
int num = 0, bank_balance = 100, wager = 0, money_back = 0;
srand((unsigned int) time(NULL));
    while  (num != 3)
    {
        printf("Do you want to:\n");
        printf("1. Print The Rules For The Game\n");
        printf("2. Play The Game.\n");
        printf("3. Exit The Game.\n\n");
        scanf("%d", &num);
        if(num == 1)
        {
        print_game_rules ();
        }
        if(num == 2)
        {
            while (num != 3)
            {
            ++index;
            printf("Do you want to:\n");
            printf("1. Print Your Bank Balance\n");
            printf("2. Roll\n");
            printf("3. Cash Out Your Winings\n");
            scanf("%d", &num);
            if(num == 1)
                {
                get_bank_balance (bank_balance);
                }
                if (num == 2)
                {
                wager = get_wager_amount ();
                check_wager_amount (wager, bank_balance);
                int die1_value = roll_die();
                int die2_value = roll_die();
                printf("This Is Your Second Roll %d \n", die1_value);
                printf("This Is Your First Roll %d \n", die2_value);
                int sum_dice = calculate_sum_dice(die1_value, die2_value);
                printf("This Is you Die sum %d \n", sum_dice);
                int win = is_win_loss_or_point(sum_dice);
                printf("Did You Win? %d \n", win);
                if(win == 0)
                {
                    while ((money_back != 0)||(money_back != -1))
                    {
                    int die3_value = roll_die();
                    int die4_value = roll_die();
                    printf("This Is Your Third Roll %d \n", die3_value);
                    printf("This Is Your Forth Roll %d \n", die4_value);
                    int point_value = calculate_sum_dice(die3_value, die4_value);
                    printf("This Is you Die sum %d \n", point_value);
                    money_back = is_point_loss_or_neither (sum_dice, point_value);
                    }
                }
                bank_balance = adjust_bank_balance (bank_balance, wager, win);
                get_bank_balance (bank_balance);
                }
                Chatter_messages_Low_Bank (bank_balance);
                Chatter_messages_High_Bank (bank_balance);
                Chatter_messages_Neutral (bank_balance);
            }
        }

    }
return 0;
}

