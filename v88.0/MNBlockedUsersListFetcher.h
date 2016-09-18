/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNBlockedUsersListFetcherDelegate;
@class FBSimpleNetworkerRequest, FBUserSession, NSString;

@interface MNBlockedUsersListFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBSimpleNetworkerRequest* _graphRequest;
	FBUserSession* _session;
	id<MNBlockedUsersListFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBlockedUsersListFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<MNBlockedUsersListFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNBlockedUsersListFetcherDelegate>)delegate;
-(void)start;
-(id)initWithSession:(id)arg1 ;
@end
