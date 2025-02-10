puts "check whether a string is palendrome or not"
puts "enter a string"

string = gets.chomp
if string == string.reverse
  puts "yes the give string #{string} is palindrome"
else
  puts "no the given string #{string} is not palindrome"
end
