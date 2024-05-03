# Remove K Digits from a Number

This algorithm removes k digits from a given number while ensuring that the resulting number is the smallest possible. It achieves this by using a stack data structure.

## Problem Statement

Given a string representation of a non-negative integer num and an integer k, you need to remove k digits from the number so that the new number is the smallest possible.

## Algorithm Explanation

1. **Function Description:** `string removeKdigits(string num, int k)`
   - This function takes a string `num` representing a non-negative integer and an integer `k` specifying the number of digits to remove.
   - It returns the smallest possible integer after removing `k` digits.

2. **Stack Initialization:** Initialize a stack `st` to store digits.

3. **Iterate Through the Number:**
   - Loop through each digit of the input number.
   - If `k <= 0`, push the digit onto the stack.
   - If the stack is empty, push the digit onto the stack.
   - If `k > 0` and the top of the stack is greater than the current digit, pop elements from the stack until either the stack is empty, `k` becomes 0, or the top of the stack is less than or equal to the current digit.
   - Push the current digit onto the stack.

4. **Remove Remaining Digits:** After the loop, if there are still remaining digits to be removed (`k > 0`), pop elements from the stack until `k` becomes 0.

5. **Construct the Resulting Number:**
   - Construct the resulting number by popping digits from the stack and appending them to a string `ans`.
   - Reverse the string `ans` to get the correct order of digits.
   - Remove leading zeros from the resulting number.

6. **Return the Result:** Return the resulting number.

## Code Explanation

- The `main()` function demonstrates an example usage of the `removeKdigits` function.
- It removes 3 digits from the number "1432219" to get the smallest possible number, which is "1219".

## Example Usage

You can use this algorithm to find the smallest possible number after removing digits from a given number.
