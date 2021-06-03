/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 5.19.0
 *
 */

#import <Foundation/Foundation.h>
#import "SMCallTypes.h"

@class SMMediaAttributes;
@class SMMobileError;
@class SMCallState;

@protocol SMCallDelegate;
@protocol SMIncomingCallDelegate;
@protocol SMOutgoingCallDelegate;

/**
 * @brief Represents events of Call
 * This protocol must be conformed by classes which uses Callervice
 * @since 3.0.0
 */
@protocol SMCallApplicationDelegate <NSObject>
NS_ASSUME_NONNULL_BEGIN

/**
 * This is the call back method for any call state change on the CallDelegate.
 *
 * @param call which of state changed
 * @param callState
 * @since 3.0.0
 */
- (void) callStatusChanged:(id<SMCallDelegate>)call withState:(SMCallState*)callState;

/**
 * This method is invoked when a detailed call information is available that can be used on statistics
 *
 * @param call related call
 * @param detailedInfo additional info dictionary
 * @since 4.4.0
 */
- (void) callAdditionalInfoChanged:(id<SMCallDelegate>)call withDictionary:(NSDictionary*)detailedInfo;

/**
 * This is the call back method for any call's media attributes change on the CallDelegate.
 *
 * @param call which of media attributes changed
 * @param mediaAttributes
 * @since 3.0.0
 * @modified 4.0.1
 */
- (void) mediaAttributesChanged:(id<SMCallDelegate>)call withMediaAttributes:(SMMediaAttributes *) mediaAttributes;

/**
 * This method is invoked when establishCall has succeeded.
 * @param call performed establishment successfully
 * @see [OutgoingCallDelegate establishCall:]
 * @since 3.0.0
 */
- (void) establishCallSucceeded:(id<SMOutgoingCallDelegate>) call;

/**
 * This method is invoked when establishCall has failed.
 * @param call couldn't made outgoing call establisment
 * @param error definition of failure
 * @see [OutgoingCallDelegate establishCall:]
 * @since 3.0.0
 */
- (void) establishCallFailed:(id<SMOutgoingCallDelegate>) call withError:(SMMobileError *)error;

/**
 * This method is invoked when endCall has succeeded.
 * This is the call back method for the endCall request
 * @param call performed end successfully
 * @see [CallDelegate endCall]
 * @since 3.0.0
 **/
- (void) endCallSucceeded:(id<SMCallDelegate>) call;

/**
 * This method is invoked when endCall has failed.
 * This is the call back method for the endCall request
 * @param call coudn't be ended
 * @param error definition of failure
 * @see [CallDelegate endCall]
 * @since 3.0.0
 **/
- (void) endCallFailed:(id<SMCallDelegate>)call withError:(SMMobileError *)error ;

/**
 * Method invoked when attempt to mute a call has succeeded.
 * @param call performed mute successfully
 * @see [CallDelegate mute]
 * @since 3.0.0
 */
- (void) muteCallSucceed:(id<SMCallDelegate>) call;

/**
 * Method invoked when attempt to mute a call has failed.
 * @param call coudn't be muted
 * @param error definition of failure
 * @see [CallDelegate mute]
 * @since 3.0.0
 */
- (void) muteCallFailed:(id<SMCallDelegate>) call withError:(SMMobileError *)error;

/**
 * Method invoked when attempt to unmute a call has succeeded.
 * @param call performed unmute successfully
 * @see [CallDelegate unMute]
 * @since 3.0.0
 */
- (void) unMuteCallSucceed:(id<SMCallDelegate>) call;

/**
 * Method invoked when attempt to unmute a call has failed.
 * @param call couldn't be unmuted
 * @param error definition of failure
 * @see [CallDelegate unMute]
 * @since 3.0.0
 */
- (void) unMuteCallFailed:(id<SMCallDelegate>) call withError:(SMMobileError *)error;

/**
 * This method is invoked when sending the custom SIP headers has succeeded.
 *
 * @param call the call which succeeded in sending custom SIP headers
 * @see [CallDelegate sendCustomParameters]
 * @since 4.5.0
 */
- (void) sendCustomParametersSuccess:(id<SMCallDelegate>) call;

/**
 * This method is invoked when sending the custom SIP headers has failed.
 *
 * @param call the call which failed in sending custom SIP headers
 * @param error related error
 * @see [CallDelegate sendCustomParameters]
 * @since 4.5.0
 */
- (void) sendCustomParametersFail:(id<SMCallDelegate>) call withError:(SMMobileError *)error;

/**
 * Method invoked when attempt to start video on a call has succeeded.
 * @param call performed start video start successfully
 * @see [CallDelegate videoStart]
 * @since 4.5.5
 */
- (void) videoStartSucceed:(id<SMCallDelegate>) call;

/**
 * Method invoked when attempt to start video on a call has failed.
 * @param call coudn't start video
 * @param error definition of failure
 * @see [CallDelegate videoStart]
 * @since 4.5.5
 */
- (void) videoStartFailed:(id<SMCallDelegate>) call withError:(SMMobileError *)error;

/**
 * Method invoked when attempt to stop video on a call has succeeded.
 * @param call performed stop video successfully
 * @see [CallDelegate videoStop]
 * @since 4.5.5
 */
- (void) videoStopSucceed:(id<SMCallDelegate>) call;

/**
 * Method invoked when attempt to stop video on a call has failed.
 * @param call coudn't stop video
 * @param error definition of failure
 * @see [CallDelegate videoStop]
 * @since 4.5.5
 */
- (void) videoStopFailed:(id<SMCallDelegate>) call withError:(SMMobileError *)error;

/**
 * Method invoked when attempt to hold a call has succeeded.
 * @param call performed hold successfully
 * @see [CallDelegate holdCall]
 * @since 4.5.5
 */
- (void) holdCallSucceed:(id<SMCallDelegate>)call;

/**
 * Method invoked when attempt to hold a call has failed.
 * @param call couldn't be holded
 * @param error definition of failure
 * @see [CallDelegate holdCall]
 * @since 4.5.5
 */
- (void) holdCallFailed:(id<SMCallDelegate>)call withError:(SMMobileError *)error;

/**
 * Method invoked when attempt to unHold a call has succeded.
 * @param call performed unhold successfully
 * @see [CallDelegate unHoldCall]
 * @since 4.5.5
 */
- (void) unHoldCallSucceed:(id<SMCallDelegate>) call;

/**
 * Method invoked when attempt to unHold a call has failed.
 * @param call couldn't be unholded
 * @param error definition of failure
 * @see [CallDelegate unHoldCall]
 * @since 4.5.5
 */
- (void) unHoldCallFailed:(id<SMCallDelegate>) call withError:(SMMobileError *)error;
NS_ASSUME_NONNULL_END
@end
