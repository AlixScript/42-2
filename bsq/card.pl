# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    card.pl                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 16:04:44 by ldalibar          #+#    #+#              #
#    Updated: 2022/07/25 16:05:14 by ldalibar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print "."; }
	}
	print "\n"; }
