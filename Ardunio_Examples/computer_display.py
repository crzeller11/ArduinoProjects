# This program runs a display where the user is told to enter a password, "spacetime," and if the correct password
# is entered, or if the enter button is pressed, a signal is sent to an arduino to run the ball drop
import serial, time
stop = "TERMINATE PROGRAM"

password_entry = 'temp'
while password_entry != stop:
    password_entry = input("                                Please enter the password: ")
    if password_entry == stop:
        print("program has been terminated.")
        break
    if password_entry:
        print("Please proceed to Ball Drop...")
        time.sleep(3) # pauses before query is reset
        # send signal to arduino
        #ser = serial.Serial('/dev/cu.usbmodem1411', 9600)
        #ser.write(1)
        print('\n~' * 100) # just prints a ton of blank lines so next user won't see the previous password entry



