/* print_string - function that takes a va_list and then gets the va-arg and
 * then prints it character
 * @count: the pointer to the count of the printed integers
 * @args: the variable arg list
 */
void print_string(int *count, va_list args)
{
        char *string;

        string = va_arg(args, char *);

        while (*string != '\0')
        {
                _putchar(*string);
                string++;
                (*count)++;
        }
}
/**
 * print_percent - function that prints the percentage sign
 * @count: the number of characters
 * @args: the var arg list
 */
void print_percent(int *count, va_list args)
{
        (void)args;
        _putchar('%');
        (*count)++;
}
