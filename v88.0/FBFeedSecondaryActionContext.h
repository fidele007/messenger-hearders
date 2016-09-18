/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler, FBComposerFlowDelegate;
@class FBUserSession, NSDictionary;

@interface FBFeedSecondaryActionContext : NSObject {

	FBUserSession* _session;
	unsigned long long _layoutIdiom;
	long long _feedType;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id _target;
	NSDictionary* _optionalDependencies;

}

@property (nonatomic,readonly) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                      //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,readonly) long long feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                   //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                   //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<FBComposerFlowDelegate> composerFlowDelegate;              //@synthesize composerFlowDelegate=_composerFlowDelegate - In the implementation block
@property (nonatomic,readonly) id target;                                                           //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * optionalDependencies;                            //@synthesize optionalDependencies=_optionalDependencies - In the implementation block
+(id)newWithSession:(id)arg1 layoutIdiom:(unsigned long long)arg2 feedType:(long long)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 composerFlowDelegate:(id)arg6 target:(id)arg7 optionalDependencies:(id)arg8 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(NSDictionary *)optionalDependencies;
-(unsigned long long)layoutIdiom;
-(id)contextWithOptionalDependencies:(id)arg1 ;
-(long long)feedType;
-(id<FBComposerFlowDelegate>)composerFlowDelegate;
-(id)target;
-(FBUserSession *)session;
@end
