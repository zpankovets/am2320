#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h> 
#include <linux/i2c-dev.h>
#include <unistd.h>
#include <stdint.h>

int get_sensor_data();
int16_t get_temp();
uint8_t get_humi();





