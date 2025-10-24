#include "window.h"
#include <GLFW/glfw3.h>
#include <stdlib.h>

void window_init()
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}
}

void window_destroy()
{
	glfwTerminate();
}