/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath, FBListViewLayoutListenerAnnouncer, FBListLogger, FBListViewStateManager;


@protocol FBComponentContextConfiguration <NSObject>
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler; 
@property (nonatomic,readonly) FBListViewLayoutListenerAnnouncer * layoutAnnouncer; 
@property (nonatomic,readonly) id<FBGraphQLService> graphQLService; 
@property (nonatomic,readonly) FBListLogger * logger; 
@property (nonatomic,readonly) id<FBGraphQLConnectionFetchStatusListener> fetchStatusListener; 
@property (nonatomic,readonly) FBListViewStateManager * viewStateManager; 
@required
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBGraphQLService>)graphQLService;
-(id<FBIntentHandler>)intentHandler;
-(FBListViewStateManager *)viewStateManager;
-(FBScenePath *)scenePath;
-(FBListViewLayoutListenerAnnouncer *)layoutAnnouncer;
-(id<FBGraphQLConnectionFetchStatusListener>)fetchStatusListener;
-(FBListLogger *)logger;

@end

