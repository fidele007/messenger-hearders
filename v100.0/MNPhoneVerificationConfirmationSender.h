/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNPhoneVerificationConfirmationSenderDelegate;
@class FBMReachabilityAwareNetworker, NSString;

@interface MNPhoneVerificationConfirmationSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	id<MNPhoneVerificationConfirmationSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhoneVerificationConfirmationSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 confirmationCode:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNPhoneVerificationConfirmationSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhoneVerificationConfirmationSenderDelegate>)delegate;
-(void)start;
@end

