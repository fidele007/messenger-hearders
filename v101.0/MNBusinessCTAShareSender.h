/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBusinessCTAShareSenderDelegate;
@class FBUserSession, NSString, FBGraphQLMutationHandle;

@interface MNBusinessCTAShareSender : NSObject {

	FBUserSession* _session;
	NSString* _ctaID;
	NSString* _pageID;
	FBGraphQLMutationHandle* _handle;
	id<MNBusinessCTAShareSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessCTAShareSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelCurrentMutation;
-(void)_handleGraphqlResponseWithPayload:(id)arg1 error:(id)arg2 recipients:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 ctaID:(id)arg2 pageID:(id)arg3 ;
-(void)beginForwardToRecipients:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNBusinessCTAShareSenderDelegate>)arg1 ;
-(id<MNBusinessCTAShareSenderDelegate>)delegate;
@end
