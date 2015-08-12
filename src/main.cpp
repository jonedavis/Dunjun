#include <iostream>
#include <Dunjun\Common.hpp>

#include <GLFW\glfw3.h>

int main(int argc, char** argv)
{
	GLFWwindow* window;

	if (!glfwInit())
		return EXIT_FAILURE;

	window = glfwCreateWindow(854, 480, "Dunjun", nullptr, nullptr);

	if (!window)
	{
		glfwTerminate();
		return EXIT_FAILURE;
	}
		
	glfwMakeContextCurrent(window);
	
	while (!glfwWindowShouldClose(window))
	{
		// Render here

		// Swap back buffers
		glfwSwapBuffers(window);

		// Poll for events
		glfwPollEvents();
	}
	
	glfwTerminate();
	return EXIT_SUCCESS;
}