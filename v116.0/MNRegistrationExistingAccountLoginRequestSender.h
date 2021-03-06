/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNRegistrationExistingAccountLoginRequestSenderDelegate;
@class FBSimpleNetworkerRequest, FBMReachabilityAwareNetworker, MNRegistrationExistingAccount, NSString;

@interface MNRegistrationExistingAccountLoginRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBSimpleNetworkerRequest* _restNetworkRequest;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	MNRegistrationExistingAccount* _existingAccount;
	id<MNRegistrationExistingAccountLoginRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationExistingAccountLoginRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_authenticationFunnelAccountRecoveryActionPayloadWithError:(id)arg1 ;
-(id)initWithExistingAccount:(id)arg1 accountRecoveryId:(id)arg2 verifiedConfirmationCode:(id)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNRegistrationExistingAccountLoginRequestSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationExistingAccountLoginRequestSenderDelegate>)delegate;
-(void)start;
@end

