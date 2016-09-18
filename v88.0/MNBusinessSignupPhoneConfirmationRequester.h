/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBusinessSignupPhoneConfirmationRequesterDelegate;
@class FBUserSession, FBGraphQLMutationHandle;

@interface MNBusinessSignupPhoneConfirmationRequester : NSObject {

	FBUserSession* _session;
	FBGraphQLMutationHandle* _requestHandle;
	id<MNBusinessSignupPhoneConfirmationRequesterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupPhoneConfirmationRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startConfirmationRequestWithPhoneNumber:(id)arg1 ;
-(void)processConfirmationWithCode:(id)arg1 ;
-(void)setDelegate:(id<MNBusinessSignupPhoneConfirmationRequesterDelegate>)arg1 ;
-(id<MNBusinessSignupPhoneConfirmationRequesterDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

