/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 6.5.0
 *
 */

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MobileSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char MobileSDKVersionString[];

//Call
#import <MobileSDKAnonymous/SMCallDelegate.h>
#import <MobileSDKAnonymous/SMCallServiceDelegate.h>
#import <MobileSDKAnonymous/SMCallDelegate.h>
#import <MobileSDKAnonymous/SMOutgoingCallDelegate.h>
#import <MobileSDKAnonymous/SMCallApplicationDelegate.h>
#import <MobileSDKAnonymous/SMCallLogServiceDelegate.h>
#import <MobileSDKAnonymous/SMCallTypes.h>
#import <MobileSDKAnonymous/SMCallState.h>
#import <MobileSDKAnonymous/SMMediaAttributes.h>
#import <MobileSDKAnonymous/SMVideoSourceTypes.h>

//ServiceProvider
#import <MobileSDKAnonymous/SMServiceProvider.h>

//Utilities
#import <MobileSDKAnonymous/SMMobileError.h>
#import <MobileSDKAnonymous/SMConfiguration.h>
#import <MobileSDKAnonymous/SMCameraModes.h>
#import <MobileSDKAnonymous/SMLoggingDelegate.h>
#import <MobileSDKAnonymous/SMUriAddress.h>
#import <MobileSDKAnonymous/SMICEServers.h>
#import <MobileSDKAnonymous/SMCodecSet.h>
#import <MobileSDKAnonymous/SMCodecToReplace.h>
#import <MobileSDKAnonymous/SMICEOptions.h>
#import <MobileSDKAnonymous/SMSlowStartCallPolicy.h>
#import <MobileSDKAnonymous/SMAudioSessionConfiguration.h>
#import <MobileSDKAnonymous/SMAudioCodecConfiguration.h>

