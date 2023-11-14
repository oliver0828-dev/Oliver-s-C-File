# Attendance Tracker

This C++ program allows users to input attendance details for a class. It prompts the user to input the number of students and then record each student's name along with their attendance status (absent, late, or present).

## Requirements
- C++ compiler

## How to Use
1. **Clone the Repository:**
   ```
   git clone https://github.com/yourusername/attendance-tracker.git
   ```

2. **Compile the Code:**
   ```
   g++ attendance_tracker.cpp -o attendance_tracker
   ```

3. **Run the Program:**
   ```
   ./attendance_tracker
   ```

4. **Follow the Instructions:**
   - Enter the total number of students in the class.
   - Input each student's name when prompted.
   - Enter their attendance status (absent/late/present) accordingly.

## Code Overview
- The program uses vectors to store the names of students and their respective attendance statuses.
- It takes user input to determine the number of students and records their details.
- Finally, it displays an attendance report showing each student's name along with their attendance status.

## Usage Example
```
How many students are in your class?: 3
Type in student #1 name: John Doe
Enter attendance status for John Doe [absent/late/present]: present
Type in student #2 name: Jane Smith
Enter attendance status for Jane Smith [absent/late/present]: absent
Type in student #3 name: Alex Johnson
Enter attendance status for Alex Johnson [absent/late/present]: late
******************
Attendance report:
John Doe is present
Jane Smith is absent
Alex Johnson is late
```
