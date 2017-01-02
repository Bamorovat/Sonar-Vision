# Sonar-Vision
This code implement with C++ programing Language in C Standard.
Implementation of the Sonar-Vision algorithm described in:

1. Bamorovat Abadi,M.H, Asghari Oskoei,M. “Effects of Mirrors in Mobile Robot Navigation Based on Omnidirectional Vision.”
8th International Conference, ICIRA 2015, Portsmouth, UK, August 24-27, 2015.
2. Bamorovat Abadi,M.H., Asghari Oskoei,M. , Fakharian,A. “Mobile robot navigation using sonar vision algorithm applied to omnidirectional vision.”
AI & Robotics (IRANOPEN), 2015,IEEE, {1-6}, 2015.

The program takes video and find a free path.

The parameters are: (see the paper for details)
Ns: Number of Sonars.
KK1: The number of first Sonar that we want to use.
KK2: The number of last Sonar that we want to use.
ii: Start point in each Sonar.

Typical parameters are Ns=24, KK1=10, KK2=27, ii=60
