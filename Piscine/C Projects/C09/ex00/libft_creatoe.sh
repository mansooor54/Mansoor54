# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creatoe.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 06:59:03 by malmarzo          #+#    #+#              #
#    Updated: 2024/09/10 06:59:51 by malmarzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete
