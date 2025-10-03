# Month 1: October 2025 - Complete Breakdown
## Foundation & Environment Setup
**October 3 - November 2, 2025**

---

## Table of Contents
- [Week 1: Getting Started](#week-1-october-3-9-2025)
- [Week 2: Variables & Data Types](#week-2-october-10-16-2025)
- [Week 3: Operators & Basic I/O](#week-3-october-17-23-2025)
- [Week 4: Control Flow](#week-4-october-24-30-2025)
- [Month 1 Capstone Projects](#month-1-capstone-projects-october-31---november-2)
- [Month 1 Summary](#month-1-complete---what-youve-learned)

---

## Week 1 (October 3-9, 2025): Getting Started

### Day 1 (Friday, Oct 3) - Setup Day
**Goal**: Get your development environment ready

**Tasks:**
1. **Choose and Install IDE/Compiler** (1 hour)
   - Option A: Visual Studio Community (Windows) - easiest for beginners
   - Option B: VS Code + MinGW (Windows) or GCC (Mac/Linux)
   - Option C: CLion (cross-platform, student license available)
   
2. **Verify Installation** (30 min)
   - Create a new project/file
   - Write a simple Hello World
   - Compile and run successfully
   - Understand: source file (.cpp) → compiler → executable (.exe)

3. **Learn Basic Compilation Process** (30 min)
   - Understand what compilation means
   - Learn about object files
   - What is an executable?
   - How to run your program

**Reading**: 
- Introduction to C++ (what is C++, why learn it)
- How compilation works
- Basic program structure

**Practice**: Get Hello World running on your machine

---

### Day 2 (Saturday, Oct 4) - First Programs
**Goal**: Understand basic program structure and output

**Concepts to Learn:**
- `#include <iostream>`
- `int main()` function
- `std::cout` for output
- `<<` operator
- `std::endl` vs `\n`
- Semicolons (statement terminators)
- Comments: `//` and `/* */`

**Exercise 1: Hello World+**
```
Create a program that displays:
- Your name
- Your age
- Your favorite hobby
- Use proper spacing and formatting
```

**Exercise 2: Personal Info Card**
```
Create a formatted output that looks like a business card:
========================
    John Doe
    Age: 25
    Email: john@email.com
    Phone: 555-1234
========================
```

**Challenge**: Make it look professional with borders and spacing

---

### Day 3 (Sunday, Oct 5) - Variables Begin
**Goal**: Understand variables and basic data types

**Concepts to Learn:**
- What is a variable?
- Variable declaration
- Variable initialization
- `int` type
- `std::cin` for input
- Variable naming rules (camelCase, snake_case)

**Exercise 3: Simple Math**
```
Create a program that:
1. Asks user for two numbers
2. Stores them in variables
3. Calculates: sum, difference, product, quotient
4. Displays all results
```

**Example Output:**
```
Enter first number: 10
Enter second number: 3

Sum: 13
Difference: 7
Product: 30
Quotient: 3
```

**Challenge**: What happens if you divide by zero? Test it!

---

### Day 4 (Monday, Oct 6) - More Data Types
**Goal**: Learn different data types

**Concepts to Learn:**
- `double` and `float` (decimal numbers)
- `char` (single character)
- `string` (text) - need `#include <string>`
- `bool` (true/false)
- Difference between types
- Type size and precision

**Exercise 4: Mad Libs Generator**
```
Create a Mad Libs program:
1. Ask for: noun, verb, adjective, place, number
2. Store each in appropriate variable type
3. Create a funny story using these words
```

**Example:**
```
Enter a noun: dragon
Enter a verb: dancing
Enter an adjective: purple
Enter a place: bathroom
Enter a number: 42

Story:
Once upon a time, a purple dragon was dancing
in the bathroom when suddenly 42 things happened!
```

**Challenge**: Make 3 different story templates

---

### Day 5 (Tuesday, Oct 7) - ASCII Art
**Goal**: Practice output formatting and strings

**Concepts to Learn:**
- Multi-line output
- Escape sequences: `\n`, `\t`, `\\`, `\"`
- String concatenation with `+`

**Exercise 5: ASCII Art Display**
```
Create a program that displays ASCII art.
Choose from:
- A house
- A tree
- A smiley face
- A car
- Your initials

Use cout to draw it line by line
```

**Example Output:**
```
      *
     ***
    *****
   *******
  *********
      |
      |
```

**Challenge**: Let user choose which art to display (you'll use if statements, which you'll learn soon - or just make separate programs)

---

### Day 6 (Wednesday, Oct 8) - Review & Debug
**Goal**: Practice what you've learned and fix errors

**Tasks:**
1. **Review all 5 mini projects** (1 hour)
   - Make sure they all compile
   - Make sure they all run correctly
   - Add comments explaining what each line does

2. **Common Errors Practice** (1 hour)
   - Intentionally create these errors and fix them:
     - Missing semicolon
     - Misspelled variable name
     - Using variable before declaring it
     - Forgetting to include necessary headers
     - Type mismatch (storing text in int)

3. **Improvement Exercise** (30 min)
   - Pick your favorite project
   - Add more features
   - Improve the output formatting
   - Add more comments

**Challenge**: Combine multiple projects into one menu (you'll learn how to do this better in Week 4)

---

### Day 7 (Thursday, Oct 9) - Week 1 Consolidation
**Goal**: Solidify understanding and prepare for Week 2

**Tasks:**
1. **Create a "Week 1 Showcase" program** (1.5 hours)
   - Combine elements from all 5 projects
   - Show off what you've learned
   - Make it interactive
   - Add good formatting

2. **Learning Journal** (30 min)
   Write down:
   - What was easiest for you?
   - What was hardest?
   - What questions do you still have?
   - What do you want to learn next?

3. **Setup for Week 2** (30 min)
   - Read ahead about data types
   - Watch a video about type conversion
   - Prepare questions for concepts you don't understand

**Weekend Challenge**: Build something creative using only what you've learned so far!

---

## Week 2 (October 10-16, 2025): Variables & Data Types

### Day 1 (Friday, Oct 10) - Temperature Converter
**Goal**: Work with numeric types and basic arithmetic

**New Concepts:**
- Type conversion (casting)
- Arithmetic with decimals
- Constants with `const`
- Precision of double vs float

**Exercise 1: Temperature Converter**
```
Create a program that converts temperatures:
1. Ask user: "Convert (F)ahrenheit or (C)elsius?"
2. Ask for temperature value
3. Convert and display result

Formulas:
- Celsius to Fahrenheit: (C × 9/5) + 32
- Fahrenheit to Celsius: (F - 32) × 5/9
```

**Required Features:**
- Use `double` for temperature values
- Display with 2 decimal places
- Show both original and converted values
- Add Kelvin conversion as bonus
  - Kelvin = Celsius + 273.15

**Example Output:**
```
Temperature Converter
====================
Convert (F)ahrenheit or (C)elsius? C
Enter temperature: 25

25.0°C = 77.0°F = 298.15K
```

**Learning Focus:**
- Why use `double` instead of `int`?
- What happens with integer division?
- How to format decimal output?

---

### Day 2 (Saturday, Oct 11) - Age Calculator
**Goal**: Practice with integers and basic math

**New Concepts:**
- Integer arithmetic
- Modulo operator `%`
- Calculating with dates
- Constants for conversion factors

**Exercise 2: Age Calculator**
```
Create a program that:
1. Asks for birth year
2. Calculates age in years
3. Calculates age in months
4. Calculates age in days (approximate)
5. Calculates age in hours
6. Shows fun facts about their age
```

**Required Calculations:**
- Years old
- Months old (years × 12)
- Days old (years × 365, ignore leap years for now)
- Hours old (days × 24)
- Minutes old (hours × 60)

**Example Output:**
```
Age Calculator
==============
Enter your birth year: 2000
Current year: 2025

You are:
- 25 years old
- 300 months old
- 9,125 days old
- 219,000 hours old
- 13,140,000 minutes old

Fun fact: You've lived through 6 leap years!
```

**Challenge**: 
- Add birth month and day for exact age
- Calculate until next birthday

---

### Day 3 (Sunday, Oct 12) - BMI Calculator
**Goal**: Complex calculations with multiple inputs

**New Concepts:**
- Multiple numeric variables
- Order of operations
- Formatting output with precision
- Using mathematical formulas

**Exercise 3: BMI Calculator**
```
Create a Body Mass Index calculator:
1. Ask for weight (in kg or lbs)
2. Ask for height (in cm or inches)
3. Calculate BMI
4. Display BMI value
5. Show BMI category

BMI Formula:
- Metric: BMI = weight(kg) / (height(m) × height(m))
- Imperial: BMI = (weight(lbs) / (height(in) × height(in))) × 703

Categories:
- Under 18.5: Underweight
- 18.5-24.9: Normal weight
- 25.0-29.9: Overweight
- 30.0+: Obese
```

**Example Output:**
```
BMI Calculator
==============
Weight (kg): 70
Height (cm): 175

Your BMI: 22.86
Category: Normal weight

This is considered a healthy weight range.
```

**Challenge**: 
- Allow user to choose metric or imperial
- Show ideal weight range for their height
- Calculate calories needed per day

---

### Day 4 (Monday, Oct 13) - Currency Converter
**Goal**: Working with money and multiple conversions

**New Concepts:**
- Decimal precision for money
- Multiple conversion rates
- Formatting currency output

**Exercise 4: Currency Converter**
```
Create a currency converter with 3+ currencies:

Example rates (as of Oct 2025, use current rates):
- 1 USD = 0.92 EUR
- 1 USD = 0.79 GBP
- 1 USD = 149.50 JPY
- 1 USD = 37.50 THB (Thai Baht)

Features:
1. Display menu of currencies
2. Ask for source currency
3. Ask for target currency
4. Ask for amount
5. Convert and display
```

**Example Output:**
```
Currency Converter
==================
Available currencies:
1. USD (US Dollar)
2. EUR (Euro)
3. GBP (British Pound)
4. JPY (Japanese Yen)
5. THB (Thai Baht)

Convert from (1-5): 1
Convert to (1-5): 2
Amount in USD: 100

100.00 USD = 92.00 EUR
```

**Challenge**:
- Add more currencies
- Show conversion rate used
- Allow reverse conversion

---

### Day 5 (Tuesday, Oct 14) - Shopping Total
**Goal**: Combine multiple calculations

**New Concepts:**
- Accumulating totals
- Percentage calculations
- Tax calculations
- Rounding to 2 decimal places

**Exercise 5: Shopping Total Calculator**
```
Create a shopping calculator:
1. Ask for item name and price (3-5 items)
2. Calculate subtotal
3. Ask for tax rate (percentage)
4. Calculate tax amount
5. Calculate total
6. Show itemized receipt
```

**Example Output:**
```
Shopping Cart Calculator
========================
Item 1 name: Laptop
Item 1 price: 999.99

Item 2 name: Mouse
Item 2 price: 25.50

Item 3 name: Keyboard
Item 3 price: 75.00

Tax rate (%): 8

========================
      RECEIPT
========================
Laptop        $999.99
Mouse          $25.50
Keyboard       $75.00
------------------------
Subtotal    $1,100.49
Tax (8%)       $88.04
------------------------
TOTAL       $1,188.53
========================
```

**Challenge**:
- Add quantity for each item
- Apply a discount percentage
- Calculate change if paying with cash

---

### Day 6 (Wednesday, Oct 15) - Type Conversion Practice
**Goal**: Understand implicit vs explicit conversion

**Learning Focus:**
- Implicit conversion (automatic)
- Explicit conversion (casting)
- Integer division vs float division
- Precision loss
- Overflow and underflow

**Practice Exercises:**

**A. Division Exploration**
```
Test these and understand the difference:
- 5 / 2 (both integers)
- 5.0 / 2 (float and integer)
- 5 / 2.0 (integer and float)
- (double)5 / 2 (casting)
- 5.0 / 2.0 (both floats)
```

**B. Type Size Exploration**
```
Create a program that shows:
- Size of int
- Size of double
- Size of char
- Size of bool
- Size of long
- Size of float

Use sizeof() operator
```

**C. Precision Test**
```
Store these numbers and see what happens:
- 1/3 in a float
- 1/3 in a double
- Very large numbers in int
- Very small decimals

Print them and compare precision
```

**Example Output:**
```
Type Sizes on This System
=========================
int:    4 bytes
double: 8 bytes
char:   1 byte
bool:   1 byte
float:  4 bytes
long:   8 bytes

Precision Tests
===============
1/3 as float:  0.333333
1/3 as double: 0.333333333333333
```

---

### Day 7 (Thursday, Oct 16) - Week 2 Review
**Goal**: Consolidate Week 2 knowledge

**Review Tasks:**

1. **Concept Quiz** (30 min)
   - What's the difference between int and double?
   - When should you use float vs double?
   - What is type casting?
   - What happens with integer division?
   - How do you format decimal output?

2. **Create "Super Calculator"** (1.5 hours)
   Combine all Week 2 projects into one program that:
   - Has a menu
   - Offers all conversions
   - Has nice formatting
   - Handles user input well

3. **Debug Challenge** (30 min)
   Create programs with intentional errors:
   - Type mismatches
   - Incorrect conversions
   - Precision issues
   - Division by zero attempts

4. **Prepare for Week 3** (30 min)
   - Read about operators
   - Learn operator precedence
   - Understand order of operations

**Weekend Project**: Create a "Unit Converter Suite" that converts:
- Temperature (all three scales)
- Distance (km, miles, meters, feet)
- Weight (kg, lbs, ounces)
- Time (seconds, minutes, hours, days)

---

## Week 3 (October 17-23, 2025): Operators & Basic I/O

### Day 1 (Friday, Oct 17) - Tip Calculator
**Goal**: Master percentage calculations and formatting

**New Concepts:**
- Arithmetic operators review (+, -, *, /, %)
- Operator precedence (order of operations)
- Formatting money amounts
- Division among people

**Exercise 1: Tip Calculator**
```
Create a restaurant tip calculator:
1. Ask for bill amount
2. Ask for tip percentage (15%, 18%, 20%, custom)
3. Ask how many people to split between
4. Calculate total with tip
5. Calculate amount per person
6. Show detailed breakdown
```

**Features Required:**
- Subtotal (original bill)
- Tip amount
- Total with tip
- Split amount per person
- Each person's share of tip

**Example Output:**
```
Restaurant Tip Calculator
=========================
Bill amount: $85.50
Tip percentage: 18%
Split between how many people? 3

Breakdown:
----------
Subtotal:        $85.50
Tip (18%):       $15.39
Total:          $100.89

Per Person:      $33.63
  (includes $5.13 tip each)
```

**Challenges**:
- Add tax calculation before tip
- Offer quick tip presets (15%, 18%, 20%)
- Round up to nearest dollar option
- Show tip per person separately

---

### Day 2 (Saturday, Oct 18) - Discount Calculator
**Goal**: Work with multiple percentage calculations

**New Concepts:**
- Chained calculations
- Compound percentages
- Savings calculations
- Comparison operators (>, <, ==)

**Exercise 2: Discount Calculator**
```
Create a discount calculator:
1. Ask for original price
2. Ask for discount percentage
3. Calculate discount amount
4. Calculate final price
5. Show savings
6. Compare with additional scenarios
```

**Required Calculations:**
- Original price
- Discount amount (price × discount%)
- Final price (price - discount)
- Savings (same as discount amount)
- Percentage saved

**Example Output:**
```
Discount Calculator
===================
Original price: $129.99
Discount: 25%

Price Breakdown:
----------------
Original:     $129.99
Discount:     -$32.50 (25% off)
Final Price:   $97.49

You save:      $32.50
That's 25% off the original price!
```

**Advanced Features**:
- Multiple stacked discounts (20% off, then additional 10%)
- Member discount + sale discount
- Buy X get Y% off calculator
- Compare savings with different discount amounts

**Challenge**: 
Create a "Sale Comparison Tool"
```
Compare same item at different stores:
Store A: $100, 30% off
Store B: $110, 35% off
Store C: $95, 25% off
Which is the best deal?
```

---

### Day 3 (Sunday, Oct 19) - Loan Payment Calculator
**Goal**: Complex financial calculations

**New Concepts:**
- Compound calculations
- Monthly vs annual rates
- Long-term calculations
- Interest calculations

**Exercise 3: Loan Payment Calculator**
```
Simple loan calculator (we'll improve this later):

User inputs:
1. Loan amount (principal)
2. Annual interest rate (%)
3. Loan term (years)

Calculate:
- Monthly interest rate
- Number of payments
- Monthly payment amount
- Total amount paid
- Total interest paid
```

**Simplified Monthly Payment Formula:**
```
Monthly Interest Rate = Annual Rate / 12 / 100
Number of Payments = Years × 12
Monthly Payment = (Principal × Monthly Rate) / (1 - (1 + Monthly Rate)^(-Number of Payments))

For now, use simplified version:
Monthly Payment ≈ (Principal / Number of Payments) + (Principal × Annual Rate / 100 / 12)
```

**Example Output:**
```
Loan Payment Calculator
=======================
Loan amount: $20,000
Annual interest rate: 5%
Loan term (years): 5

Loan Summary:
-------------
Monthly payment:    $377.42
Number of payments: 60
Total amount paid:  $22,645.48
Total interest:     $2,645.48

Breakdown:
- Principal: $20,000.00
- Interest:  $2,645.48
- Total:     $22,645.48
```

**Challenge**:
- Show amortization (how much goes to principal vs interest each month)
- Compare different loan terms (3 vs 5 vs 10 years)
- Calculate early payoff scenarios

---

### Day 4 (Monday, Oct 20) - Speed Calculator
**Goal**: Distance, time, speed calculations

**New Concepts:**
- Relationship between distance, time, speed
- Unit conversions in calculations
- Different units for same measurement
- Formula manipulation

**Exercise 4: Speed Calculator**
```
Create a speed/distance/time calculator:

User can calculate:
1. Speed (given distance and time)
2. Distance (given speed and time)
3. Time (given speed and distance)

Formulas:
- Speed = Distance / Time
- Distance = Speed × Time
- Time = Distance / Speed

Support multiple units:
- Distance: kilometers, miles, meters
- Time: hours, minutes, seconds
- Speed: km/h, mph, m/s
```

**Example Output:**
```
Speed Calculator
================
What do you want to calculate?
1. Speed
2. Distance
3. Time

Choice: 1

Distance traveled: 150
Distance unit (km/mi/m): km
Time taken: 2
Time unit (h/min/s): h

Results:
--------
Speed: 75 km/h
Speed: 46.6 mph
Speed: 20.83 m/s
```

**Required Conversions:**
- 1 mile = 1.60934 km
- 1 km = 1000 m
- 1 hour = 60 minutes = 3600 seconds

**Challenge**:
- Add acceleration calculator
- Calculate fuel consumption (distance / efficiency)
- Travel time comparison (car vs train vs plane)

---

### Day 5 (Tuesday, Oct 21) - Calorie Tracker
**Goal**: Daily tracking and comparison calculations

**New Concepts:**
- Multiple related calculations
- Comparison with standards
- Surplus/deficit calculations
- Percentage of goal

**Exercise 5: Calorie Tracker**
```
Create a daily calorie tracker:

User inputs:
1. Recommended daily calories
2. Breakfast calories
3. Lunch calories
4. Dinner calories
5. Snacks calories

Calculate:
- Total calories consumed
- Remaining calories
- Surplus or deficit
- Percentage of daily goal
- Status message
```

**Example Output:**
```
Daily Calorie Tracker
=====================
Your daily goal: 2000 calories

Meals:
------
Breakfast: 450 cal
Lunch:     600 cal
Dinner:    700 cal
Snacks:    150 cal

Summary:
--------
Total consumed: 1,900 cal
Daily goal:     2,000 cal
Remaining:        100 cal

You've consumed 95% of your daily goal.
Status: You're within your target! 😊
```

**Advanced Features:**
- Calorie breakdown by meal (percentage)
- Compare to macro goals (protein, carbs, fat)
- Weekly average calculator
- Calorie burn from exercise

**Challenge**: 
Create a "Nutrition Calculator"
```
Input:
- Age, weight, height, gender
- Activity level
- Goal (lose/maintain/gain weight)

Calculate:
- BMR (Basal Metabolic Rate)
- TDEE (Total Daily Energy Expenditure)
- Recommended calories for goal
```

---

### Day 6 (Wednesday, Oct 22) - Operator Practice Day
**Goal**: Master all operators and precedence

**Learning Focus:**

**A. Arithmetic Operators Deep Dive**
```
Practice with:
+ (addition)
- (subtraction)
* (multiplication)
/ (division)
% (modulo - remainder)
++ (increment)
-- (decrement)

Create programs that demonstrate:
- Order of operations (PEMDAS)
- Difference between ++x and x++
- Using parentheses to change order
- Modulo use cases (even/odd, cycles)
```

**B. Comparison Operators**
```
Practice with:
== (equal to)
!= (not equal to)
> (greater than)
< (less than)
>= (greater than or equal)
<= (less than or equal)

Create programs that:
- Compare two numbers
- Check if number is in range
- Determine largest of 3 numbers
- Check if year is leap year
```

**C. Logical Operators (Preview for next week)**
```
Brief introduction to:
&& (AND)
|| (OR)
! (NOT)

Simple examples without if statements yet
```

**Practice Exercises:**

**Exercise A: Expression Evaluator**
```
Calculate and display results:
5 + 3 * 2
(5 + 3) * 2
10 / 3
10 % 3
10.0 / 3
15 % 4

Show the difference between:
x = 5; y = ++x; (y is 6, x is 6)
x = 5; y = x++; (y is 5, x is 6)
```

**Exercise B: Number Comparison Tool**
```
Input two numbers
Display:
- Which is larger
- Difference between them
- Sum of them
- Product of them
- Which is even/odd
- Remainders when divided
```

**Exercise C: Unit Circle**
```
Create a modulo demonstration:
- Input a number (representing degrees)
- Show: number % 360 (keeps in 0-359 range)
- Explain how modulo creates cycles

Example uses:
- Clock: hours % 12
- Days: days % 7
- Circular patterns
```

---

### Day 7 (Thursday, Oct 23) - Week 3 Consolidation
**Goal**: Master all Week 3 concepts

**Review Project: "Personal Finance Dashboard"**

Create a comprehensive financial calculator that includes:

1. **Income Section**
   - Monthly salary
   - Additional income

2. **Expense Section**
   - Rent/Mortgage
   - Utilities
   - Food
   - Transportation
   - Entertainment
   - Other

3. **Calculations**
   - Total income
   - Total expenses
   - Savings (income - expenses)
   - Savings rate (percentage)
   - Expense breakdown (% of income)

4. **Goals Section**
   - Savings goal amount
   - Months to reach goal
   - Percentage toward goal

**Example Output:**
```
Personal Finance Dashboard
==========================

INCOME:
-------
Salary:       $3,500
Other Income:   $200
Total Income: $3,700

EXPENSES:
---------
Rent:       $1,200 (32.4%)
Utilities:    $150 (4.1%)
Food:         $400 (10.8%)
Transport:    $200 (5.4%)
Entertainment:$150 (4.1%)
Other:        $300 (8.1%)
---------
Total:      $2,400 (64.9%)

SAVINGS:
--------
Monthly Savings: $1,300 (35.1%)
Savings Goal: $10,000
Months to Goal: 7.7 months

STATUS: You're saving well! 💪
```

**Weekend Challenge:**
Create a "Decision Helper" that uses comparisons:
- Compare prices at different stores
- Compare investment options
- Compare travel routes
- Compare product specifications

**Prepare for Week 4:**
- Read about if/else statements
- Learn about boolean values
- Understand decision making in code

---

## Week 4 (October 24-30, 2025): Control Flow

### Day 1 (Friday, Oct 24) - Grade Evaluator
**Goal**: First introduction to if/else statements

**New Concepts:**
- `if` statement
- `else` statement
- `else if` for multiple conditions
- Boolean expressions
- Comparison in conditions
- Nested conditionals

**Exercise 1: Grade Evaluator**
```
Create a grade evaluation program:

Part A: Numeric to Letter Grade
Input: Numeric score (0-100)
Output: Letter grade with message

Grading Scale:
90-100: A (Excellent!)
80-89:  B (Good job!)
70-79:  C (Satisfactory)
60-69:  D (Needs improvement)
0-59:   F (Failed - study harder!)

Part B: GPA Calculator
Input: Letter grade
Output: GPA point value

A = 4.0
B = 3.0
C = 2.0
D = 1.0
F = 0.0
```

**Example Output:**
```
Grade Evaluator
===============

Numeric Grade Converter
-----------------------
Enter score (0-100): 87

Your grade: B
Comment: Good job!
GPA equivalent: 3.0

Grade Statistics:
- You're in the top 30% range
- 3 points above C grade
- 3 points below A grade
```

**Challenges:**
- Add plus/minus grades (A+, A, A-, B+, etc.)
- Calculate if score is above/below class average
- Determine grade needed on final to pass class
- Multiple assignment grader (homework, tests, final)

**Learning Points:**
- How if/else works
- Multiple conditions with else if
- Nesting if statements
- Combining conditions (preview of &&, ||)

---

### Day 2 (Saturday, Oct 25) - Leap Year Checker
**Goal**: Practice with multiple conditions and boolean logic

**New Concepts:**
- Logical operators: `&&` (AND), `||` (OR), `!` (NOT)
- Multiple conditions in one if statement
- Boolean variables
- true/false values

**Exercise 2: Leap Year Checker**
```
Create a leap year detector:

Leap Year Rules:
1. Divisible by 4 = leap year
2. EXCEPT if divisible by 100 = not a leap year
3. EXCEPT if divisible by 400 = leap year

Examples:
2024 = leap (divisible by 4)
1900 = not leap (divisible by 100 but not 400)
2000 = leap (divisible by 400)

Formula:
(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
```

**Example Output:**
```
Leap Year Checker
=================
Enter a year: 2024

2024 IS a leap year! 📅

Details:
- Divisible by 4? Yes
- Divisible by 100? No
- Divisible by 400? No

February 2024 has 29 days.

Next leap year: 2028
Previous leap year: 2020
```

**Extended Features:**
- Check multiple years at once
- Show all leap years in a range (we'll do this better with loops later)
- Calculate days until next leap year
- Show interesting leap year facts

**Challenge - Date Validator:**
```
Input: Day, Month, Year
Check if date is valid:
- Month between 1-12
- Day appropriate for month
- Consider leap years for February
- Display if valid or invalid with reason
```

---

### Day 3 (Sunday, Oct 26) - Tax Bracket Calculator
**Goal**: Complex nested conditions

**New Concepts:**
- Multiple if/else if chains
- Range checking
- Progressive calculations
- Nested decision trees

**Exercise 3: Tax Bracket Calculator**
```
Create a progressive tax calculator:

US Tax Brackets (2025 - Single Filer) - Simplified:
$0 - $11,000: 10%
$11,001 - $44,725: 12%
$44,726 - $95,375: 22%
$95,376 - $182,100: 24%
$182,101+: 32%

Progressive tax means:
- First $11,000 taxed at 10%
- Next portion taxed at 12%
- And so on...

Calculate:
1. Which bracket user is in
2. Tax amount
3. Effective tax rate (total tax / income)
4. Take-home pay
```

**Example Output:**
```
Income Tax Calculator
=====================
Annual income: $60,000

Tax Breakdown:
--------------
First $11,000 at 10% =    $1,100.00
Next $33,725 at 12% =     $4,047.00
Next $15,275 at 22% =     $3,360.50
--------------
Total tax:               $8,507.50

Summary:
--------
Gross income:           $60,000.00
Tax owed:               $8,507.50
Effective rate:         14.18%
Take-home pay:         $51,492.50

You're in the 22% tax bracket.
```

**Challenges:**
- Add different filing statuses (single, married, head of household)
- Include state taxes
- Calculate monthly take-home
- Show what each bracket pays in total
- Compare with flat tax rate

**Learning Focus:**
- Breaking down complex conditions
- How progressive systems work
- Accumulating results through conditions

---

### Day 4 (Monday, Oct 27) - Password Validator
**Goal**: String conditions and multiple checks

**New Concepts:**
- String comparison
- Character checking
- Multiple validation rules
- Strength rating system
- `&&` to require ALL conditions

**Exercise 4: Password Validator**
```
Create a password strength checker:

Requirements for Strong Password:
1. At least 8 characters long
2. Contains at least one uppercase letter
3. Contains at least one lowercase letter
4. Contains at least one number
5. Contains at least one special character (!@#$%^&*)

Rating System:
5/5 checks passed = Very Strong
4/5 checks passed = Strong
3/5 checks passed = Medium
2/5 checks passed = Weak
1/5 or 0/5 passed = Very Weak
```

**Example Output:**
```
Password Validator
==================
Enter password: MyP@ssw0rd

Checking password strength...

✓ Length requirement (10 chars)
✓ Has uppercase letters (M, P)
✓ Has lowercase letters (y, s, s, w, r, d)
✓ Has numbers (0)
✓ Has special characters (@)

Password Strength: Very Strong 🔒
All requirements met!

This password would take an estimated
1,000 years to crack.
```

**For now (without loops), check:**
- Length with `.length()` or `.size()`
- Check a few specific positions for character types
- We'll improve this with loops next month

**Challenges:**
- Suggest improvements for weak passwords
- Check against common passwords list
- Calculate estimated crack time
- Show which requirements are missing

---

### Day 5 (Tuesday, Oct 28) - Shipping Calculator
**Goal**: Complex decision trees

**New Concepts:**
- Nested if statements
- Multiple factors affecting outcome
- Decision trees
- Switch statement introduction

**Exercise 5: Shipping Calculator**
```
Create a shipping cost calculator:

Factors:
1. Package weight (kg)
2. Shipping distance (km)
3. Shipping speed (standard/express/overnight)
4. Destination (domestic/international)

Base Rates:
Standard:  $5 + $0.50 per kg
Express:   $10 + $1.00 per kg
Overnight: $20 + $2.00 per kg

Distance Multiplier:
0-100 km:   1.0x
101-500 km: 1.5x
501+ km:    2.0x

International: Add $15 flat fee

Rules:
- Free shipping over $100
- 10% discount for packages under 1kg
- Heavy packages (>20kg) add $10
```

**Example Output:**
```
Shipping Cost Calculator
========================
Package weight (kg): 3.5
Distance (km): 250
Speed (1=Standard, 2=Express, 3=Overnight): 2
Destination (1=Domestic, 2=International): 1

Calculation:
------------
Base express rate: $10.00
Weight charge: $3.50 (3.5kg × $1.00)
Distance multiplier: 1.5x (101-500km)
Subtotal: $20.25

Domestic shipping: $0.00
Heavy package fee: $0.00
Discount: $0.00
------------
Total Shipping: $20.25

Estimated delivery: 2-3 business days
```

**Switch Statement Introduction:**
```
Use switch for:
- Shipping speed selection
- Destination type selection
- Package handling options
```

**Challenges:**
- Add insurance options
- Include package dimensions (size surcharge)
- Add delivery time estimates
- Include package tracking number generation

---

### Day 6 (Wednesday, Oct 29) - Control Flow Mastery
**Goal**: Practice all control flow concepts

**Learning Exercises:**

**A. if/else Review**
```
Create "Number Analyzer"
Input: Any number
Output: Everything about it
- Positive, negative, or zero
- Even or odd
- Single digit, double digit, triple digit, etc.
- Prime or composite (simple check)
- Divisible by 3, 5, 10?
- Perfect square?
```

**B. Switch Statement Practice**
```
Create "Menu System"
Display menu with options:
1. Option A
2. Option B
3. Option C
4. Exit

Use switch to handle each option
Show difference between switch and if/else
```

**C. Nested Conditions**
```
Create "Game Character Stats"
Input: Character level (1-100)
Determine:
- Character class based on level ranges
- Unlock special abilities
- Access to areas
- Equipment that can be used

Level 1-10: Beginner
Level 11-30: Intermediate
Level 31-60: Advanced
Level 61-90: Expert
Level 91-100: Master

Each range has different abilities
```

**D. Ternary Operator Introduction**
```
Simple syntax: condition ? true_value : false_value

Examples:
age >= 18 ? "Adult" : "Minor"
score >= 60 ? "Pass" : "Fail"
temp > 30 ? "Hot" : "Cold"

Practice converting if/else to ternary
```

**E. Boolean Logic Puzzles**
```
Practice complex conditions:
(age >= 18 && age <= 65) && (income > 30000)
!(temp < 0 || temp > 40)
(isWeekend || isHoliday) && !isRaining

Create programs demonstrating:
- AND conditions (all must be true)
- OR conditions (at least one true)
- NOT conditions (opposite)
- Combinations
```

---

### Day 7 (Thursday, Oct 30) - Week 4 Consolidation
**Goal**: Master all control flow concepts

**Major Review Project: "Life Simulator - Decision Maker"**

Create a comprehensive decision-making program:

```
Life Decision Simulator
========================

1. Daily Routine Planner
   Input: Current time
   Determine: What should you be doing?
   - Sleeping (0-6)
   - Morning routine (6-8)
   - Work (8-17)
   - Free time (17-22)
   - Wind down (22-24)

2. Weather Activity Suggester
   Input: Temperature, conditions
   Suggest: Appropriate activities
   - Too cold (<0°C): Indoor activities
   - Cold (0-15°C): Warm clothing activities
   - Mild (15-25°C): Most activities
   - Hot (25-35°C): Water activities
   - Too hot (>35°C): Stay indoors

3. Budget Advisor
   Input: Income, expenses, savings goal
   Advice: 
   - Can you afford purchase?
   - Should you save more?
   - Are you over budget?
   - Financial health status

4. Study Session Organizer
   Input: Available hours, difficulty
   Plan:
   - Break schedule
   - Focus time
   - Rest periods
   - Recommended techniques

5. Meal Suggestion
   Input: Time of day, hunger level, dietary restrictions
   Suggest:
   - Appropriate meal type
   - Portion recommendations
   - Healthy choices
```

**Integration Requirements:**
- Use if/else for most logic
- Use switch for menu/category selection
- Use nested conditions for complex decisions
- Use boolean logic for multiple factors
- Include ternary operators where appropriate

**Example Interaction:**
```
Life Decision Simulator
=======================
What do you need help with?
1. Daily Routine
2. Weather Activities
3. Budget Advice
4. Study Plan
5. Meal Suggestion
6. Exit

Choice: 3

Budget Advisor
==============
Monthly income: $3000
Monthly expenses: $2200
Savings goal: $5000
Considering purchase of: $400

Analysis:
---------
Current situation:
✓ Income exceeds expenses
✓ Saving $800/month
✓ 6.25 months to goal

Purchase impact:
⚠ Purchase is 50% of monthly savings
✓ Still within budget
✓ Will delay goal by 15 days

Recommendation: PROCEED WITH CAUTION
You can afford this, but it will slow
your progress toward your savings goal.
```

---

## Month 1 Capstone Projects (October 31 - November 2)

### Capstone Project 1: Point of Sale (POS) System

**Time Allocation:** 6-8 hours over 2 days

**Project Description:**
Create a complete point-of-sale system for a retail store.

**Required Features:**

1. **Item Entry System**
   - Enter item name
   - Enter item price
   - Enter quantity
   - Minimum 3 items, maximum 10 items
   - Store all items

2. **Calculations**
   - Subtotal (sum of all items)
   - Tax calculation (8% default, user can change)
   - Discount system:
     - Discount codes: "SAVE10" (10% off), "SAVE20" (20% off), "SAVE30" (30% off)
     - Discount applied BEFORE tax
   - Final total

3. **Payment Processing**
   - Multiple payment methods:
     - Cash
     - Credit Card
     - Debit Card
   - If cash: calculate change
   - If card: just show total paid

4. **Receipt Generation**
   - Professional formatted receipt
   - Itemized list
   - All calculations shown
   - Date and time (just input current, we'll automate later)
   - Store information
   - Thank you message

5. **Input Validation**
   - No negative prices
   - No negative quantities
   - Valid discount codes only
   - Valid payment method

**Example Output:**
```
================================
        RETAIL STORE POS
================================
Date: October 31, 2025
Time: 14:30

Item Entry
----------
Item 1
Name: Laptop
Price: $999.99
Quantity: 1

Item 2
Name: Mouse
Price: $25.50
Quantity: 2

Item 3
Name: Keyboard
Price: $75.00
Quantity: 1

Add more items? (y/n): n

Enter discount code (or press enter): SAVE10

Select payment method:
1. Cash
2. Credit Card
3. Debit Card
Choice: 1

================================
          RECEIPT
================================
Store: Tech Emporium
Location: 123 Main St
Phone: (555) 123-4567
================================

Laptop x1           $999.99
Mouse x2              $51.00
Keyboard x1           $75.00
--------------------------------
Subtotal          $1,125.99
Discount (10%)     -$112.60
Subtotal           $1,013.39
Tax (8%)             $81.07
--------------------------------
TOTAL             $1,094.46
================================

Payment Method: Cash
Amount Paid:       $1,100.00
Change:               $5.54

Thank you for shopping!
Visit again soon!
================================
```

**Success Criteria:**
- All calculations correct
- Receipt formatting professional
- Input validation working
- Discount codes work properly
- Change calculated correctly
- Code is well-organized and commented

**Extensions (Optional):**
- Save receipt to file
- Multiple discount codes (stack them)
- Item lookup by SKU
- Inventory tracking
- Customer loyalty program

---

### Capstone Project 2: The Lost Treasure - Text Adventure

**Time Allocation:** 6-8 hours over 2 days

**Project Description:**
Create an interactive text-based adventure game.

**Required Features:**

1. **Game Setup**
   - Player name input
   - Character stats:
     - Health (starts at 100)
     - Gold (starts at 0)
     - Inventory (can hold 5 items)
     - Items found (starts at 0/3 treasures needed)

2. **Game World**
   - Minimum 5 different locations:
     - Starting Village
     - Dark Forest
     - Mountain Path
     - Ancient Cave
     - Lost Temple
   
3. **Game Mechanics**
   - At each location, give 2-3 choices
   - Choices affect:
     - Health
     - Gold
     - Items
     - Location movement
   - Random events (use simple randomization)
   - Combat encounters
   - Item discoveries

4. **Inventory System**
   - Collect items (max 5)
   - Use items (healing potions, keys, etc.)
   - Drop items if inventory full
   - View inventory anytime

5. **Combat System**
   - Simple turn-based
   - Player attack (deals 20-30 damage)
   - Enemy attack (deals 10-25 damage)
   - Use items during combat
   - Win: get gold and possibly item
   - Lose: lose health

6. **Win/Lose Conditions**
   - Win: Find all 3 treasure pieces
   - Lose: Health reaches 0
   - Multiple endings based on choices

7. **Game Flow**
   - Clear descriptions
   - Player choices
   - Consequences shown
   - Stats always visible
   - Can save and quit (just display game state)

**Example Gameplay:**
```
================================
     THE LOST TREASURE
================================
Enter your name, brave adventurer: Alex

Welcome, Alex!
You are a treasure hunter seeking
the legendary Lost Treasure, split
into three pieces and hidden across
dangerous lands.

================================
Character Status:
Health: 100/100 ❤️
Gold: 0 💰
Items: 0/5 🎒
Treasures: 0/3 ⭐
================================

You stand in the Village Square.
An old map in your hand shows the
treasure pieces are scattered in:
- The Dark Forest
- The Mountain Caves
- The Lost Temple

A mysterious merchant approaches:
"Gold for a Health Potion? Only 50 gold!"

What do you do?
1. Explore the Dark Forest
2. Head to the Mountains
3. Try to bargain with merchant
4. Check your inventory
5. Rest at the inn (costs 10 gold, restores 20 health)

Choice: 1

================================
      🌲 DARK FOREST 🌲
================================
You enter the shadowy forest.
Strange sounds echo through the trees.
Suddenly, a Wild Goblin appears!

Goblin (HP: 50)
- Rusty dagger
- 30 gold

What do you do?
1. ⚔️ Attack the goblin
2. 🏃 Try to flee
3. 🎒 Use item
4. 💰 Try to bribe (requires 20 gold)

Choice: 1

You swing your sword!
💥 You dealt 25 damage!
Goblin HP: 25/50

The goblin attacks!
💥 You took 15 damage!
Your HP: 85/100

What do you do?
1. ⚔️ Attack again
2. 🏃 Try to flee
3. 🎒 Use item

Choice: 1

You swing your sword!
💥 Critical hit! 30 damage!
Goblin HP: 0/50

🎉 Victory!
You gained:
- 30 gold 💰
- Health Potion 🧪
- Small key 🔑

================================
Character Status:
Health: 85/100 ❤️
Gold: 30 💰
Items: 2/5 🎒
  - Health Potion
  - Small key
Treasures: 0/3 ⭐
================================

Deeper in the forest, you find
a mysterious chest locked with
a small keyhole...

You have a small key!

Open the chest?
1. Yes, use the key
2. No, keep exploring
3. Return to village

Choice: 1

✨ You open the chest! ✨

Inside you find:
🏆 FIRST TREASURE PIECE! 🏆
💰 100 gold!
🗡️ Iron Sword (upgrades attack!)

================================
Character Status:
Health: 85/100 ❤️
Gold: 130 💰
Items: 3/5 🎒
  - Health Potion
  - Iron Sword (equipped)
  - Empty key
Treasures: 1/3 ⭐
================================

One treasure down, two to go!

Where next?
1. Continue through forest (might find more items)
2. Head to the Mountains
3. Travel to Lost Temple
4. Return to village (sell items, buy supplies)

Choice: 2

(Game continues...)
```

**Success Criteria:**
- Game is playable from start to finish
- All choices lead to consequences
- Combat system works
- Inventory management works
- Multiple paths through game
- Win and lose conditions work
- Stats are tracked correctly
- Game is engaging and fun

**Extensions (Optional):**
- More locations
- More enemy types
- Puzzle solving
- Hidden treasures
- Character classes (warrior, mage, rogue)
- Equipment system
- Save game to file
- Different difficulty levels

---

## Month 1 Complete - What You've Learned

### Technical Skills Acquired:
✅ C++ development environment setup  
✅ Basic syntax and program structure  
✅ Variables and data types (int, double, char, string, bool)  
✅ Input and output (cin, cout)  
✅ Arithmetic operators (+, -, *, /, %, ++, --)  
✅ Comparison operators (==, !=, <, >, <=, >=)  
✅ Logical operators (&&, ||, !)  
✅ Control flow (if, else, else if, switch)  
✅ Boolean logic and conditions  
✅ Type conversion and casting  
✅ Basic calculations and formulas  
✅ Input validation basics  
✅ String operations  
✅ Program design and organization  
✅ Comments and documentation  
✅ Debugging simple errors  

### Projects Completed:
📊 **20 Mini Projects**  
🏆 **2 Capstone Projects**  
📝 **Total: 22 Projects**

### Weekly Breakdown:
- **Week 1**: 5 mini projects (Getting Started)
- **Week 2**: 5 mini projects (Variables & Data Types)
- **Week 3**: 5 mini projects (Operators & Basic I/O)
- **Week 4**: 5 mini projects (Control Flow)
- **Capstone**: 2 major projects (POS System + Text Adventure)

### Concepts Mastered:
- Sequential programming
- Decision making
- Data manipulation
- User interaction
- Calculations and formulas
- Input validation
- Output formatting
- Problem decomposition

### Time Investment:
- **Daily practice**: 2-3 hours (Mon-Fri)
- **Weekend projects**: 4-5 hours (Sat-Sun)
- **Total for Month 1**: ~70-80 hours

### Preparation for Month 2:
You're now ready to learn:
- Loops (for, while, do-while)
- Functions and modular programming
- Arrays and data structures
- More complex program structures

### Self-Assessment Checklist:
Before moving to Month 2, ensure you can:
- [ ] Write and compile a C++ program independently
- [ ] Declare and use variables of different types
- [ ] Get input from users and validate it
- [ ] Display formatted output professionally
- [ ] Perform calculations and use formulas
- [ ] Use if/else statements correctly
- [ ] Combine conditions with logical operators
- [ ] Use switch statements appropriately
- [ ] Validate user input effectively
- [ ] Debug common compilation errors
- [ ] Organize code with proper comments
- [ ] Build small programs from scratch

### Common Mistakes to Avoid:
❌ Missing semicolons at end of statements  
❌ Forgetting to include necessary headers  
❌ Using = instead of == for comparison  
❌ Not initializing variables before use  
❌ Integer division when you need decimal results  
❌ Forgetting break in switch statements  
❌ Not validating user input  
❌ Poor variable naming  
❌ Lack of code comments  
❌ Not testing edge cases  

### Tips for Success:
💡 **Practice Daily**: Even 30 minutes helps  
💡 **Type Code Manually**: Don't copy-paste  
💡 **Understand, Don't Memorize**: Know why, not just what  
💡 **Debug Intentionally**: Create errors to learn  
💡 **Comment Your Code**: Explain your thinking  
💡 **Test Edge Cases**: What if user enters 0? Negative? Very large?  
💡 **Ask Questions**: Use online resources when stuck  
💡 **Review Previous Code**: Look back at earlier projects  
💡 **Build Portfolio**: Keep all your projects organized  
💡 **Celebrate Progress**: You've learned a lot!  

### Resources Used This Month:
📚 **Concepts**: Basic C++ syntax, variables, operators, control flow  
🛠️ **Tools**: IDE/Compiler, text editor, debugging tools  
🌐 **References**: cppreference.com, learncpp.com  
👥 **Community**: Stack Overflow, Reddit (r/cpp_questions)  

### Looking Ahead to Month 2:
Next month you'll learn:
- **Loops**: Repeating tasks efficiently
- **Functions**: Organizing code into reusable pieces
- **Arrays**: Working with collections of data
- **Advanced Problem Solving**: More complex programs

### Motivational Note:
🎉 **Congratulations on completing Month 1!**

You've gone from knowing nothing about C++ to building complete programs with user interaction, calculations, and decision-making logic. You've completed 22 projects and written hundreds of lines of code.

This is a solid foundation. Everything you learn from now on builds on what you've mastered this month. Keep up the momentum, stay consistent, and remember: every expert programmer started exactly where you are now.

**You're 1/12 of the way to becoming a junior C++ developer!**

---

## Next Steps

### To Continue:
1. Review any concepts you're still unsure about
2. Redo any projects that were challenging
3. Start Month 2: Loops & Functions
4. Keep all your Month 1 code organized in a GitHub repository

### To Review Month 1:
- Revisit the weekly consolidation projects
- Try the capstone projects again from scratch
- Help someone else learn what you've learned
- Write a blog post about your learning journey

### To Prepare for Month 2:
- Read about for loops and while loops
- Watch a video on functions
- Think about how to organize code better
- Brainstorm projects you want to build
