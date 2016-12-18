/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNGlobalMuterDelegate;
@class FBSimpleNetworkerRequest, FBUserSession, NSString;

@interface MNGlobalMuter : NSObject <FBNetworkerRequestDelegate> {

	FBSimpleNetworkerRequest* _restRequest;
	FBUserSession* _session;
	id<MNGlobalMuterDelegate> _delegate;
	long long _muteUntil;

}

@property (assign,nonatomic) long long muteUntil;                             //@synthesize muteUntil=_muteUntil - In the implementation block
@property (assign,nonatomic) id<MNGlobalMuterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithMuteUntil:(long long)arg1 delegate:(id)arg2 userSession:(id)arg3 ;
-(long long)muteUntil;
-(void)setMuteUntil:(long long)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNGlobalMuterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGlobalMuterDelegate>)delegate;
-(void)start;
@end

