#include <iostream>
#include "polyscope/polyscope.h"
#include "polyscope/standardize_data_array.h"
#include "polyscope/surface_mesh.h"

using namespace std;

int main()
{
    cout << "RUMBL" << endl;

    // Program Options
    polyscope::options::programName = "RUMBL (Robust and Useful Mesh Boolean Libray)";
    polyscope::options::verbosity = 3;
    polyscope::options::usePrefsFile = false;

    // Scene Options
    polyscope::options::autocenterStructures = true;
    polyscope::options::autoscaleStructures = true;

    // Initialize polyscope, creating graphics contexts and constructing a window.
    // Should be called exactly once.
    polyscope::init();

    // Fix the length scale to the unit bounding box
    polyscope::options::automaticallyComputeSceneExtents = false;
    polyscope::state::lengthScale = 1.0;
    polyscope::state::boundingBox = { {-1.0, -1.0, -1.0 }, { 1.0, 1.0, 1.0 } };



    /*
     * build visualizations, here or in distant code
     *
     */

    // Pass control flow to polyscope, displaying the interactive window.
    // Function will return when user closes the window.
    polyscope::show();

    // More of your code
    // ...

    // Show again. Data is preserved between calls to show()
    // unless explicitly removed.
    polyscope::show();

    return 0;
}
