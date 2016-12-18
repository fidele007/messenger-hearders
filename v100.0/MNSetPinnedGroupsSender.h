/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNSetPinnedGroupsSenderDelegate;
@class FBSimpleNetworkerRequest, FBGraphQLQuery, FBUserSession, NSString;

@interface MNSetPinnedGroupsSender : NSObject <FBNetworkerRequestDelegate> {

	FBSimpleNetworkerRequest* _postRequest;
	FBGraphQLQuery* _query;
	FBUserSession* _session;
	BOOL _started;
	id<MNSetPinnedGroupsSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSetPinnedGroupsSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 orderedThreadFbIds:(id)arg2 removedThreadFbIds:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<MNSetPinnedGroupsSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSetPinnedGroupsSenderDelegate>)delegate;
-(void)start;
@end

