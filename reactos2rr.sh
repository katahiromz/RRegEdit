#!/usr/bin/env bash

cp -fr ../reactos/base/applications/regedit/lang/ .
cp -fr ../reactos/base/applications/regedit/res/ .
cp -fr ../reactos/base/applications/regedit/*.c .
cp -fr ../reactos/base/applications/regedit/*.h .
cp -fr ../reactos/base/applications/regedit/*.rc .
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/version.h reactos/
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/buildno.h reactos/
