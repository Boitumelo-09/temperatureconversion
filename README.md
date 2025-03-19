# Temperature Converter
### Dev. Boitumelo M

## Description

This is a C++ console-based temperature conversion program. It allows users to convert between Celsius, Fahrenheit, and Kelvin temperatures using a simple menu-driven interface.

## Features

- Convert between Celsius and Fahrenheit
- Convert between Kelvin and Fahrenheit
- Convert between Celsius and Kelvin
- User-friendly terminal interaction
- Error handling for invalid inputs

## How to Use

1. Run the program.
2. Enter your username when prompted.
3. Choose the type of conversion:
   - 1: Celsius and Fahrenheit
   - 2: Fahrenheit and Kelvin
   - 3: Kelvin and Celsius
4. Follow the instructions to input values and see the results.
5. Choose whether to restart the program or exit.

## Requirements

- C++ compiler (GCC, MSVC, Clang, etc.)

## Compilation and Execution

To compile and run the program, use the following commands:

```sh
 g++ -o temperature_converter temperature_converter.cpp
 ./temperature_converter
```

## Code Structure

The program consists of the following functions:

- `Terminal(std::string userName)`: Displays the menu and prompts user input.
- `errorMessage()`: Displays an error message for invalid inputs.
- `thanksGivingMessage(std::string userName)`: Displays a thank-you message.
- `CelciusAndFahrenheit(float value1, int option3, float result)`: Converts between Celsius and Fahrenheit.
- `KelvinsAndFahrenheit(float value1, int option3, float result)`: Converts between Kelvin and Fahrenheit.
- `celciusAndKelvins(float value1, int option3, float result)`: Converts between Celsius and Kelvin.

## Example Output

```
Enter your username: John

Hello John. Let's Do Some Temperature Conversions

Select The Type Of Conversion
___________________

1: Celsius And Fahrenheit
2: Fahrenheit And Kelvin
3: Kelvin And Celcius
___________________
Option: 1

You're Converting From Celsius To Fahrenheit
Enter The Value In (C): 25
Given Value Is 25.00C

CONVERTED TO FAHRENHEIT (F)
The Value Is 77.00F

Thank You John. We Hope You Got The Results You Needed
Do You Want To Restart?
___________________
1: Yes
2: No
___________________
Option: 2
Thank You Have A Nice Day
```

## Author

- **Boitumelo Clement Mkhondo**

## License

This project is open-source and free to use.






