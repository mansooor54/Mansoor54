# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check_and_compile.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 11:14:46 by malmarzo          #+#    #+#              #
#    Updated: 2024/09/10 11:14:47 by malmarzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Check, compile, and run

echo "--------- CHECK, COMMPILE AND RUN" $1

echo "---------- MOULINETTE"

norminette -RCheckForbiddenSourceHeader "$1" | cat

echo "---------- GCC"

gcc -Wall -Wextra -Werror "$1" | cat

echo "---------- CHMOD"

chmod +x a.out

echo "---------- EXECUTE"

./a.out
