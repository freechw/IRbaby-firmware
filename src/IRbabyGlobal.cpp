#include "IRbabyGlobal.h"
#include "defines.h"

StaticJsonDocument<1024> recv_msg_doc;
StaticJsonDocument<1024> send_msg_doc;
StaticJsonDocument<1024> udp_msg_doc;
StaticJsonDocument<1024> mqtt_msg_doc;

WiFiManager wifi_manager;
WiFiClient wifi_client;

uint8_t ir_send_pin = T_IR;
uint8_t ir_receive_pin = R_IR;

#ifdef USE_RF
uint8_t rf315_send_pin = T_315;
uint8_t rf315_receive_pin = R_315;
uint8_t rf433_send_pin = T_433;
uint8_t rf433_receive_pin = R_433;
#endif