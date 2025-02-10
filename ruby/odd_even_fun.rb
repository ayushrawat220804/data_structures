puts "check whether a give number is even or odd "
puts "enter the number"

nums= gets.chomp.to_i

if nums.even?
  puts "the given integer #{nums} is even"
else
  puts "the give integer #{nums} is odd"
end
