/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osloboda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:39:04 by osloboda          #+#    #+#             */
/*   Updated: 2019/02/01 18:55:29 by osloboda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "stdarg.h"

# define RED(string) "\x1b[31m" string "\x1b[0m"
# define BRED(string) "\x1b[1;31m" string "\x1b[0m"
# define GREEN(string) "\x1b[0;32m" string "\x1b[0m"
# define BGREEN(string) "\x1b[1;32m" string "\x1b[0m"
# define YELLOW(string) "\x1b[0;33m" string "\x1b[0m"
# define BYELLOW(string) "\x1b[01;33m" string "\x1b[0m"
# define BLUE(string) "\x1b[0;34m" string "\x1b[0m"
# define BBLUE(string) "\x1b[1;34m" string "\x1b[0m"
# define MAGENTA(string) "\x1b[0;35m" string "\x1b[0m"
# define BMAGENTA(string) "\x1b[1;35m" string "\x1b[0m"
# define CYAN(string) "\x1b[0;36m" string "\x1b[0m"
# define BCYAN(string) "\x1b[1;36m" string "\x1b[0m"

typedef struct		s_float
{
	long			whole_part;
	long			wt;
	char			*str;
	int				i;
	int				index;
	int				digit;
	int				reminder;
	int				log_value;
	int				precision;
	long double		rst;
	long double		fraction_part;
	long double		tmp1;
	long double		tmp;
}					t_float;

char				*freedom(char *a, char *b);
int					ft_printf(const char *fmt, ...);
char				*cstr(char *arg, char*script, int ssize);
char				*ft_itoa_base(unsigned long long int va,
		unsigned int base, int uppercase, unsigned long long int n);
int					*check_flags(char **script,
		int *flags, char **arg, int *ssize);
char				*cre1(char *script,
		char *arg, int ssize, int *flags);
int					*get_flags(char **arg, int *flags,
		char *script, int ssize);
char				*fill(char *script, char *arg,
		int *flags, int ssize);
char				*ft_itoa2(long long int n);
char				*ft_itoa1(unsigned long long int n);
char				*dot(char *arg, char *script,
		int *precision, int ssize);
char				*di(va_list tr, char *script,
		long long int ret, int ssize);
char				*uox(va_list tr, char *script, int ssize);
char				*check_per(char *str);
double				pow(double a, double b);
char				*f_t_s(long double num, char *script);

#endif
