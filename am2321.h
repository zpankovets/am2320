#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h> 
#include <linux/i2c-dev.h>
#include <unistd.h>
#include <stdint.h>

int get_sensor_data();
float get_temp();
float get_humi();





