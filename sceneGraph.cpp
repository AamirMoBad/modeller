#include "sceneGraph.h"

#ifdef __APPLE__
#  include <OpenGL/gl.h>
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/gl.h>
#  include <GL/glu.h>
#  include <GL/freeglut.h>
#endif

// TODO: Private variables (encapsulation)


using namespace std;
SceneGraph::SceneGraph(){
	root = new node;
	root->id = -1;
	currentNode = root;
}
void SceneGraph::topMost(){
	currentNode = root;
}

void SceneGraph::append(int ID, SceneObject addSceneObject){
	sceneTree.push_back(addSceneObject);
	node* child = new node;
	child->id = ID;
	currentNode = child;
}
