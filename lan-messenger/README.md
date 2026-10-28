# LAN Messenger (Qt 6 C++ / CMake & Web Preview)

LAN Messenger is an open-source peer-to-peer intra-network messaging application with **OpenSSL 3.0 ↔ OpenSSL 1.0 Legacy Compatibility (`Legacy v1.0` / `Strict v3.0`)** support.

---

## 1. Qt Creator에서 열기 및 실행 방법 (C++ / Qt 6)

루트 디렉터리에 **`CMakeLists.txt`**와 전체 C++/Qt 소스 트리(`lmc/`, `lmcapp/`, `tests/`, `translations/`)가 포함되어 있어 **Qt Creator**에서 바로 열어 빌드 및 실행할 수 있습니다.

### 필수 패키지 설치 (Ubuntu 22.04 / 24.04 기준)

```bash
sudo apt update
sudo apt install -y build-essential cmake ninja-build pkg-config \
  qt6-base-dev qt6-base-private-dev qt6-multimedia-dev qt6-tools-dev \
  qt6-tools-dev-tools qt6-l10n-tools qt6-translations-l10n libssl-dev
```

### Qt Creator에서 실행하기

1. **Qt Creator** 실행
2. 상단 메뉴에서 **`File` → `Open File or Project...`** 클릭
3. 저장소 최상단(루트)의 **`CMakeLists.txt`** 선택 후 열기
4. Kit 선택 화면에서 **Desktop Qt 6.x** Kit 선택 후 **Configure Project** 클릭
5. 좌측 하단 실행 타겟을 **`lmc` (`lan-messenger`)**로 지정한 뒤 **Run (`Ctrl + R`)** 또는 **Build (`Ctrl + B`)** 클릭

### 터미널(CLI)에서 CMake로 빌드 및 실행하기

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j$(nproc)

# 실행
./build/lmc/lan-messenger

# 암호화/호환성 유닛 테스트 실행
ctest --test-dir build --output-on-failure
```

---

## 2. OpenSSL 3.0 ↔ OpenSSL 1.0 구버전 호환성 패치 내역 (`Legacy Compatibility`)

우분투(OpenSSL 3.0) 환경의 랜메신저가 구버전(OpenSSL 1.0, Windows/Ubuntu) 랜메신저와 연결될 때 구버전 클라이언트가 강제 종료되던 문제를 해결하기 위해 다음 C++ 파일들이 업데이트되었습니다:

- **`lmc/src/core/crypto.h` / `lmc/src/core/crypto.cpp`**:
  - OpenSSL 3.0 `EVP_PKEY` 및 `OSSL_ENCODER_CTX` 기반으로 동작하며, **`Legacy v1.0` 모드(기본값)**에서는 PKCS#1 `"type-specific"` 헤더(`-----BEGIN RSA PUBLIC KEY-----`)와 `SHA-1` OAEP 패딩을 사용하여 구버전 클라이언트의 `PEM_read_bio_RSAPublicKey()` 호출 시 NULL 역참조 크래시가 발생하지 않도록 보장합니다.
  - **`Strict v3.0` 모드**로 전환 시 X.509 SPKI 헤더(`-----BEGIN PUBLIC KEY-----`)와 `SHA-256` OAEP 패딩을 사용합니다.
  - 상대방 공개키 수신 시 `OSSL_DECODER_CTX`를 통해 PKCS#1과 SPKI 포맷을 모두 안전하게 파싱하며, 세션키 복호화(`retreiveAES`) 시 SHA-1 및 SHA-256 OAEP를 자동 감지합니다.
- **`lmc/src/core/definitions.h` / `lmc/src/network/datagram.h` / `lmc/src/network/datagram.cpp`**:
  - `Legacy v1.0` 프레임 헤더(`PUBKEY`, `HNDSHK`, `MESSAG`, `BRDCST`)와 `Strict v3.0` 프레임 헤더(`PUBKv3`, `HNDv30`, `MSGv30`, `BRDv30`) 전환 및 양방향 수신 호환을 지원합니다.
- **`lmc/src/network/tcpnetwork.cpp` / `lmc/src/network/network.cpp`**:
  - 핸드셰이크(`sendPublicKey`, `sendSessionKey`) 및 메시지 전송(`sendMessage`) 시 설정된 호환성 모드(`Legacy v1.0` / `Strict v3.0`)에 따라 프로토콜 헤더를 적용합니다.
- **`lmc/src/gui/chat/chatwindow.h` / `lmc/src/gui/chat/chatwindow.cpp`**:
  - 채팅창 우측 상단 툴바에서 **`Legacy v1.0` ↔ `Strict v3.0`** 프로토콜 헤더 모드를 즉시 토글할 수 있는 버튼을 제공합니다.

---

## 3. 웹 프리뷰 / 프로토콜 시뮬레이터 실행 (Node.js)

```bash
npm install
npm run dev
```

## License

GNU General Public License v3.0 (see `LICENSE`).
