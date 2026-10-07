//This Is the Funtion Prototype For No.1
void print_game_rules (void)
{
    printf("Welcome to the game! Here are the rules:\n");
    printf("1. You start with a bank balance.\n");
    printf("2. You place a wager, from your bank balance starting at 100$.\n");
    printf("3. You roll two dice.\n");
    printf("4. The sum of the dice determines if you win, lose, or set a point.\n");
    return 0;
}
//This Is the Funtion Prototype For No.2
double get_bank_balance (void)
{
    int bank_balance = 100;
    printf("This is your bank balance %d\n", bank_balance);
    return bank_balance;
}
//This Is the Funtion Prototype For No.3
double get_wager_amount (void)
{
    printf("Enter your wager amount: ");
    double wager;
    scanf("%lf", &wager);
    return wager;
    return 0;
}
//This Is the Funtion Prototype For No.4
int check_wager_amount (double wager, double balance) 
{
    do
    {
        if (wager > balance) {
            printf("Error: Wager amount cannot exceed your bank balance.\n");
            return -1;
        }
        if (wager == balance){
            printf("Aren't you a risky boy!\n");
            return -1;
        }
        if (wager < 0){
            printf("Error: You Have to put a wager.\n");
            return -1;
        }
        return 0;
    } while (wager <= balance);
    
}
//This Is the Funtion Prototype For No.5
int roll_die (void) 
{
    int die_value = (rand() % 6) + 1;
    return die_value;
}
//This Is the Funtion Prototype For No.6
int calculate_sum_dice(int die1_value, int die2_value) 
{
    return die1_value + die2_value;
return 0;
}
//This Is the Funtion Prototype For No.7
int is_win_loss_or_point (int sum_dice)
{
if (sum_dice == 7 || sum_dice == 11) {
    return 1; // Win
} else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
    return -1; // Loss
} else {
    return 0; // Point
}
    return 0; // Default return, should not be reached
}
//This Is the Funtion Prototype For No.8
int is_point_loss_or_neither (int sum_dice, int point_value)
{
    if (sum_dice == point_value) {
        return 1; // Point
    } else if (sum_dice == 7) {
        return 0; // Loss
    } else {
        return -1; // Neither
    }
return 0;
}
//Is the Funtion Prototype For No.9
double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract)
{
    if (add_or_subtract >= 1) {
        bank_balance += wager_amount;
    } else if (add_or_subtract <= -1) {
        bank_balance -= wager_amount;
    }
    return bank_balance;
return 0;
}

//Is the Funtion Prototype For No.10
double double_or_nothing (double bank_balance, double wager_amount, int add_or_subtract)
{
    return adjust_bank_balance(bank_balance, wager_amount, add_or_subtract);
}
//Is the Funtion Prototype For No.11
void save_game_results (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)
{
return 0;
}
//Is the Funtion Prototype For No.12
void Chatter_Messages_Win_Loss (int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)
{
return 0;
}
//Is the Funtion Prototype For No.13
void Chatter_messages_Low_Bank (double current_bank_balance)
{
return 0;
}
//Is the Funtion Prototype For No.14
void Chatter_messages_High_Bank (double current_bank_balance)
{
return 0;
}
//Is the Funtion Prototype For No.15
void Chatter_messages_Neutral (double current_bank_balance)
{
return 0;
}