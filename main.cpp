
// Standard Header For Most Programs
#include <windows.h>   
// The GL Header
#include <glad/glad.h>
#include <GLFW/glfw3.h>
// The GL Mathematics 
#include <GLM/glm/glm.hpp>
#include <GLM/glm/glm.hpp>
#include <GLM/glm/gtc/matrix_transform.hpp>
#include <GLM/glm/gtc/type_ptr.hpp>
#include <GLM/glm/gtx/rotate_vector.hpp>
// Angle For The Triangle
float	g_triangle_rotation;
// Speed For Rotation
float	g_rotation_speed;
// Offset For X
float	g_offset_x;
// Offset For Y
float	g_offset_y;
// Create Some Everyday Functions
float color[3] = { 1.0, 0.0, 0.0 };
int color_index = 0;

bool InitGL()
{
	// Enable Smooth Shading
	glShadeModel(GL_SMOOTH);
	// Black Background
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f);
	// Depth Buffer Setup
	glClearDepth(1.0f);
	// Enables Depth Testing
	glEnable(GL_DEPTH_TEST);
	// The Type Of Depth Testing To Do	
	glDepthFunc(GL_LEQUAL);
	return TRUE;
}
void draw_star3D(float r, float g, float b)
{
	float d = 0.15;
	r = r / 255.0;
	g = g / 255.0;
	b = b / 255.0;
	glBegin(GL_TRIANGLES);
	//0
	glColor3f(r, g, b);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.2743, -0.089, 0);
	//1
	glColor3f(r, g, b);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//2
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0.755, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//3
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r, g, b);
	glVertex3f(0, 0.755, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.195, 0.233, 0);
	//4
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//5
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r, g, b);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.2743, -0.089, 0);
	//6	
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.2743, -0.089, 0);
	glColor3f(r, g, b);
	glVertex3f(-0.443, -0.610, 0);
	//7
	glColor3f(r, g, b);
	glVertex3f(-0.443, -0.610, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0, -0.377, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//8
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0, -0.377, 0);
	glColor3f(r, g, b);
	glVertex3f(0.443, -0.610, 0);
	//9
	glColor3f(r, g, b);
	glVertex3f(0.443, -0.610, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.2743, -0.089, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	d = -d;
	//10
	glColor3f(r, g, b);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.2743, -0.089, 0);
	//11
	glColor3f(r, g, b);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//12
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0.755, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//13
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r, g, b);
	glVertex3f(0, 0.755, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.195, 0.233, 0);
	//14
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.195, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//15
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r, g, b);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.2743, -0.089, 0);
	//16	
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(-0.2743, -0.089, 0);
	glColor3f(r, g, b);
	glVertex3f(-0.443, -0.610, 0);
	//17
	glColor3f(r, g, b);
	glVertex3f(-0.443, -0.610, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0, -0.377, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	//18
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0, -0.377, 0);
	glColor3f(r, g, b);
	glVertex3f(0.443, -0.610, 0);
	//19
	glColor3f(r, g, b);
	glVertex3f(0.443, -0.610, 0);
	glColor3f(r / 10, g / 10, b / 10);
	glVertex3f(0.2743, -0.089, 0);
	glColor3f(r, g, b);
	glVertex3f(0, 0, d);
	// End
	glEnd();
}
void draw_star3D()
{
	float d = 0.15;
	glBegin(GL_TRIANGLES);
	//0
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.2743, -0.089, 0);
	//1
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//2
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0.755, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//3
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0.755, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.195, 0.233, 0);
	//4
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//5
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.2743, -0.089, 0);
	//6	
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.2743, -0.089, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.443, -0.610, 0);
	//7
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.443, -0.610, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0, -0.377, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//8
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0, -0.377, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.443, -0.610, 0);
	//9
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.443, -0.610, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.2743, -0.089, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	d = -d;
	//10
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.2743, -0.089, 0);
	//11
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.718, 0.233, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//12
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0.755, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//13
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0.755, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.195, 0.233, 0);
	//14
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.195, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//15
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.718, 0.233, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.2743, -0.089, 0);
	//16	
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(-0.2743, -0.089, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.443, -0.610, 0);
	//17
	glColor3f(1, 0.95, 0.01);
	glVertex3f(-0.443, -0.610, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0, -0.377, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	//18
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0, -0.377, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.443, -0.610, 0);
	//19
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0.443, -0.610, 0);
	glColor3f(0.4, 0.4, 0.1);
	glVertex3f(0.2743, -0.089, 0);
	glColor3f(1, 0.95, 0.01);
	glVertex3f(0, 0, d);
	// End
	glEnd();
}

