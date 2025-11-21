

# 21.11.2025 - Friday session

## Hedge Doc markdown notes

Introduction of Hedge Doc for markdown notes collaboration (login with Mattermost HfK Bremen account)

### Differences between Umfeld and Processing

https://notepad.hfk-bremen.de/9mCMnwmZStaQO1-3UHVXEg?view



## Installing OS into the hardware

https://web.archive.org/web/20230228071324/https://balenaetcher.dev/
BalenaEtcher
Flash OS images to SD cards & USB drives



## Umfeld on Raspberry Pi

https://codeberg.org/Umfeld/umfeld/src/branch/main/documentation/Umfeld-on-RPI.md

- Umfeld Image file
  **Download:** http://dm-hb.de/umfeld-rpi or http://dm-hb.de/umfeld-rpi-lite ( no GUI )

## 

## Running Umfeld on Small Devices

https://notepad.hfk-bremen.de/z1E3vHqYSdeyU0vHxNVJ3g

- Raspberry Pi using its own OS
- [R36S Video Game Console](https://www.aliexpress.com/item/1005007862007338.html?spm=a2g0o.cart.0.0.35cc38daAMNFhJ&mp=1&gatewayAdapt=deu2glo) - using Linux ArchOS



## [Experimental] Running Umfeld on Android

using [SDL3](https://wiki.libsdl.org/SDL3/Android)

From Prof. Dennis Paul

```
seongjoo if you want to do a bit of research yourself … the keywords are SDL3 based application i.e Umfeld is based on SDL3 but not totally dependent on it. it also uses some other libraries for specific task ( like e.g freetype/harfbuzz for font rendering ). but if SDL3  works that is usually almost a ✅

dennisppaul

ok so i HAD TO do a quick research ;) this is what the LLM said:

TL;DR
is there a way to get a native C/C++ app based on SDL3 to compile and run on Android?

Yes. You:
1.    Use Android Studio + NDK + CMake.
2.    Add SDL3 source + its Android glue (SDLActivity).
3.    Write your app in C/C++ using SDL3 (GLES).
4.    Build an APK where your native code is a shared lib (.so) loaded by SDLActivity.

If you want, next step I can sketch a minimal Git-like tree (exact folders/files) so you could literally git init / mkdir that structure and start dropping your Umgebung code in. and please, turn off the lights!

in other words: yes, but not trivial
```



# 03.11.2025

Installation on Windows got this issue due to using of our company's laptop.

```
# /bin/bash -c "$(curl -fsSL https://codeberg.org/Umfeld/umfeld/raw/branch/main/install.sh)"
curl: (60) SSL certificate problem: unable to get local issuer certificate More details here: https://curl.se/docs/sslcerts.html 
curl failed to verify the legitimacy of the server and therefore could not establish a secure connection to it. To learn more about this situation and how to fix it, please visit the webpage mentioned above.
```



**Solution:**
https://copilot.microsoft.com/shares/SKbWy6v8jLx94HefQ6abu

#### 4. **Try with** `--insecure` **(not recommended)**

This bypasses certificate checks, but **only use it if you trust the source**:

bash

```
curl --insecure -fsSL https://codeberg.org/Umfeld/umfeld/raw/branch/main/install.sh |
```

installation log:

- [20251103_msys2_installation.log](logs/20251103_msys2_installation.log)
- [20251103_test_template_app_win10.log](enlik-application-win10/logs/20251103_test_template_app_win10.log)



Successful developing application using template:

![image-20251103155359047](./img/personal_notes/image-20251103155359047.png)

# 26.10.2025

installation for macOS working smoothly, via MacMini M4 at home
