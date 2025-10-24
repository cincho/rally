#include "window.h"
#include <stdlib.h>

GLFWwindow* window_create()
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Rally", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	return window;
}

void window_destroy()
{
	glfwTerminate();
}