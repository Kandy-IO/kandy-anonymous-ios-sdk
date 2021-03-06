# Kandy Link Anonymous iOS SDK

<p>
    <img alt="Cocoapods platforms" src="https://img.shields.io/cocoapods/p/KandyLinkMobileSDKAnonymous">
    <img alt="GitHub release (latest SemVer)" src="https://img.shields.io/github/v/release/kandy-io/kandy-anonymous-ios-sdk">
    <img alt="Cocoapods" src="https://img.shields.io/cocoapods/v/KandyLinkMobileSDKAnonymous">
</p>

## Install

### CocoaPods

[CocoaPods](https://cocoapods.org/pods/KandyLinkMobileSDKAnonymous) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate *Kandy Link Anonymous iOS SDK* into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
...

target 'YOUR_TARGET_NAME' do
    pod 'KandyLinkMobileSDKAnonymous', '~> 5.16.0'
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
    end
  end
end

...
```

### Manual

Alternatively *Kandy Link Anonymous iOS SDK* can be manually integrated to your project with the [followed steps](https://kandy-io.github.io/kandy-link-ios-sdk/tutorials/#/?id=manual-installation). 

## Documentation

The information about tutorials and documents can be found in the links below

* Documents: [API Docs](https://kandy-io.github.io/kandy-anonymous-ios-sdk/docs)

* Tutorials: Choose your configuration ( [Kandy-US](https://kandy-io.github.io/kandy-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=spidr-ucc.genband.com&WEBSOCKETFQDN=spidr-ucc.genband.com&ICESERVER1=turn-ucc-1.genband.com&ICESERVER2=turn-ucc-2.genband.com) | [Kandy-EMEA](https://kandy-io.github.io/kandy-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=spidr-em.genband.com&WEBSOCKETFQDN=spidr-em.genband.com&ICESERVER1=turn-em-1.genband.com&ICESERVER2=turn-em-2.genband.com) | [Kandy-UAE](https://kandy-io.github.io/kandy-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=ct-webrtc.etisalat.ae&WEBSOCKETFQDN=ct-webrtc.etisalat.ae&ICESERVER1=ct-turn1.etisalat.ae&ICESERVER2=ct-turn2.etisalat.ae) )

## Compatibility

Compatible iOS versions :

* iOS 10.x+

Compatible XCode Versions :

* XCode 12.x+ (iOS Simulator arm64 architecture is ***not supported*** yet)

Known Issues in XCode 12.3 :
- When building your project you will get these errors 
</br>`Building for iOS Simulator, but the linked and embedded framework ‘MobileSDKAnonymous.framework’ was built for iOS + iOS Simulator.` 
</br>`Building for iOS Simulator, but the linked and embedded framework ‘WebRTC.framework’ was built for iOS + iOS Simulator.`

Workaround :
- Set `Validate Workspace` to `YES` in the Build Settings tab to avoid these errors

Compatible KandyLink Server versions :

* Kandy Link 4.6.1

* Kandy Link 4.7.0 + Patch 4

Tested on :

* iPhone 5S, 5C, 6S, 7, 7+, 8, X, iPad mini, iPad 4, and iPad Air
