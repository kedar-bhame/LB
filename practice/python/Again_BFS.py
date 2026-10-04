"""
    problem : show the implementation of Breadth First Search (BFS)
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
                to traverse child element we need to complete travelsal of all out neighbour.
                means check all elaments of a node after that their child 
                means first visit all neighbour then child
                show the order we traverse 
//
/////////////////////////////////////////////////////////"""

"""////////////////////////////////////////////////////////
//
    Step 2 :    Write the algorithm
    START
        create a graph n no. of node and n vertices.
        create variable as start to store starting node of graph.
        create Array as queue to store and retrive data from it as a queue mean in Array we can only add form last  or remove from first element of it. 
        add start to queue first element
        create Array as visited to store all nodes we are travel.
        add start to visited first element
        create Array as order to store the order the we traverse the graph.
        loop until queue in not empty:
            create variable as cnode to store current node.
            remove first element from queue and add it to cnode.
            also add cnode to order last element
            loop for all the neighbour of cnode as neighbour in graph:
                check if neighbour is not present in visited:
                    add neighbour to queue as last element
                    add neighbour to visited as last element
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

graph = {
    'A' : ['B','C','D'],            
    'B' : ['E','F'],
    'C' : [],
    'D' : ['G'],
    'E' : [],
    'F' : [],
    'G' : []
}
start = 'A'
queue = [start]
visited = [start]
order = []
while (len(queue)> 0):
    cnode = queue.pop(0)
    order.append(cnode)
    for neighbour in graph[cnode]:
        if neighbour not in visited:
            queue.append(neighbour)
            visited.append(neighbour)
print(order)

"""////////////////////////////////////////////////////////
//
   Step 5 :    Test the program
                the program is static
                thats why the output is same always.
                for testing we need to covet it to dyamic input mean dynamic graph
//
/////////////////////////////////////////////////////////"""












