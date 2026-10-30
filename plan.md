1. **Update `libzip`:** Update `.flatpak-manifest.json` `libzip` to `1.11.4` (from `1.10.1`), use the correct sha256 (`8a247f57d1e3e6f6d11413b12a6f28a9d388de110adc0ec608d893180ed7097b`).
2. **Update Catch2:** Update `Catch2` in `packaging/centos7/Dockerfile` to pin to `v2.13.10` since `Catch2` v3 requires different headers/namespaces which could break Codevis.
3. **Update OpenSSL:** Change `OPENSSL_VERSION=1.1.1k` to `OPENSSL_VERSION=1.1.1w` in `packaging/centos7/Dockerfile`.
4. **Update ECM (extra-cmake-modules):** Pin to `v5.248.0` in `packaging/centos7/Dockerfile`.
5. **Update Qt in Dockerfile:** update from `5.15.7` to `5.15.18` in `packaging/centos7/Dockerfile`.
6. **Check versions:** Build the docker image locally using `docker build -t codevis-centos7 -f packaging/centos7/Dockerfile . > build_output.txt 2>&1` and verify `.flatpak-manifest.json` is valid JSON by using `jq . .flatpak-manifest.json > /dev/null`.
7. **Evaluate build logs:** Evaluate the build logs. If a build fails, run `cp build_output.txt sample_issue.txt` to create a sample issue file containing the error log, use `git restore packaging/centos7/Dockerfile` to revert the breaking dependency change, and retry the build with a previous version.
8. **Run tests:** Run all relevant tests using `docker run --rm codevis-centos7 /bin/bash -c "/deploy.sh -b jules-428142847514380476-45b0ca72"` and `docker build --target code-coverage -t codevis-tests -f packaging/appimage/Dockerfile . && docker run --rm codevis-tests` to ensure the changes are correct and have not introduced regressions.
9. **Pre-commit instructions:** Complete pre-commit steps to ensure proper testing, verification, review, and reflection are done.
10. **Submit the change:** Commit with an appropriate branch name and commit message.
