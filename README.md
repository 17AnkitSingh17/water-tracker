# Water Camper Tracker

This tool helps security guards track the daily inventory of 20L water campers. It reads a CSV file of daily actions and outputs the current number of full and empty bottles to prevent inventory loss.

### How to Run
1. Install a C++ compiler (like g++ or MinGW).
2. Open the terminal in this folder.
3. Compile the code: `g++ tracker.cpp -o tracker`
4. Run the tool: `./tracker` (Mac/Linux) or `tracker.exe` (Windows)

### Real Output as per current data.csv
--- WATER CAMPER INVENTORY REPORT ---
Current Full Bottles Available: 30
Current Empty Bottles (to return): 6
-------------------------------------

### What it gets wrong
Currently, the tool assumes all inputs are perfectly typed. If the guard makes a spelling mistake in the CSV (like typing "Stadent" instead of "Student"), the program will ignore that row. It also does not account for bottles that might be broken or leaking.

### Video Demonstration
[https://drive.google.com/file/d/1rCcjhlx27BRqY8auiYM9c0ZwpsYNJTCF/view?usp=sharing]