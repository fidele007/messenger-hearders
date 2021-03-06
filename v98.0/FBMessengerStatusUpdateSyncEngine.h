/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSyncEngine.h>
#import <Messenger/FBMessengerStatusUpdateFetchListener.h>

@protocol FBMessengerStatusUpdateFetcher, FBSyncEngineDelegate;
@class NSString;

@interface FBMessengerStatusUpdateSyncEngine : NSObject <FBSyncEngine, FBMessengerStatusUpdateFetchListener> {

	BOOL _hasOutstandingFetch;
	id<FBMessengerStatusUpdateFetcher> _messengerStatusUpdateFetcher;
	id<FBSyncEngineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<FBSyncEngineDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)syncUsersWithPreviousSyncSummary:(id)arg1 ;
-(void)forceUserSyncWithPreviousSyncSummary:(id)arg1 ;
-(id)initWithMessengerStatusUpdateFetcher:(id)arg1 ;
-(void)fetchedMessengerStatusUpdates:(id)arg1 ;
-(void)failedToFetchMessengerStatusUpdates;
-(void)setDelegate:(id<FBSyncEngineDelegate>)arg1 ;
-(id<FBSyncEngineDelegate>)delegate;
-(void)cancelSync;
@end

