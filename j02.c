// references
// 
// - http://i.paysdu42.fr/

// types
// 
// - char:	1 byte 
// - int:	4 bytes
//


// vocabulary
//
// - variable, function, argument/parameter, type
// - function prototype or signature:
//			int				 		 sum(int a, int b)
//           ^                        ^    
//	(<return_value_type>   <function_name>(<arg1_type> <arg1_name>, ...))
//
// - return value & type
//

// notions
//
// - a function takes parameters
// - a function can return data (typed) or nothing (void)
// - a function manipulates data, commonly transforms arguments and return a result (eg. sum)


#include <unistd.h>


int		ft_return_42(void) { return (42); }
int		ft_return_n(int n) { return (n); }
char	ft_return_char_z(void) { return ('z'); }
char	ft_return_c(char c) { return (c); }
void	ft_return_nothing(void) {}

int		sum(int a, int b) {	return (a + b); }

// notions
//
//	- ascii, a char is a value between -128 & 127 (eg. 'a' == 97)
//
//


// notions
//
//	- conditions
//  - comparision operators (==, !=, <, <=, >, >=)
//	- conditionnal chaining (&&, ||)
//

int		ft_is_42(int n) { return (n == 42); }
int		ft_is_not_42(int n) { return (n != 42); }
int		ft_is_greater_than_42(int n) { return (n > 42); }
int		ft_is_greater_or_equal_than_42(int n) { return (n >= 42); }
int		ft_is_lower_than_42(int n) { return (n < 42); }
int		ft_is_lower_or_equal_than_42(int n) { return (n <= 42); }

int		ft_is_minor(int age) { return (age < 18); }

// && AND
int		ft_is_able_to_join_42(int age) { return (age >= 18 && age <= 30); }
int		ft_can_be_saved_in_a_char(int n) { return (n >= -128 && n <= 127); }
int		ft_is_beetween(int n, int a, int b) { return (n >= a && n <= b); }

// || OR

// !  NOT

// ^  XOR

int		ft_is_negative(int n) { return (n < 0); }

