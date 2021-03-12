# 2D_Array_cpp
 C++ memory management using 2D Array
 
 ### Overview: Puzzle
 
The Puzzle class in this project contains a 2-dimensional array which stores the alphabetic characters like crossword puzzles. For the simplicity the array is populated with random characters. There are no meaningful words in the puzzles this class generates.  
Here is an example of a puzzle table:  
i i r e l o i b f p  
r u g e r q s h k m  
x x # e q g w n e m  
z m g g c x # q m w  
k h f p r z y m o k  
e i y o j t r c n s  
s m u # a # k a f q  
m l j g t l c x r s  
r h r t s y c c u x  
v u # v y z k x v j  

### Files

puzzle.h - The interface for the Puzzle class.  
puzzle.cpp - The skeleton for the Puzzle class implementation.  
mytest.cpp - The driver program and Tester.  
mytest.txt - The output of driver program.  


### Puzzle class

Method:  
Puzzle(int size=0); //constructor: initialize object with input:size  
Puzzle(const Puzzle& rhs); //copy constructor: initialize object with a deepcopy of an existing puzzle object  
const Puzzle& operator=(const Puzzle& rhs); //assignment operator method  
void dump();//print puzzle data  

### Tester class

Method:  
bool testSelfAssignment(Puzzle &puzzle); //test puzzle class for self assignment  
bool testAssignmentOperator(const Puzzle &puzzle); //test assigment operator for deep copy  
bool testCopyConstructor(const Puzzle &puzzle);  //test copy constructor for deep copy, edge cases  
void measureCopyConstructorTime(int numTrials, int N); //measure copy constructor time  
void measureInsertionTime(int numTrials, int N); //measure insertion into class time  
