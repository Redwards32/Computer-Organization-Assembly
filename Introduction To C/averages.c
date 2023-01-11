
    int digit_sum = 0;
    int even_counter = 0;
    int odd_counter = 0;
    int average_input = 0;
    double odd_sum = 0;
    double even_sum = 0;
     
    for(;;){
        switch(counter){ //counter starts at one, increments
            case 1://1st integer
                printf("Enter the %d",counter);
                printf("st number: ");
                break;
            case 2://2nd integer
                printf("Enter the %d",counter);
                printf("nd number: ");
                break;
            case 3://3rd integer
                printf("Enter the %d",counter);
                printf("rd number: ");
                break;
            default://every other case after 3rd
                if((((counter % 10) == 1) && ((counter / 10) % 10) != 1)){//No 
integer with "11" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("st number: ");
                    break;
                }
                if((((counter % 10) == 2) && ((counter / 10) % 10) != 1)){//No 
integers with "12" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("nd number: ");
                    break;
                }
                if((((counter % 10) == 3) && ((counter / 10) % 10) != 1)){//No 
integer with "13" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("rd number: ");
                    break;
                }
                else{ //Every other number that doesn't have 11, 12, 13 with last 
two placeholders (ones and ten)
                printf("Enter the %d", counter);
                printf("th number: ");
                }
        }
        scanf("%d", &input_num); //User input after each break in first while loop
        if((input_num == 0) && (counter == 1)){
            printf("There are no averages to be computed!\n");
            return 0;
            
        }#include <stdio.h>
int main(int argc, const char * argv[]) {
    int input_num = 0;
    int initial_value = 0;
    int counter = 1;
    int digit_sum = 0;
    int even_counter = 0;
    int odd_counter = 0;
    int average_input = 0;
    double odd_sum = 0;
    double even_sum = 0;
     
    for(;;){
        switch(counter){ //counter starts at one, increments
            case 1://1st integer
                printf("Enter the %d",counter);
                printf("st number: ");
                break;
            case 2://2nd integer
                printf("Enter the %d",counter);
                printf("nd number: ");
                break;
            case 3://3rd integer
                printf("Enter the %d",counter);
                printf("rd number: ");
                break;
            default://every other case after 3rd
                if((((counter % 10) == 1) && ((counter / 10) % 10) != 1)){//No 
integer with "11" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("st number: ");
                    break;
                }
                if((((counter % 10) == 2) && ((counter / 10) % 10) != 1)){//No 
integers with "12" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("nd number: ");
                    break;
                }
                if((((counter % 10) == 3) && ((counter / 10) % 10) != 1)){//No 
integer with "13" with the last two place holders
                    printf("Enter the %d",counter);
                    printf("rd number: ");
                    break;
                }
                else{ //Every other number that doesn't have 11, 12, 13 with last 
two placeholders (ones and ten)
                printf("Enter the %d", counter);
                printf("th number: ");
                }
        }
        scanf("%d", &input_num); //User input after each break in first while loop
        if((input_num == 0) && (counter == 1)){
            printf("There are no averages to be computed!\n");
            return 0;
            
        }
        else if ((input_num == 0) && (counter != 1)){ //Counter starts at one, so 
as it increments and increases, program will finalize when user inputs 0.
            if((((even_sum/even_counter) > 0)||(((even_sum/even_counter) < 0))) && 
(((odd_sum/odd_counter) > 0)||(((odd_sum/odd_counter) < 0)))){ //If there is an 
even average value and an odd sum value.
                printf("Average of inputs whos digit sum up to an even number: 
%.2lf\n", (even_sum/even_counter));
                printf("Average of inputs whos digit sum up to an odd number: 
%.2lf\n", (odd_sum/odd_counter));
                return 0;
            }
            else if(((odd_sum/odd_counter) > 0)||(((odd_sum/odd_counter) < 
0))){//If there's only an odd average value.
                printf("Average of inputs whos digit sum up to an odd number: 
%.2lf\n", (odd_sum/odd_counter));
                return 0;
            }
            else{ //If there's only an even average value.
                printf("Average of inputs whos digit sum up to an even number: 
%.2lf\n", (even_sum/even_counter));
            }
        }else{
            average_input = input_num; //Storing value of user input
            while((input_num < 0) || (input_num > 0)){ //While loop condition, if 
there is some non-zero values
                initial_value = input_num % 10; //Take last digit of number
                input_num = input_num / 10; // Decrease user number by one digit
                digit_sum = initial_value + digit_sum; //last digit + digit sum == 
digit_sum
                
            }
            if (digit_sum % 2 == 0){ //After while loop ends, checks if the 
digit_sum is == 0 when using 2.
                even_counter++;
                even_sum = average_input + even_sum;
                digit_sum = 0;
                average_input = 0;
            }
            if (digit_sum % 2 != 0){//if modular 2 has a remainder, increase an odd
counter,,, this is for odd average sum ,,, total/counter(how many numbers tehre 
are)
                odd_counter++;
                odd_sum = average_input + odd_sum;
                digit_sum = 0;
                average_input = 0;
            }
        }
        counter++; // counter increments if user does not input 0, stops until 
user_input == 0
    }
}