void display(void)   // Create The Display Function
{
	// Clear Screen And Depth Buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();		// Reset The Current Modelview Matrix
	glPushMatrix();
	// Move Left 1.5 Units And Into The Screen 6.0
	glTranslatef(g_offset_x, g_offset_y, 0.0f);
	// Rotate The Triangle On The Y axis
	glRotatef(g_triangle_rotation, 0.0f, 1.0f, 0.0f);
	//glBegin(GL_TRIANGLES);		// Drawing Using Triangles
	//glColor3f(1.0f,0.0f,0.0f);	// Red
	//glVertex3f( 0.0f, 0.6f, 0.0f);	// Top Of Triangle (Front)
	//glColor3f(0.0f,1.0f,0.0f);	// Green
	//glVertex3f(-0.6f,-0.6f, 0.6f);	// Left Of Triangle (Front)
	//glColor3f(0.0f,0.0f,1.0f);	// Blue
	//glVertex3f( 0.6f,-0.6f, 0.6f);	// Right Of Triangle (Front)
	//glColor3f(1.0f,0.0f,0.0f);	// Red
	//glVertex3f( 0.0f, 0.6f, 0.0f);	// Top Of Triangle (Right)
	//glColor3f(0.0f,0.0f,1.0f);	// Blue
	//glVertex3f( 0.6f,-0.6f, 0.6f);	// Left Of Triangle (Right)
	//glColor3f(0.0f,1.0f,0.0f);	// Green
	//glVertex3f( 0.6f,-0.6f, -0.6f);	// Right Of Triangle (Right)
	//glColor3f(1.0f,0.0f,0.0f);	// Red
	//glVertex3f( 0.0f, 0.6f, 0.0f);	// Top Of Triangle (Back)
	//glColor3f(0.0f,1.0f,0.0f);	// Green
	//glVertex3f( 0.6f,-0.6f, -0.6f);	// Left Of Triangle (Back)
	//glColor3f(0.0f,0.0f,1.0f);	// Blue
	//glVertex3f(-0.6f,-0.6f, -0.6f);	// Right Of Triangle (Back)
	//glColor3f(1.0f,0.0f,0.0f);	// Red
	//glVertex3f( 0.0f, 0.6f, 0.0f);	// Top Of Triangle (Left)
	//glColor3f(0.0f,0.0f,1.0f);	// Blue
	//glVertex3f(-0.6f,-0.6f,-0.6f);	// Left Of Triangle (Left)
	//glColor3f(0.0f,1.0f,0.0f);	// Green
	//glVertex3f(-0.6f,-0.6f, 0.6f);	// Right Of Triangle (Left)
	//glEnd();			// Finished Drawing The Triangle

	//float n = 0.9;

	//glBegin(GL_LINE_LOOP);
	//glColor3f(0.2,0.2,0.2);
	//glVertex2f(-1.0*n, 0.26 * n);
	//glColor3f(1,0.95,0.01);
	//glVertex2f(1.0 * n, 0.26 * n);
	//glColor3f(0, 1, 1);
	//glVertex2f(-0.6 * n, -0.9 * n);
	//glColor3f(1,0.95,0.01);
	//glVertex2f(0, 1 * n);
	//glColor3f(1, 0, 1);
	//glVertex2f(0.6 * n, -0.9 * n);
	//glEnd();	

	draw_star3D();

	//draw_star3D(color[0], color[1], color[2]);
	//switch (color_index)
	//{
	//case 0:
	//	if (++color[1] == 255)
	//		color_index++;
	//	break;
	//case 1:
	//	if (--color[0] == 0)
	//		color_index++;
	//	break;
	//case 2:
	//	if (++color[2] == 255)
	//		color_index++;
	//	break;
	//case 3:
	//	if (--color[1] == 0)
	//		color_index++;
	//	break;
	//case 4:
	//	if (++color[0] == 255)
	//		color_index++;
	//	break;
	//case 5:
	//	if (--color[2] == 0)
	//		color_index = 0;
	//	break;
	//}
	glPopMatrix();
	// Increase The Rotation Variable For The Triangle ( NEW )
	g_triangle_rotation += g_rotation_speed;
}

// Create The Reshape Function (the viewport)
void ReSizeGLScene(GLFWwindow* window, int width, int height)
{
	if (height == 0)    // Prevent A Divide By Zero By
	{
		height = 1; // Making Height Equal One
	}
	// Reset The Current Viewport
	glViewport(0, 0, width, height);
	// Select The Projection Matrix
	glMatrixMode(GL_PROJECTION);
	// Reset The Projection Matrix
	glLoadIdentity();
	// Calculate The Aspect Ratio Of The Window
	glm::mat4 projMat = glm::perspective(glm::radians(45.0f), (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
	glMultMatrixf(glm::value_ptr(projMat));

	glTranslatef(0, 0, -4.0f);
	// Select The Modelview Matrix
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glOrtho(-1, 1, -1, 1, -1, 1);
}

void keyboard(GLFWwindow* window, int key, int scancode, int action, int mods)  // Create Keyboard Function
{
	switch (key)
	{
	case GLFW_KEY_Q: // When Escape Is Pressed...
		exit(0);   // Exit The Program
		break;
	case GLFW_KEY_KP_ADD: // '+'
		g_rotation_speed += 0.2;
		break;
	case GLFW_KEY_KP_SUBTRACT: // '-'
		g_rotation_speed -= 0.2;
		break;

	case GLFW_KEY_UP:
		g_offset_y += 0.01;
		break;
	case GLFW_KEY_DOWN:
		g_offset_y -= 0.01;
		break;
	case GLFW_KEY_LEFT:
		g_offset_x -= 0.01;
		break;
	case GLFW_KEY_RIGHT:
		g_offset_x += 0.01;
		break;
	default:        // Now Wrap It Up
		break;
	}
}

// Create Main Function For Bringing It All Together
int main(int argc, char** argv)
{
	// init global variable
	g_rotation_speed = 1.0f;
	g_triangle_rotation = 0;
	g_offset_x = 0;
	g_offset_y = 0;

	if (!glfwInit())
	{
		return -1;
	}

	glfwWindowHint(GL_DOUBLEBUFFER, GL_TRUE);
	GLFWwindow* window = glfwCreateWindow(500, 500, "Framework", NULL, NULL);
	glfwMakeContextCurrent(window);
	int version = gladLoadGL();
	if (version == 0) {
		printf("Failed to initialize OpenGL context\n");
		return -1;
	}

	glfwSetWindowPos(window, 100, 100);
	glfwSetWindowSizeCallback(window, ReSizeGLScene);
	glfwSetKeyCallback(window, keyboard);

	InitGL();
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		display();

		// Swap The Buffers To Not Be Left With A Clear Screen
		glfwSwapBuffers(window);
	}
	glfwTerminate();
}

