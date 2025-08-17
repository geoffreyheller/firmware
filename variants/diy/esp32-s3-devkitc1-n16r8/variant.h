// DIY n16r8 with Ebyte E22-900M30S


// TODO: Might want to try using SERIAL1 GPIO 17 & 18

// Buttons
#define BUTTON_PIN 0 // Use the BOOT button as the user button

// I2C: Default pins in the Arduino framework are
// gpio.9 SCL
// gpio.8 SDA
#define I2C_SCL 9
#define I2C_SDA 8

// Screen (disabled)
#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

// GPS
#define HAS_GPS 0

// LoRa
#define USE_SX1262 // E22-900M30S, E22-900M22S, and E22-900MM22S (not E220!) use SX1262

#define SX126X_MAX_POWER 22          // SX126xInterface.cpp defaults to 22 if not defined, but here we define it for good practice
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V

// The SPI2 (VSPI) default pins are:
// gpio.12 SCK Defined as SPI0_SCK
// gpio.11 MOSI Defined as SPI0_MOSI
// gpio.13 MISO Defined as SPI0_MISO
// gpio.10 CSO Defined as SPI_CS0

#define SX126X_CS 10    // EBYTE module's NSS pin // FIXME: rename to SX126X_SS
#define SX126X_SCK 12   // EBYTE module's SCK pin
#define SX126X_MOSI 11  // EBYTE module's MOSI pin
#define SX126X_MISO 13  // EBYTE module's MISO pin
#define SX126X_RESET 40 // EBYTE module's NRST pin
#define SX126X_BUSY 41  // EBYTE module's BUSY pin
#define SX126X_DIO1 42  // EBYTE module's DIO1 pin

#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN 39

#define LORA_CS SX126X_CS     // Compatibility with variant file configuration structure
#define LORA_SCK SX126X_SCK   // Compatibility with variant file configuration structure
#define LORA_MOSI SX126X_MOSI // Compatibility with variant file configuration structure
#define LORA_MISO SX126X_MISO // Compatibility with variant file configuration structure
#define LORA_DIO1 SX126X_DIO1 // Compatibility with variant file configuration structure
