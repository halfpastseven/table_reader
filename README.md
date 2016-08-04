# table_reader
A class to read tabulated data into columns and parse into interger/long and float/double types.

Features:
1. Read tabulated data, with data separated by tab ('\t'), comma(',') or space (' ')
2. Allow extraction of column headers automatically from the file, skip initial lines and read certain number of lines if defined.
3. Handle incomplete lines, empty lines, excessive lines, and return a default (0) number in case of parsing failure
4. Skip empty lines by default, so there is no worries about whether to start a new line at the end of the input file.
5. Direct output string values by subscript operator []

Future work:
* Add unicode support
