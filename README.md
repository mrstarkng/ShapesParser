# Shapes-Parser
## Video Demo:  <>
## Description of project:
A project that use Object oriented programming methodology to read all shapes that are stored inside the input file named shapes.txt

```
8
Square: a=12
Circle: r=17
Square: a=7
Rectangle: w=3, h=4
Rectangle: w=6, h=8
Circle: r=5
Square: a=8
Rectangle: w=4, h=23
```
The first line is the total shapes that are in the file.


 Print out all the shapes
 ```
Reading shapes.txt...
Found 8 shapes
1. Square: Side=12
2. Circle: Radius=17
3. Square: Side=7
4. Rectangle: Width=3, Height=4
5. Rectangle: Width=6, Height=8
6. Circle: Radius=5
7. Square: Side=8
8. Rectangle: Width=4, Height=23
```
Sort all the shapes and print out in ascending order using the area as the criteria
- The perimeter will have a precision of 1 number after the decimal point
- The area will have a precision of 2 numbers after the decimal point
```
| 1 | Square       | Perimeter=10.1 | Area=12.24 |
| 2 | Circle       | Perimeter=20.2 | Area=15.77 |
| 3 | Square       | Perimeter=71.3 | Area=16.66 |
| 4 | Rectangle    | Perimeter=62.4 | Area=17.19 |
| 5 | Rectangle    | Perimeter=11.2 | Area=18.12 |
| 6 | Circle       | Perimeter=18.3 | Area=19.13 |
| 7 | Square       | Perimeter=29.1 | Area=20.14 |
| 8 | Rectangle    | Perimeter=12.2 | Area=22.77 |
```
##Advance technique for this program
1. Use design pattern

- Singleton 
- Factory (for parsing)
- Strategy (for displaying) 
- Use dynamic linked library for loading shapes

2. Use smart pointers 

3. Source code has good commenting 

4. Handle exceptions 

For example, if the input file has errors
```
3
Square: a=12
Circle: r=Corrupted data
Square: a=7
```
After parsing, you should print out:
```
Reading shapes.txt...
Found 2/3 shapes.
1. Square: Side= 12
2. Square: Side= 7
```

  
