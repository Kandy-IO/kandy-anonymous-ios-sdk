# Change Log

Kandy Link Anonymous iOS SDK change log.

- This project adheres to [Semantic Versioning](http://semver.org/).
- This change log follows [keepachangelog.com](http://keepachangelog.com/) recommendations.

## 5.14.0 - 2021-12-30

### Deprecated
- `DTLS`, `securedWSProtocol`, `requestProtocolHttp`, `kandyVersion`, `kandyToken`, `deviceId`, `deviceNativeId`, `sendKandyTokenInRestHeader`,`subscriptionLocalization`,`stateChangesHandler`, `connectionType`, `auditEnable`, `supportedCallFeautes`, `notificationType` parameters removed from SMConfiguration class. `KAE-869`

### Added
- `isRingingFeedbackEnabled` and `setRingingFeedbackEnabled` added to SMConfiguration class in order to set and/or check ringing feedback feature.

### Renamed
- `replaceCodecSet` parameter renamed as `codecPayloadTypeSet` in SMConfiguration class. `KAE-869`

## 5.13.0 - 2020-12-02

## 5.12.0 - 2020-11-04

## 5.11.0 - 2020-10-05

### Changed
- Return type of `SMCall.getRTPStatistics` was changed as `NSString`

### Fixed
- Xcode 12 support was added

## 5.10.0 - 2020-08-28

## 5.9.0 - 2020-07-22

## 5.8.0 - 2020-07-03

## 5.7.0 - 2020-06-12

## 5.6.0 - 2020-04-05

### Fixed
- After Session Complete notification the end call DELETE request must be sent. `KAE-669`

## 5.5.0 - 2020-03-30

## 5.4.0 - 2020-03-02

### Added
- Adding configuration property for control TCP keep alive `KAE-571`

## 5.3.0 - 2020-01-09

### Fixed
- Background thread was trying to access UI thread is fixed. `KAE-580`


## 5.2.0 - 2019-11-29

### Added
- WebRTC stack upgraded to version M78 `KAE-508`
- Custom Kandy Agent HTTP Header is implemented `KAE-524`

## 5.1.0 - 2019-11-04


## 5.0.0 - 2019-10-03

### Added
- Unified Plan Support `KAE-428`
- Mobile SDK Distribution on CocoaPods `KAE-426`

## 4.6.1.1 - 2019-08-05

### Fixed
- VoiceActivityDetection is disabled on WebRTC layer `KAE-415`
- A fix provided for setting Push URL without a port number  `KAE-479`


## 4.6.1 - 2019-07-05

### Added
- Bandwidth limitation feature implemented `KAE-64`

### Fixed
- A fix provided for race condition case during WebRTC audio module creation when a second call session is being initiated. `KAE-435`


## 4.6.0 - 2019-06-01

### Fixed
- HTTP 4xx and 5xx responses are coded with a new error code and reported with MobileError. `KAE-288`


## 4.5.9 - 2019-05-02

### Added
- Time-Limited Token Based Anonymous Call feature implemented `KAE-285`
