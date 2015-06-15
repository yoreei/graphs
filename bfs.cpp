Let graph be your adjacency list.
void Graph::BFS(int start_node) // ot kude iskame da zapochne
{
    bool visited[num_nodes]; // Array of booleans to keep track if a node was visited.
    for (int i = 0; i < num_nodes; i++)  // Set status of all nodes to be not visited.
    {
        visited[i] = false;
    }
    visited[start_node] = true;
    queue = Queue(); // Queue for keeping track of which node to check next
    queue.push(start_node);
    while (!queue.empty()) // While there is still nodes to check
    {
        node = queue.pop_front(); // Get the node at the front of the queue.
// For each of the sused of this node
// This is where we make use of the adjacency list which tells us which nodes are the suseds
// of some other nodes.
        susedi_of_node = graph[node];
        for (int i = 0; i < susedi_of_node.size(); i++)
        {
            sused = susedi_of_node[i];
            if (visited[sused] == false) // If this node was not visited previously
            {
                do_something_with(sused);
                visited[sused] = true; // Indicate that we have visited this sused node.
                queue.push(sused);
            }
        }
    }
}

