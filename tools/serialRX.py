import serial
import crc8
ser = serial.Serial()
ser.baudrate = 1700000
ser.port = "COM3"
ser.open()
ser.reset_input_buffer()

hash = crc8.crc8()


while (True):
    bytes_read = ser.read(65532)
    #bytes_read = ser.read(12)
    print("bytes read: ", str(len(bytes_read)))
    
    sum = 0
    for idx, val in enumerate(bytes_read):
        if idx % 4 == 0:
            #print(bytes([bytes_read[idx],bytes_read[idx+1],bytes_read[idx+2],bytes_read[idx+3]]).hex())
            #if idx >= 7:
            #    print("exiting")
            #    exit()
            hash.update(b'\x56' + bytes([bytes_read[idx+1],bytes_read[idx+2],bytes_read[idx+3]]))
            if hash.digest() == bytes([bytes_read[idx]]):
                val = int.from_bytes(bytes_read[idx+1:idx+4],'little',signed=True) -158763
                print(val)
                sum += val

            else: 
                print(hash.digest().hex(), bytes([bytes_read[idx]]).hex())
                print(bytes([bytes_read[idx+1],bytes_read[idx+2],bytes_read[idx+3]]).hex())
                exit()
    print (float(sum)/float(65532))
        #if b not in [65,66,67,68]:
            #print("data error")
        
