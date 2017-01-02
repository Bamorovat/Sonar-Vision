# Sonar-Vision
Author: [Mohammad Hossein Bamorovat Abadi](https://bamorovatwo.wordpress.com/).

This code implemented with C++ programing Language in C Standard.
Implementation of the Sonar-Vision algorithm described in:

1. Bamorovat Abadi,M.H, Asghari Oskoei,M. “Effects of Mirrors in Mobile Robot Navigation Based on Omnidirectional Vision.” 8th International Conference, ICIRA 2015, Portsmouth, UK, August 24-27, 2015.[[pdf]](https://bamorovatwo.files.wordpress.com/2016/12/intelligentroboticsandapplications.pdf)[[bibtex]](https://bamorovatwo.wordpress.com/bibtex1)
2. Bamorovat Abadi,M.H., Asghari Oskoei,M. , Fakharian,A. “Mobile robot navigation using sonar vision algorithm applied to omnidirectional vision.” AI & Robotics (IRANOPEN), 2015,IEEE, {1-6}, 2015.[[pdf]](https://bamorovatwo.files.wordpress.com/2016/12/the-7th-robocup-iranopen-international-symposium-and-the-5th-joint-conference-of-ai-robotics.pdf)[[bibtex]](https://bamorovatwo.wordpress.com/bibtex2)

If you use Sonar_Vision in an academic work, please cite:

@article{abadi2015mobile,
  title={Mobile robot navigation using sonar vision algorithm applied to omnidirectional vision},
  author={Abadi, Mohammad Hossein Bamorovat and Oskoei, Mohammadreza A and Fakharian, Ahmad},
  booktitle={AI \& Robotics (IRANOPEN), 2015},
  pages={1--6},
  year={2015},
  organization={IEEE}
}

@article{abadi2015effects,
  title={Effects of Mirrors in Mobile Robot Navigation Based on Omnidirectional Vision},
  author={Abadi, Mohammad Hossein Bamorovat and Oskoei, Mohammadreza Asghari},
  booktitle={8th International Conference on Intelligent Robotics and Applications, ICIRA 2015, Portsmouth, UK,.},
  pages={37--48},
  year={2015},
  organization={Springer International Publishing}
}

The program takes video and find a free path.

The parameters are: (see the paper for details)
Ns: Number of Sonars.
KK1: The number of first Sonar that we want to use.
KK2: The number of last Sonar that we want to use.
ii: Start point in each Sonar.

Typical parameters are Ns=24, KK1=10, KK2=27, ii=60.
