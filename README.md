# pedestrian_counter
<pre>
This program uses pedestrian data (of different parks of Melbourne, in this case) to produce
relevant stats and a barchart illustration.

Run in terminal: ./pedestrian_counter.exe "rainfall amount" < "data file"

Input : TSV file containing tree data.
        1. yy       - Year
        2. mm       - Month
        3. dd       - Day
        4. day      - Sunday:1, Monday:2, and so on. Days of the week.
        5. daycount - total number of pedestrians that day

Output: 1. Total lines of the data file. First and last dates.
        2. Number of days between first and last dates. Number of days recorded (assuming no duplicates)
        3. Average pedestrians per month. Days recorded of that month (can be used to look for missing days).
        4. Total data divided into three approximately equal groups.
           Barchart of pedestrians in respect to days of the week.

Author  - Gazi Mufti Mahmood
Date    - 21/05/2018
</pre>
