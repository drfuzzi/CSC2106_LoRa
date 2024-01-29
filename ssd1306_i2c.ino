// ssd1306_i2c
// This is an simple example for Monochrome OLEDs based on SSD1306 drivers
// The following functions are used in this example
// - display.clearDisplay()   : all pixels are off
// - display.setTextSize(n)   : set the font size, supports sizes from 1 to 8
// - display.setCursor(x,y)   : set the coordinates to start writing text
// - display.print(“message”) : print the characters at location x,y
// - display.display()        : call this method for the changes to make effect

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 32  // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() 
{
  Serial.begin(9600);
  delay(100);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address or 0x3D for
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
    {
        delay(1000);
    }
  }
  // Setup oled display
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 0);     // Start at top-left corner

  // Simple text
  display.clearDisplay();
  display.println("Hello, World!");
  display.display();
  delay(2000);
}
 
void loop()
{
}