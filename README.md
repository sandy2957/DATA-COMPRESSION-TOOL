# DATA-COMPRESSION-TOOL                     

*COMPANY*: CODTECH SOLUTIONS

*NAME*: T.SANTHIYADEVI

*INTERN ID*: CT04DH427

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

* MENTOR*: NEELA SANTOSH

For Task 4 of my internship with CodTech, I was assigned to implement a simple data compression algorithm using Run-Length Encoding (RLE) in C. This was a very interesting and practical task, as compression is an essential technique used in everything from file storage to internet data transfer. The purpose of this task was to write a program that compresses and decompresses data using RLE, a basic lossless compression method.

Before coding, I learned how RLE works. The main idea of RLE is to replace sequences of repeating characters with a single character followed by the number of times it repeats. For example, the string "aaabbc" would be compressed as "a3b2c1". It’s simple but effective when there are lots of repeating characters.

I started by creating a C program that takes a string as input and compresses it using RLE. I used a for loop to iterate through the string, counted the occurrences of each character, and then printed the character followed by its count. I made sure that the output was a valid compressed form of the input string.

Once the compression part was working properly, I implemented the decompression logic too. This part reads a compressed string (like "a3b2c1") and reconstructs the original string by repeating each character according to the count next to it. I used character and digit separation logic to identify what to repeat and how many times.

I also added input validation to make sure the user enters a valid string. In the compression function, I handled both lowercase and uppercase characters correctly. In decompression, I made sure to interpret multi-digit counts (like "a12") accurately.

Throughout this task, I paid attention to writing clean, modular code by using separate functions for compression and decompression. I used simple string and loop logic without relying on any advanced libraries, which helped me practice writing efficient C code from scratch.

To test the program, I tried several inputs such as "aaaaabbbbcc", "abcde", and "wwwwaaadexxxxxx". The output showed the correct compressed and decompressed results, which confirmed that the algorithm worked properly in both directions.

This task taught me the importance of thinking algorithmically. Even though RLE is a basic method, implementing it manually helped me understand how real-world compression tools might work behind the scenes. It also improved my ability to work with character arrays, loops, and conditional logic in C.

In addition to learning a useful compression technique, I also gained confidence in building programs that simulate real-life applications. I made sure to include comments in the code and used clear naming conventions for better readability.

Overall, completing Task 4 was a rewarding experience. It wrapped up the internship tasks with a solid example of applied programming. I now feel much more comfortable with algorithm design, string processing, and file handling, and I look forward to applying these skills in more complex projects ahead.
