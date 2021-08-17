# Everything about the strings you need to know to get started in python

message = 'Hello World'
print(message)

# prints length of message 
print(len(message))

"""
message1 = 'Spark's World'
print(message1)
"""
# it will give error

# we can resolve this error by either using " " or """ """ or escape(\)
message2 = 'Spark\'s World'
print(message2)

message3 = "Spark's World"
print(message3)

message4 = """"Hi folks,
I am Parth Shingari!"""
print(message4)

# it will print "Hello"
print(message[0:5])

# prints "World"
print(message[6:])

# all lowercase 
print(message.lower())

# all uppercase 
print(message.upper())

# .count method -> takes arg as what we want to count
print(message.count("Hello"))

print(message.count("l"))

# .find method -> takes argument as word whose location we want to find
print(message.find('World'))

print(message.find("Universe"))
# it will give -1, if word is not there

# .replace method -> takes two arguments. first one which we want to replace and other with which we want to replace it.
message = message.replace("World", "Universe")
print(message)

greeting = "Hello"
name = "Parth"

# string concatenation
greeting_message = greeting + ", " + name
print(greeting_message)

# string formatting
greet_message = '{}, {}. Welcome!'.format(greeting, name)
print(greet_message)

# In python 3.6 or higher, we use f-strings 
my_greeting = f'{greeting}, {name.upper()}. Welcome!'
print(my_greeting)

"""
print(dir(name))
-> all the methods associated with "name" variable names will be displayed
print(help(str))
-> detailed info of each method we can use with strings will be displayed
print(help(str.lower))
-> detailed info of specific method will be displayed
"""