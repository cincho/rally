#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include "window.h"

void event_handler(GLFWwindow* window, int key, int scancode, int action, int mods);

int main (int argc, char *argv[])
{
	printf("Rally\n");

	GLFWwindow *window = window_create();

	glfwSetKeyCallback(window, event_handler);

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

	window_destroy();

	return EXIT_SUCCESS;
}

void event_handler(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}