#!/usr/bin/evn perl

use strict;

#my $passwd_char = '+/;<>' . '1234567890' . 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' . 'abcdefghijklmnopqrstuvwxyz';
my $passwd_char = '1234567890' . 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' . 'abcdefghijklmnopqrstuvwxyz';

my $len = 8;
my $passwd = "";
my $size = length($passwd_char);
for(my $n = 0; $n < $len; $n++) {
  $passwd .= substr($passwd_char, int(rand($size)), 1);
}
print "$passwd\n";
