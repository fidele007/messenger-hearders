/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>

@protocol FBServiceTransactionMutating, FBSideFeedRequestDownloaderDelegate;
@class NSTimer, FBUserSession, FBReachabilityAnnouncer, FBScenePath, NSString;

@interface FBSideFeedRequestDownloader : NSObject <FBReachabilityListener> {

	id<FBServiceTransactionMutating> _token;
	NSTimer* _refreshSideFeedTimer;
	FBUserSession* _session;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBScenePath* _scenePath;
	id<FBSideFeedRequestDownloaderDelegate> _delegate;
	double _refreshTimerInterval;

}

@property (assign,nonatomic,__weak) id<FBSideFeedRequestDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double refreshTimerInterval;                                          //@synthesize refreshTimerInterval=_refreshTimerInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_requestSideFeedDataFromNetwork:(BOOL)arg1 withGraphQLQueries:(id)arg2 ;
-(void)_restartRefreshTimer;
-(void)_refreshTimerTriggered;
-(void)_processNetworkDownloadedResponse:(id)arg1 error:(id)arg2 ;
-(void)_processCachedResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_processNetworkDownloadedResponses:(id)arg1 ;
-(void)_cancelDownloadRequest;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)requestSideFeedDataFromNetwork:(BOOL)arg1 ;
-(void)setRefreshTimerInterval:(double)arg1 ;
-(double)refreshTimerInterval;
-(void)setDelegate:(id<FBSideFeedRequestDownloaderDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSideFeedRequestDownloaderDelegate>)delegate;
@end

