puts "programme to find factorial of a number without builtin functions"
puts "enter a number to find its factorial : "
nums = gets.chomp.to_i

factorial = 1

for i in 1..nums
  factorial = factorial * i
end

puts "factorial of #{nums} is #{factorial}"