"""
    Problem : Using Bubble sort sort the array
        Step 1 : Understand the problem statement
        Step 2 : Write the algorithm 
        Step 3 : Decide the programming language
        Step 4 : Write the program
        Step 5 : Test the program
"""
"""////////////////////////////////////////////////////////////
    Step 1 : Understand the problem statement
        user is going to enter array of interger
        we have to sort that same array using bubble sort technique
        and show to the user
////////////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////////
    Step 2 : Write the algorithm 
        Accept total elements of array as total_element
        accept all the array elements form user as array of Arr
        create variable as length to store length of the Arr
        loop the Arr from create variable i is 0 to lenth -1 :
            inside that loop again loop the Arr from create variable j is i to lenth -1 :
                check if Arr index j is greather that Arr index j+1
                then swap the Arr index j and Arr index j+1
        Display the result from Arr
////////////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////////
    Step 3 : Decide the programming language
        we select python programming language
////////////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////////
    Step 4 : Write the program
////////////////////////////////////////////////////////////////"""

"""///////////////////////////////////////////////////////////////////////////////

  Function Name   :   BubbleSort
  Input           :   Interger Array, Interger
  Output          :   Interger Array
  Description     :   Performs sorting on Interger Array using Bubble sort technique
  Date            :   09/10/2004
  Author          :   Kedar Anant Bhame
//////////////////////////////////////////////////////////////////////////////////"""
def BubbleSort(Arr,total_elements):

    for i in range(total_elements-1):
        for j in range(0,total_elements-1-i):
            if(Arr[j] > Arr[j+1]):
                Arr[j],Arr[j+1] = Arr[j+1],Arr[j]
    return Arr
        
# Arr = [10,30,20,50,40,25]
total_elements = int(input("Enter total element count of the array :"))
Arr = []
for i in range(total_elements):
    Arr.append(int(input(f"{i+1} element = : ")))

print(BubbleSort(Arr,total_elements))