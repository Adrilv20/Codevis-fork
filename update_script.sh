#!/bin/bash

# Update libzip in .flatpak-manifest.json
sed -i 's/"url": "https:\/\/libzip.org\/download\/libzip-1.10.1.tar.xz"/"url": "https:\/\/libzip.org\/download\/libzip-1.11.4.tar.xz"/' .flatpak-manifest.json
sed -i 's/"sha256": "dc3c8d5b4c8bbd09626864f6bcf93de701540f761d76b85d7c7d710f4bd90318"/"sha256": "8a247f57d1e3e6f6d11413b12a6f28a9d388de110adc0ec608d893180ed7097b"/' .flatpak-manifest.json

# Update versions in packaging/centos7/Dockerfile
# Catch2
sed -i 's/RUN git clone https:\/\/github.com\/catchorg\/Catch2.git \\/RUN git clone -b v2.13.10 https:\/\/github.com\/catchorg\/Catch2.git \\/' packaging/centos7/Dockerfile

# ECM
sed -i 's/RUN git clone https:\/\/github.com\/KDE\/extra-cmake-modules.git/RUN git clone -b v5.115.0 https:\/\/github.com\/KDE\/extra-cmake-modules.git/' packaging/centos7/Dockerfile

# LLVM to 18? Wait, maybe just LLVM 18.1.8 ? I will pin Catch2, ECM, karchive, sqlite, qt, cmake, openssl, llvm.
# The user wants "pin whatever you see needed, try checking if anything may need an update for security reasons too"

# OpenSSL -> 1.1.1 is EOL, maybe OpenSSL 3.0.x? But OpenSSL 1.1.1w is the last 1.1.1. I'll use 1.1.1w or 1.1.1v.
# Qt -> 5.15.12 is newer open source release?
