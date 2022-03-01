Pod::Spec.new do |s|
    s.name              = 'KandyLinkMobileSDKAnonymous'
    s.version           = '6.0.0'
    s.summary           = 'KandyLinkMobileSDKAnonymous'
    s.homepage          = 'https://github.com/Kandy-IO/'
    s.license 		      = { :type => 'MIT', :file => 'mit-license.txt'}
    s.author            = { 'Name' => 'cpaassdk@netas.com.tr' }
    s.platform          = :ios
    s.source            = { :git => 'https://github.com/Kandy-IO/kandy-anonymous-ios-sdk.git', :tag => '6.0.0'}
    s.dependency  'KandyWebRTC'
    s.ios.deployment_target   = '11.0'
    s.library           = ['c++','icucore','z']
    s.ios.frameworks    = ['AVFoundation','SystemConfiguration','GLKit','VideoToolbox','AudioToolbox','PushKit']
    s.vendored_frameworks = ['MobileSDKAnonymous.xcframework']
    s.pod_target_xcconfig = {
        'ENABLE_BITCODE' => 'NO',
        'FRAMEWORK_SEARCH_PATHS' => '$(inherited)',
        'OTHER_LDFLAGS' => '$(inherited) -framework WebRTC -ObjC',
        'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
   }



end
