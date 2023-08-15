/*
 * File: is_lower.c
 * Author: Your Name
 * Description: A function to check if a character is lowercase.
 */

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    /**
     * ASCII values for lowercase letters range from 'a' (97) to 'z' (122).
     * Check if the provided character falls within this range.
     */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
