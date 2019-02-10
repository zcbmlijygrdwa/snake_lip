# Marr-Hildreth Edge Detection - implementation in Matlab


Author: Zhenyu Yang

Email: zhenyuyang@ucsb.edu


Active contour model, also called snakes, is a framework in computer vision introduced by Michael Kass, Andrew Witkin and Demetri Terzopoulos for delineating an object outline from a possibly noisy 2D image. The snakes model is popular in computer vision, and snakes are widely used in applications like object tracking, shape recognition, segmentation, edge detection and stereo matching.

A snake is an energy minimizing, deformable spline influenced by constraint and image forces that pull it towards object contours and internal forces that resist deformation. Snakes may be understood as a special case of the general technique of matching a deformable model to an image by means of energy minimization. In two dimensions, the active shape model represents a discrete version of this approach, taking advantage of the point distribution model to restrict the shape range to an explicit domain learnt from a training set.


# About this project

In this project, the Snake algorithm was implemented with Matlab. Lips in videos were tracked by using snake. Color thresholding and ellipse fitting were also adopted to improve the robustness significantly.

#### Lips were tracked from the beginning to the end in each video.

This project can track the mouth motion with the following deformation and change
a. Talking
b. Laughing, fawning and other common expressions
c. Slight camera zoom in or out
d. Slight rotation and translation of the head
e. Slight change in the environmental illumination

All functions and scripts were implemented from scratch. Matlab Computer Vision Toolbox is not required.

demo.m and demo_save.m are two good entry points for this project. trackLipSingle.m is another entry point was made to fulfill the "four arguments" requirement in HW.

### References
* **https://en.wikipedia.org/wiki/Active_contour_model**
* **http://www.cs.ucsb.edu/~cs181b/hw/prog2.pdf**
* **https://www.inf.u-szeged.hu/~kato/teaching/emm/02-Snake.pdf**
* **http://www.cs.ait.ac.th/~mdailey/cvreadings/Kass-Snakes.pdf**

# 1. Quickstart / Minimal Setup

Please put folders containing source images ('liptracking2', 'liptracking3' and 'liptracking4') in the same path as this script.

Launch Matlab and go to the directory that contains the project, and run:
        demo


Another demo program shows an example of using this project and save the results. Run:

        demo_save


The demo program will start and go through all test sets, and generate output into the "outputs" folder. The demo program also shows the outputs with the imshow() function.


To enter the project as required by HW:

        trackLipSingle('liptracking2', 'liptracking2_01302.jpg', 1400, 1401, 'template2.mat')

or

        trackLipSingle(directory, root, idx1, idx2, lip_template)

“directory” is the data directory, “root” is the root image filename, idx1 is the starting index, and idx2 is the end index. "lip_template" is the file that stores your initial lip template.

The following directories are supported:

        "liptracking2"
        "liptracking3"
        "liptracking4"

# 2. Installation
This project was developed with Matlab IDE. 

Matlab is the only software needed to be installed to run this project.

*No Computer Vision Toolbox is required.

# 3 Project files

createMask.m           
fit_ellipse.m         
mySnake.m       
trackLip.m
demo.m                 
getElps.m             
paramManager.m  
trackLipSingle.m
demo_save.m            
rotmat2d.m      
visualizeSnake.m
displaySnakeOnImage.m  
my_gaussian_kernel.m  
test.m

#### Videos of results are also attached as AVI files.

# 4 Usage
A demo program shows an example of using this project. Run:

        demo


A demo program shows an example of using this project and save the results. Run:

        demo_save

The demo program will start and go through all test sets, and generate output into the "outputs" folder. The demo program also shows the outputs with the imshow() function.

