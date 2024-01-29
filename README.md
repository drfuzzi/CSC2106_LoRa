# LoRa Peer-to-Peer Communication Lab

## Objectives
- Familiarize with LoRa technology.
- Develop a LoRa-based peer-to-peer solution using Arduino and Cytron LoRa-RFM Shield.

## Equipment
- Computer / Laptop
- Maker Uno
- Cytron LoRa-RFM Shield

## Introduction
LoRa (Long Range) is an RF modulation technique designed for low-powered wireless communication systems, offering large transmission ranges (up to 16 kilometers in rural areas) due to its use of lower frequencies compared to standard wireless methods like Wi-Fi. It's ideal for battery-powered IoT devices in applications requiring communication over long distances. LoRa networks uses a peer-to-peer topology that can be scalable and operate in the license-free ISM frequency band, making it a cost-effective solution for IoT applications. This lab aims to provide hands-on experience with LoRa devices in a peer-to-peer (P2P) configuration, highlighting its potential in IoT applications.

## Exercise 1: LoRa Peer-to-Peer Communication
In this exercise, we will use Maker UNO and Cytron LoRa-RFM Shield to build a LoRa-based end node for data exchange in a peer-to-peer setup. We'll create a transmitter node broadcasting LoRa payloads and a receiver node to display this data on a serial monitor.

Ensure that the Maker UNO is connected to the Cytron LoRa-RFM Shield, as shown below.

![image](https://github.com/drfuzzi/CSC2106_LoRa/assets/108112390/f055a011-a423-4d66-b4d8-301729773361)

![image](https://github.com/drfuzzi/CSC2106_LoRa/assets/108112390/37535a86-b00b-4470-b5b9-013846fc0806)

### Setup
1. **Arduino IDE Setup**
   - Download and install Arduino IDE (preferably version 1.8x).
   - Install the [CH341 Serial Driver](https://www.wch.cn/downloads/CH341SER_ZIP.html) for Maker UNO.
   - Install the the [open-source library](https://github.com/PaulStoffregen/RadioHead) RadioHead by Paul Stoffregen. This will allow us to send and receive data using LoRa-based radios.
   - In Arduino IDE, select `Tools > Board > Arduino Uno`.
   - Connect the Arduino to the USB port and select the correct Serial Port under `Tools > Port`.

2. **Programming LoRa Communication**
   - Use provided examples ([`rf95_rx.ino`](rf95_rx.ino) for Receiver and [`rf95_tx.ino`](rf95_tx.ino) for Transmitter) for programming the nodes.
   - Verify and upload the sketches to the respective devices. Look for the "Done uploading" message in the IDE.

3. **Operation**
   - Start the Transmitter Node and open the Serial Monitor to observe the output.
   - On the Receiver Node, open the Serial Monitor and set to 9600 baud to see the incoming data.

## Lab Assignment
1. **OLED Display Integration**
   - Display the following information on the OLED for both LoRa Receiver & Sender:
     - "Setup Successful"
     - "Setup Failed"
     - "Sending Message"
     - "Waiting for Reply"
     - “Message Received”
   - Refer to “Lab 3 - ssd1306_i2c.ino” for OLED display implementation. Install the “Adafruit SSD1306” library first.

2. **Enhance Peer-to-Peer Reliability**
   - Implement features to prevent crosstalk traffic interference, e.g., ACK and retransmit.

3. **Improve Message Protocol**
   - Develop ID-based messaging with a header, payload, and checksum supporting at least three devices. Include simple message filtering based on the node's ID.

## References
1. [SemTech's LoRa Technology Overview](https://www.semtech.com/lora/what-is-lora)
2. [Building a LoRa-based Device with Arduino](https://www.semtech.com/developer-portal)
3. [CH341 Serial Driver](https://www.wch.cn/downloads/CH341SER_ZIP.html)
