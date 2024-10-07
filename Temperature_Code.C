#include <stdio.h>

float celsius_to_fahrenheit(float celsius){ //Formula for Celsius to Fahrenheit
    return ((celsius*(9.0/5.0))+32);
}

float fahrenheit_to_celsius(float fahrenheit){ //Formula for Fahrenheit to Celsius
    return ((fahrenheit-32)*(5.0/9.0));
}

float celsius_to_kelvin(float celsius){ //Formula for Celsius to Kelvin
    return (celsius+273.15);
}

float kelvin_to_celsius(float kelvin){ //Formula for Kelvin to Celsius
    return (kelvin-273.15);
}

void categorize_temperature(float celsius){
    //Prints a weather condition depending on the value (in celsius) of the user_input
    if (celsius < 0){
        printf("\nTemperature is freezing! Stay indoors.");
    }
    if ((celsius >= 0) && (celsius <= 10)){
        printf("\nTemperature is cold! Wear a jacket.");
    }
    if ((celsius >= 11) && (celsius <= 25)){
        printf("\nTemperature is comfortable! Wear comfortable clothes.");
    }
    if ((celsius >= 26) && (celsius <= 35)){
        printf("\nTemperature is hot! Use sunscreen.");
    }
    if (celsius >= 36){
        printf("\nTemperature is extremely hot! Stay indoors.");
    }
}

int main() {
    
    //Variable setup
    float user_conversion;
    float user_input;
    int user_scale;
    int user_target;
    
    //Input Temperature
    printf("Enter a temperature: ");
    while (scanf("%f", &user_input) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid temperature: ");
        }
    
    //Input Scale
    printf("Enter the scale of your temperature (1) Fahrenheit, (2) Celsius, or (3) Kelvin: ");
    while (scanf("%d", &user_scale) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
    }
    //Scale >=4
    while (user_scale >= 4){
        printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        //Error handling if >=4 goes to an error
        while (scanf("%d", &user_scale) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        }
        //Scale <= 0
        while (user_scale <= 0){
            printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            //Error handling if <=0 goes to an error
            while (scanf("%d", &user_scale) == 0){
            while (getchar() != '\n'); //Clears input buffer
            printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            }  
        }
    }
    //Scale <= 0
    while (user_scale <= 0){
        printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        //Error handling if <=0 goes to an error
        while (scanf("%d", &user_scale) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        } 
        //Scale >=4
        while (user_scale >= 4){
            printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            //Error handling if >=4 goes to an error
            while (scanf("%d", &user_scale) == 0){
            while (getchar() != '\n'); //Clears input buffer
            printf("Enter a valid scale (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            }
        }
    }
    
    //Input Target
    printf("Enter the target of your temperature (1) Fahrenheit, (2) Celsius, or (3) Kelvin: ");
    while (scanf("%d", &user_target) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
    }
    //Target >=4
    while (user_target >= 4){
        printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        //Error handling if >=4 goes to an error
        while (scanf("%d", &user_target) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        }
        //Target <= 0
        while (user_target <= 0){
            printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            //Error handling if <=0 goes to an error
            while (scanf("%d", &user_target) == 0){
            while (getchar() != '\n'); //Clears input buffer
            printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            }  
        }
    }
    //Target <= 0
    while (user_target <= 0){
        printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        //Error handling if <=0 goes to an error
        while (scanf("%d", &user_target) == 0){
        while (getchar() != '\n'); //Clears input buffer
        printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
        
        } 
        //Target >=4
        while (user_target >= 4){
            printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            
            //Error handling if >=4 goes to an error
            while (scanf("%d", &user_target) == 0){
            while (getchar() != '\n'); //Clears input buffer
            printf("Enter a valid target (1) Fahrenheit, (2) Clesius, or (3) Kelvin: ");
            }
        }
    }
    
    //If user_input is in Fahrenheit
    if (user_scale == 1){
        
        //If target is in Fahrenheit
        if (user_target == 1){
            
            //Converts using formula and print conversion and weather condition
            user_conversion = user_input;
            printf("Your temperature from Fahrenheit to Fahrenheit is: ", "\n");
            printf("%f", user_conversion);
            categorize_temperature(fahrenheit_to_celsius(user_conversion));
        }
        else{
            
            //Elif target is in Clesius
            if (user_target == 2){
               
               //Converts using formula and print conversion and weather condition
               user_conversion = fahrenheit_to_celsius(user_input);
                printf("Your temperature from Fahrenheit to Celsius is: ", "\n");
                printf("%f", user_conversion);
                categorize_temperature(user_conversion);
            }
            else{
                
                //Elif target is in Kelvin
                if (user_target == 3){
                    
                    //Converts using formula and print conversion and weather condition
                    user_conversion = celsius_to_kelvin(fahrenheit_to_celsius(user_input));
                    printf("Your temperature from Fahrenheit to Kelvin is: ", "\n");
                    printf("%f", user_conversion);
                    categorize_temperature(fahrenheit_to_celsius(user_input));
                }
            }
        }
    }
    
    //If user_input is in Celsius
    if (user_scale == 2){
        
        //If target is in Fahrenheit
        if (user_target == 1){
            
            //Converts using formula and print conversion and weather condition
            user_conversion = celsius_to_fahrenheit(user_input);
            printf("Your temperature from Celsius to Fahrenheit is: ", "\n");
            printf("%f", user_conversion);
            categorize_temperature(user_input);
        }
        else{
            
            //If target is in Celsius
            if (user_target == 2){
                
                //Converts using formula and print conversion and weather condition
                user_conversion = user_input;
                printf("Your temperature from Celsius to Celsius is: ", "\n");
                printf("%f", user_conversion);
                categorize_temperature(user_input);
            }
            else{
                
                //If target is in Kelvin
                if (user_target == 3){
                    
                    //Converts using formula and print conversion and weather condition
                    user_conversion = celsius_to_kelvin(user_input);
                    printf("Your temperature from Celsius to Kelvin is: ", "\n");
                    printf("%f", user_conversion);
                    categorize_temperature(user_input);
                }
            }
        }
    }
    if (user_scale == 3){
        if (user_target == 1){
            
            //Converts using formula and print conversion and weather condition
            user_conversion = celsius_to_fahrenheit(kelvin_to_celsius(user_input));
            printf("Your temperature from Kelvin to Fahrenheit is: ", "\n");
            printf("%f", user_conversion);
            categorize_temperature(kelvin_to_celsius(user_input));
        }
        else{
            if (user_target == 2){
                
                //Converts using formula and print conversion and weather condition
                user_conversion = kelvin_to_celsius(user_input);
                printf("Your temperature from Kelvin to Celsius is: ", "\n");
                printf("%f", user_conversion);
                categorize_temperature(kelvin_to_celsius(user_input));
            }
            else{
                if (user_target == 3){
                    
                    //Converts using formula and print conversion and weather condition
                    user_conversion = user_input;
                    printf("Your temperature from Kelvin to Kelvin is: ", "\n");
                    printf("%f", user_conversion);
                    categorize_temperature(kelvin_to_celsius(user_input));
                }
            }
        }
    }
}

