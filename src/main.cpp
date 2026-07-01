#include <iostream>

using namespace std;

int main()
{
    cout << "======================================" << endl;
    cout << " SMART TRAFFIC MANAGEMENT SYSTEM " << endl;
    cout << "======================================" << endl;

    cout << endl;

    cout << "Project Initialized Successfully!" << endl;

    return 0;
}

/*#include <iostream>
#include "../models/Junction.h"
#include "../models/Road.h"
#include "../models/Graph.h"
using namespace std;

int main() {
     Junction j1(1, "MG Road", 20, 35);

    j1.display();

    cout << "Smart Traffic System Started!" << endl;
  
    Road r1(1, 2, 5.5, 60);

    Graph g1(10);

    cout << endl;

    j1.display();

    cout << endl;

    r1.display();

    cout << endl;

    g1.display();

    return 0;
}
*/

/*#include <iostream>

#include "../models/Junction.h"
#include "../models/Road.h"
#include "../models/Graph.h"

using namespace std;

int main(){

    Graph city;

    city.addJunction(

        Junction(

            1,

            "Hospital",

            10,

            20

        )

    );

    city.addJunction(

        Junction(

            2,

            "School",

            40,

            30

        )

    );

    city.addJunction(

        Junction(

            3,

            "Airport",

            70,

            90

        )

    );

    city.addRoad(

        Road(

            1,

            2,

            5,

            60

        )

    );

    city.addRoad(

        Road(

            2,

            3,

            8,

            80

        )

    );

    city.displayGraph();

    return 0;

}
*/

/*#include <iostream>
#include "../models/Graph.h"

using namespace std;

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    cout << "Adjacency List" << endl;
    g.displayGraph();

    cout << endl;

    cout << "BFS" << endl;
    g.BFS(0);

    cout << endl;

    cout << "DFS" << endl;
    g.DFS(0);

    return 0;
}*/

/*#include <iostream>
#include "../models/Graph.h"

using namespace std;

int main()
{
    Graph g(6);

    // Add roads with distance and speed limit
    g.addRoad(0, 1, 10.5, 60);
    g.addRoad(0, 2, 8.2, 40);
    g.addRoad(1, 3, 5.3, 50);
    g.addRoad(1, 4, 9.0, 45);
    g.addRoad(2, 5, 7.1, 70);

    cout << "========== GRAPH ==========" << endl;
    g.displayGraph();

    cout << endl;

    cout << "========== BFS ==========" << endl;
    g.BFS(0);

    cout << endl;

    cout << "========== DFS ==========" << endl;
    g.DFS(0);

    return 0;
}*/

#include <iostream>
#include "../models/Graph.h"

using namespace std;

int main()
{
    Graph g(6);

    // Add roads with distance and speed limit
    g.addRoad(0, 1, 10.5, 60);
    g.addRoad(0, 2, 8.2, 40);
    g.addRoad(1, 3, 5.3, 50);
    g.addRoad(1, 4, 9.0, 45);
    g.addRoad(2, 5, 7.1, 70);

    cout << "========== GRAPH ==========" << endl;
    g.displayGraph();

    cout << endl;

    cout << "========== BFS ==========" << endl;
    g.BFS(0);

    cout << endl;

    cout << "========== DFS ==========" << endl;
    g.DFS(0);

    // 👇 Add these lines here
    cout << endl;

    cout << "========== DIJKSTRA ==========" << endl;
    g.dijkstra(0);

    return 0;
}