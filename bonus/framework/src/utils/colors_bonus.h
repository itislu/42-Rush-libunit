/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:58:58 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 15:59:28 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET "\033[0m"			// Reset all attributes
#define BOLD "\033[1m"			// Bold / increased intensity
#define DIM "\033[2m"			// Faint / decreased intensity
#define ITALIC "\033[3m"		// Italic (not universally supported)
#define UNDERLINE "\033[4m"		// Underline
#define BLINK_SLOW "\033[5m"	// Blink(slow) (not universally supported)
#define BLINK_FAST "\033[6m"	// Blink(rapid) (not universally supported)
#define INVERSE "\033[7m"		// Swap foreground / background
#define HIDDEN "\033[8m"		// Conceal / hidden text
#define STRIKETHROUGH "\033[9m"	// Strike - through

// 8 base ANSI colors
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
