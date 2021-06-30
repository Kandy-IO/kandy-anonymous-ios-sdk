/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 5.20.0
 *
 */


#import <Foundation/Foundation.h>

@protocol SMCallServiceDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class is needed for calling the services.
 * @since 3.0.0
 */
@interface SMServiceProvider : NSObject


@property (strong, nonatomic) id<SMCallServiceDelegate> restCallService;

/**
 * This method returns an instance of ServiceProvider using Singleton Pattern
 * @return ServiceProvider
 * @since 3.0.0
 */
+ (SMServiceProvider *) getInstance;


/**
 * This method returns (creates if necessary) an instance of CallService using Singleton Pattern
 * @return CallServiceDelegate
 * @since 3.0.0
 */
- (id<SMCallServiceDelegate>) getCallService;


/**
 * This method returns the version information about the SDK 
 * @return NSString
 * @since 3.0.0
 */
- (NSString *) getVersion;

@end

NS_ASSUME_NONNULL_END
