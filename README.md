# Tilt Engine [![forthebadge](https://forthebadge.com/images/badges/0-percent-optimized.svg)](https://forthebadge.com) [![forthebadge](https://forthebadge.com/images/badges/built-with-resentment.svg)](https://forthebadge.com)

## DISCLAIMER: I am still quite new to C/C++! Any stupid and obvious errors are due to my general lack of experience with such low level languages! This engine isn't meant to be used for anything other than learning, it is unstable and lacks quite a lot of features!

The Tilt engine is a one man project to learn more about game engine creation and render apis. I am no professional and my general lack of experience will most likely be the reason why something like this may never correctly be usable for making games with...

<!-- I am aware this table is a mess, just let it be for now, it isn't hurting anyone -->
## Supported Platforms

### Tier 1 (Guaranteed to work, development is focused on these platforms)

<!--Html here is necessary and is very messy!-->

| OS            | Compilers     | Architectures  | Build |
| :-----------  |:-------------:| :-----:        | :---: |
| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/Tux.svg/1200px-Tux.svg.png" width="32"/> Linux | GNU GCC, LLVM Clang | amd64 | Main: ![Linux Build](https://github.com/zCubed3/Tilt/actions/workflows/linuxbuild.yml/badge.svg?branch=main)|
| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/5/5f/Windows_logo_-_2012.svg/1200px-Windows_logo_-_2012.svg.png" width="32"/> Windows      | MSVC / Clang for Windows | amd64 | TODO |

### Tier 2 (Not guaranteed to work, development is limited towards these platforms)

| OS            | Compilers     | Architectures  | Build |
| :-----------  |:-------------:| :-----:        | :---: |
| <img src="https://wiki.installgentoo.com/images/0/0a/Freebsd.png" width="32"/> FreeBSD | GNU GCC, LLVM Clang | amd64 | TODO: Does Github have FreeBSD runners?|

## Platforms with unknown compatibility
### Compatibility with these platforms might be possible by accident and is not purposeful

#### You wouldn't be gaming on either of these platforms in the first place!

| OS            | Compilers     | Architectures  | Build |
| :-----------  |:-------------:| :-----:        | :---: |
| <img src="https://www.openbsd.org/art/puffy/puf800X689.gif" width="32"/> OpenBSD | GNU GCC, LLVM Clang | amd64 | Unknown |
| <img src="https://www.netbsd.org/images/NetBSD-tb.png" width="32"/> NetBSD | GNU GCC, LLVM Clang | amd64 | Unknown |

## Unsupported Platforms

| OS            | Compilers     | Architectures  | Planned support? |
| :-----------  |:-------------:| :-----:        | :---:    |
| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/22/MacOS_logo_%282017%29.svg/512px-MacOS_logo_%282017%29.svg.png" width="32"/> MacOS         | N/A           | N/A            | No |
| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/IOS_logo.svg/512px-IOS_logo.svg.png" width="32"/> iOS           | N/A           | N/A            | No | 
| <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/d7/Android_robot.svg/511px-Android_robot.svg.png" width="32"/> Android       | N/A           | N/A            | No |  

(If I can get a working M1 Mac sometime in the future I will work on porting the engine to MacOS and iOS)
### Credits
1. Other projects used
    * GL Mathematics library, licensed under the MIT license, [g-truc/glm](https://github.com/g-truc/glm)
    * Dear ImGui, licensed under the MIT license, [ocornut/imgui](https://github.com/ocornut/imgui)

2. Resources
    * Utah Teapot model (used for testing shading)

3. Misc
   * For the badge [forthebadge](forthebadge.com) for the header images!<br/>
