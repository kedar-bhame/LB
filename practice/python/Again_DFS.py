"""
    problem : show the implementation of Depth First Search(DFS)
        Step 1 :    Understand the problem statement
        Step 2 :    Write the algorithm
        Step 3 :    Decide the programming language
        Step 4 :    Write the program
        Step 5 :    Test the program
"""

"""////////////////////////////////////////////////////////
//
    Step 1 :    Understand the problem statement
                static graph using that 
                we traverse the graph every element in a order.
                to traverse child element we don't need to complete travelsal of all out neighbour.
                from start node we need to go deep at leap node 
                means don't need to check all elaments of a node after that their child 
                mean first visit child then neighbour
                show the order we traverse 
//
/////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////
//
    Step 2 :    Write the algorithm
    START
        create a graph n no. of node and n vertices.
        create variable as start to store starting node of graph.
        create Array as stack to store and retrive data from it as a stack mean in Array we can only add or remove data from last element of it. 
        add start to stack first element
        create Array as visited to store all nodes we are travel.
        create Array as order to store the order the we traverse the graph.
        loop until stack in not empty:
            create variable as cnode to store current node.
            remove last element from stack and add it to cnode.
            check if cnode is not present in visited:
                add cnode into visited last element
                add cnode into order last element
                get all the child of cnode form graph and reverse them and store in stack last elment
        display the order array
    END
//
/////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////
//
    Step 3 :    Decide the programming language
                we select python programming language
//
/////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////
//
    Step 4 : Write the program
//
/////////////////////////////////////////////////////////"""

"""/////////////////////////////////////////////////////////
//
//  Function Name   :   NO funciton is created
//  Input           :   NO input because of static graph
//  Output          :   Printing the array of order of node that we travel in graph
//  Description     :   Performs Depth First Search(DFS) on a static graph
//  Date            :   04/10/2026
//  Author          :   Kedar Anant Bhame


//////////////////////////////////////////////////////////"""

graph = {
    'A' : ['B','F','H'],            
    'B' : ['C'],
    'C' : ['D','E'],
    'D' : [],
    'E' : [],
    'F' : ['G'],
    'G' : [],
    'H' : ['I'],
    'I' : []
}

start = 'A'
stack = [start]
visited = []
order = []

while len(stack) > 0:
    cnode = stack.pop()

    if cnode not in visited:
        visited.append(cnode)
        order.append(cnode)
        stack.extend(reversed(graph[cnode]))

print(order)


"""////////////////////////////////////////////////////////
//
   Step 5 :    Test the program
                the program is static
                thats why the output is same always.
                for testing we need to covet it to dyamic input mean dynamic graph
//
/////////////////////////////////////////////////////////"""












