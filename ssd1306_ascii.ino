#include <Wire.h>
#include "SSD1306Ascii.h"
#include "SSD1306AsciiWire.h"

// 0X3C+SA0 - 0x3C or 0x3D
#define I2C_ADDRESS 0x3C

// Define proper RST_PIN if required.
#define RST_PIN -1

SSD1306AsciiWire display;

//------------------------------------------------------------------------------
void setup() {
  // Initialize the I2C bus
  Wire.begin();
  // Optional: set a faster clock frequency
  // oled.set400kHz(); 

  // Initialize the display object
  // Use a display-specific type, e.g., &Adafruit128x64
  #if RST_PIN >= 0
    display.begin(&Adafruit128x64, I2C_ADDRESS, RST_PIN);
  #else 
    display.begin(&Adafruit128x64, I2C_ADDRESS);
  #endif 

  // Set the font (System5x7 is a common, built-in font)
  display.setFont(System5x7);
  
  // Clear the display buffer
  display.clear();
  
  // Print text to the display
  display.println("Hello world!");
  display.println(); // Newline

  // Demonstrate 2X size
  display.set2X();
  display.println("2X Demo");
  display.set1X(); // Reset to normal size
  display.println();

  // Print a long line to show truncation
  display.println("A long line may be truncated to fit the screen width.");
}

//------------------------------------------------------------------------------
void loop() {
  // Main loop can be used for updates or animation
}

