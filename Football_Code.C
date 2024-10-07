#include <stdio.h>
int football(int user_input);
int scoring(int user_input);

int main() {
    
    int user_input;
    
    printf("Enter 0 or 1 to STOP");
    printf("\n");
    printf("Enter a football score: ");
    scanf("%d", &user_input);
    printf("\n");
    
    if (user_input <= 1){
        return 0;
    }
    else if (user_input >= 1){
        football(user_input);
    }
    else{
        printf("Not a valid input.");
    }
    
    return 0;
}

int football(int user_input){
    printf("Possible combinations if score is %d", user_input);
    printf("\n");
    scoring(user_input);
    main();
}

int safety(int number, int permutation, int TD_2, int TD_1, int TD, int FG, int SAFETY){ //Safety = 2
    int div_num = number / 2; //How many there are
    int mod_num = number % 2; //The remainder
    static int nums[7]; //Makes an array so I can return said array in function
    if (mod_num = 0){
        permutation ++;
    }
    nums[0] = number;
    nums[1] = permutation;
    nums[2] = TD_2;
    nums[3] = TD_1;
    nums[4] = TD;
    nums[5] = FG;
    nums[6] = SAFETY;
    return nums;
}

int fg(int number, int permutation, int TD_2, int TD_1, int TD, int FG, int SAFETY){ //Field goal = 3
    int div_num = number / 3; //How many there are
    int mod_num = number % 3; //The remainder
    return fg(number, permutation, TD_2, TD_1, TD, div_num, mod_num);
}

int td(int number, int permutation, int TD_2, int TD_1, int TD, int FG, int SAFETY){ //Touchdown = 6
    int div_num = number / 6; //How many there are
    int mod_num = number % 6; //The remainder
    return fg(number, permutation, TD_2, TD_1, div_num, mod_num, SAFETY);
}

int td_1(int number, int permutation, int TD_2, int TD_1, int TD, int FG, int SAFETY){ //Touchdown + 1 = 7
    int div_num = number / 7; //How many there are
    int mod_num = number % 7; //The remainder
    return fg(number, permutation, TD_2, div_num, mod_num, FG, SAFETY);
}

int td_2(int number, int permutation, int TD_2, int TD_1, int TD, int FG, int SAFETY){ //Touchdown + 2 = 8
    int div_num = number / 8; //How many there are
    int mod_num = number % 8; //The remainder
    return fg(number, permutation, div_num, mod_num, TD, FG, SAFETY);
}

int factorial(int num) {
    int i, factorial = 1;
    // Calculate factorial using a loop
    for (i = 2; i <= num; i++) {
        factorial *= i;
    }
    return factorial;   
}

int scoring(int user_input){
    //Variable setup
    int SAFETY = 0;
    int FG = 0;
    int TD = 0;
    int TD_1 = 0;
    int TD_2 = 0;
    int number = 0;
    int permutation = 0;
    //Total permutations is (user_input!) / (8!*7!*6!*3!*2!)
    int total_permutations = ((factorial(user_input))/(((factorial(8))*(factorial(7))(factorial(6))*(factorial(3))*(factorial(2))));
    
    for (int i = 0; i < total_permutations; i++){ //Checks for all permutations of 8 points
        td_2(number, permutation, (TD_2 - (8*i)), TD_1, TD, FG, SAFETY);
    }
    for (int q = 0; q < total_permutations; q++){ //Checks for all permutations of 7 points
        td_2(number, permutation, TD_2, (TD_1 - (7*q)), TD, FG, SAFETY);
    }
    for (int v = 0; v < total_permutations; v++){ //Checks for all permutations of 6 points
        td_2(number, permutation, TD_2, TD_1, (TD - (6*v)), FG, SAFETY);
    }
    for (int y = 0; y < total_permutations; y++){ //Checks for all permutations of 3 points
        td_2(number, permutation, TD_2, TD_1, TD, (FG - (3*y)), SAFETY);
    }
    for (int x = 0; x < total_permutations; x++){ //Checks for all permutations of 2 points
        td_2(number, permutation, TD_2, TD_1, TD, FG, (SAFETY - (2*x))));
    }
}