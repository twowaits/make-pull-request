import random
import string
    
def rand_pass(size):
        
    # Takes random choices from
    # ascii_letters and digits
    generate_pass = ''.join([random.choice( string.ascii_uppercase + string.ascii_lowercase + string.digits)
     for n in range(size)])
                            
    return generate_pass
    
password = rand_pass(10)
print(password)
