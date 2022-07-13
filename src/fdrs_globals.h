/*  FARM DATA RELAY SYSTEM
*
*  "fdrs_globals.h"
*
*  Developed by Timm Bogner (timmbogner@gmail.com) for Sola Gratia Farm in Urbana, Illinois, USA.
*/

#ifndef FDRS_GLOBALS
#define FDRS_GLOBALS

#ifndef FDRS_GLOBAL_WIFI
#define FDRS_GLOBAL_WIFI
#define GLOBAL_SSID "Your SSID"
#define GLOBAL_PASS "Password"
#endif FDRS_GLOBAL_WIFI


#ifndef FDRS_GLOBAL_MQTT
#define FDRS_GLOBAL_MQTT
#define GLOBAL_MQTT_ADDR "192.168.0.8"
#endif FDRS_GLOBAL_MQTT


#ifndef FDRS_GLOBAL_MQTT_AUTH
#define FDRS_GLOBAL_MQTT_AUTH
//#define GLOBAL_MQTT_AUTH   //uncomment to enable MQTT authentication 
#define GLOBAL_MQTT_USER   "Your MQTT Username"
#define GLOBAL_MQTT_PASS   "Your MQTT Password"
#endif FDRS_GLOBAL_MQTT_AUTH


#ifndef FDRS_GLOBAL_LORA
#define FDRS_GLOBAL_LORA
#define GLOBAL_LORA_BAND 915E6 //LoRa Frequency Band
#define GLOBAL_LORA_SF 7  //LoRa Spreading Factor
#endif GLOBAL_LORA_BAND

#endif FDRS_GLOBALS
