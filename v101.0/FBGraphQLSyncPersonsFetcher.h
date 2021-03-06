/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSyncPersonsFetcher.h>

@protocol OS_dispatch_queue, FBSyncPersonsFetchDelegate;
@class FBGraphQLSyncPersonsFetcherRequest, FBUserSession, NSObject, NSString;

@interface FBGraphQLSyncPersonsFetcher : NSObject <FBSyncPersonsFetcher> {

	FBGraphQLSyncPersonsFetcherRequest* _outstandingRequest;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _responsePerformer;
	id<FBSyncPersonsFetchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSyncPersonsFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchSyncPersonsWithContactIds:(id)arg1 ;
-(void)cancelOutstandingFetch;
-(id)initWithSession:(id)arg1 responsePerformer:(id)arg2 ;
-(void)setDelegate:(id<FBSyncPersonsFetchDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSyncPersonsFetchDelegate>)delegate;
@end

