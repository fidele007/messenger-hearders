/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNRegistrationAccountRecoveryIdRegistrationRequestSender;
@class FBUserSession, FBSimpleNetworkerRequest, NSString, LPPhoneNumber;

@interface MNRegistrationAccountRecoveryIdRegistrationRequestSender : NSObject <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _request;
	NSString* _accountRecoveryId;
	LPPhoneNumber* _loggedInUserPhoneNumber;
	id<MNRegistrationAccountRecoveryIdRegistrationRequestSender> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationAccountRecoveryIdRegistrationRequestSender> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 accountRecoveryId:(id)arg2 loggedInUserPhoneNumber:(id)arg3 ;
-(void)setDelegate:(id<MNRegistrationAccountRecoveryIdRegistrationRequestSender>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationAccountRecoveryIdRegistrationRequestSender>)delegate;
-(void)send;
@end

