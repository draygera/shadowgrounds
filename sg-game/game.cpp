/**
 * File            : ../sg-game/game.cpp
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */

#include "storm3d.h"
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

using namespace std;

void initVulkan(){

}

void mainLoop(){

}

void cleanup(){

}

void run(){
        initVulkan();
        mainLoop();
        cleanup();
}

int main(int argc, char *argv[]){
        run();
        /* Storm3D *storm3d; */
        /* storm3d->run(); */
/*         if (!glfwInit()){ */
/*                 fprintf( stderr, "Failed to open GLFW Window. If you use an Intel GPU, use version 2.1 of GLFW instead.\n" ); */
/*                 glfwTerminate(); */
/*                 return -1; */
/*         } */
        
/*         VkInstance instance = 0; */
/*         PFN_vkCreateInstance pfnCreateInstance = (PFN_vkCreateInstance) */
/*                 glfwGetInstanceProcAddress(NULL, "vkCreateInstance"); */

/*         glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); */
/*         GLFWwindow *window = glfwCreateWindow(640, 480, "Test", NULL, NULL); */

/*         storm3d->test(instance, window); */

/*         glfwTerminate(); */
        return 0;
}
