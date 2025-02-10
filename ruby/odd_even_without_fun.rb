puts "check whether a number is odd or even without using inbuilt function"

print "enter a integer : "
nums = gets.chomp.to_i

if nums % 2 == 0
  puts "#{nums} is even"
else
  puts "#{nums} is odd"
end
