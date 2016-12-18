/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSyncEngine.h>
#import <Messenger/FBSyncEngineDelegate.h>

@protocol FBClock, FBSyncEngine, FBSyncEngineDelegate;
@class NSString;

@interface FBStaleDataSyncEngineThrottler : NSObject <FBSyncEngine, FBSyncEngineDelegate> {

	id<FBClock> _clock;
	double _throttleSyncsWithinTimeInterval;
	id<FBSyncEngine> _syncEngine;
	id<FBSyncEngineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<FBSyncEngineDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSyncEngine:(id)arg1 clock:(id)arg2 ;
-(void)throttleSyncsWithinTimeInterval:(double)arg1 ;
-(void)forceUserSyncWithPreviousSyncSummary:(id)arg1 ;
-(void)syncUsersWithPreviousSyncSummary:(id)arg1 ;
-(void)syncEngineWillSync:(id)arg1 isInitial:(BOOL)arg2 ;
-(void)syncEngine:(id)arg1 didSync:(id)arg2 ;
-(void)syncEngineDidFinishSync:(id)arg1 ;
-(void)syncEngine:(id)arg1 couldNotSyncWithError:(id)arg2 ;
-(void)setDelegate:(id<FBSyncEngineDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSyncEngineDelegate>)delegate;
-(void)cancelSync;
@end

