print "Enter a string: "
str = gets.chomp # both upper and lower cases aeiouAEIOU or Aa to Zz
# str = gets.chomp.downcase - only for lowercase aeiou or a to z  
# str = gets.chomp.upcase - only for uppercase //   AEIOU or A to Z

vowel_count = str.count("aeiouAEIOU")
puts "Number of vowels: #{vowel_count}"
