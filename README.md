# Sonar-Vision
## Sonar Vision Algorithm Based on Omnidirectional Vision
### Author: [Mohammad Hossein Bamorovat Abadi](https://bamorovat.wordpress.com/).


This code implemented with C++ programing Language under C programing Language Standard and **OpenCV Library**.
This program implemented in **Visual Studio 2015 environment** and **OpenCV 3.1**.
Implementation of the **Sonar-Vision** algorithm described in:

1. Bamorovat Abadi,M.H, Asghari Oskoei,M. **“Effects of Mirrors in Mobile Robot Navigation Based on Omnidirectional Vision.”** 8th International Conference, ICIRA 2015, Portsmouth, UK, August 24-27, 2015.[[**PDF**]](https://bamorovat.files.wordpress.com/2017/01/intelligentroboticsandapplications.pdf)[[**BibTex**]](https://bamorovat.wordpress.com/bibtex1)
2. Bamorovat Abadi,M.H., Asghari Oskoei,M. , Fakharian,A. **“Mobile robot navigation using sonar vision algorithm applied to omnidirectional vision.”** AI & Robotics (IRANOPEN), 2015,IEEE, {1-6}, 2015.[[**PDF**]](https://bamorovat.files.wordpress.com/2017/01/the-7th-robocup-iranopen-international-symposium-and-the-5th-joint-conference-of-ai-robotics.pdf)[[**BibTex**]](https://bamorovat.wordpress.com/bibtex2)

#####If you use ***Sonar_Vision*** in an academic work, **please cite it via above bibtex links**.
Describing more about our project is in: https://www.bamorovat.wordpress.com

You can see a short movie of our Sonar Vision Implementation in: https://youtu.be/JKRwDcHyVbo

The program takes video and find static and dynamic obstacles, and free path. The parameters are (see the paper for details):

**Ns:** Number of Sonars. **KK1:** The number of first Sonar that we want to use. **KK2:** The number of last Sonar that we want to use. **ii:** Start point in each Sonar. Typical parameters are ***Ns=24, KK1=10, KK2=27, ii=60***.
