Python code to illustrate the working of MD 5 algorithm to generate hexadecimal equivalent
import hashlib 
#input string
string = "codespeedy.com"
# encoding the string using encode()  
en=string.encode()
# passing the encoded string to MD5
hex_result = hashlib.md5(en)
# printing the equivalent hexadecimal value 
print("The hexadecimal equivalent of hash is : ",hex_result.hexdigest())