/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBEventDiscoveryToolbox.h>
@class FBUserSession, FBEventAnalyticTracker;


@protocol FBEventDiscoveryToolbox
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler; 
@property (nonatomic,readonly) FBEventAnalyticTracker * tracker; 
@required
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBEventAnalyticTracker *)tracker;
-(FBUserSession *)session;

@end


@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, FBEventAnalyticTracker, FBSectionComponentFeedToolbox;

@interface FBEventDiscoveryToolbox : NSObject <FBEventDiscoveryToolbox> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBEventAnalyticTracker* _tracker;
	FBSectionComponentFeedToolbox* _sectionComponentFeedToolbox;

}

@property (nonatomic,readonly) FBSectionComponentFeedToolbox * sectionComponentFeedToolbox;              //@synthesize sectionComponentFeedToolbox=_sectionComponentFeedToolbox - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                        //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                        //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;                                         //@synthesize tracker=_tracker - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBEventAnalyticTracker *)tracker;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 tracker:(id)arg4 sectionComponentFeedToolbox:(id)arg5 ;
-(FBSectionComponentFeedToolbox *)sectionComponentFeedToolbox;
-(FBUserSession *)session;
@end

