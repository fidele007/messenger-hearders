/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoHomeExperimentProtocol.h>

@protocol FBVideoHomeExperimentProtocol;
@class FBVideoHomeExperimentDefaults, FBVideoHomeExperimentListKitRollout, NSString;

@interface FBVideoHomeExperimentConfig : NSObject <FBVideoHomeExperimentProtocol> {

	BOOL _gkOn;
	id<FBVideoHomeExperimentProtocol> _vhExperimentContext;
	FBVideoHomeExperimentDefaults* _defaults;
	FBVideoHomeExperimentListKitRollout* _listkitRolloutValues;
	BOOL _enableBadging;
	BOOL _enableListKit;
	unsigned long long _leftRightSwipingBehavior;

}

@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL experimentActivated; 
@property (nonatomic,readonly) unsigned long long leftRightSwipingBehavior;                                 //@synthesize leftRightSwipingBehavior=_leftRightSwipingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL enableBadging;                                                          //@synthesize enableBadging=_enableBadging - In the implementation block
@property (nonatomic,readonly) BOOL enableListKit;                                                          //@synthesize enableListKit=_enableListKit - In the implementation block
@property (nonatomic,readonly) BOOL showMessengerInNavigationBarForVideosTab; 
@property (nonatomic,readonly) BOOL enableHybridDenseListWithFeed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long inVideoHomeExperiment; 
@property (nonatomic,readonly) BOOL showVideoHomeTab; 
@property (nonatomic,readonly) BOOL showMessengerInNavigationBar; 
@property (nonatomic,readonly) BOOL enableGoLiveHeader; 
@property (nonatomic,readonly) BOOL enablePublisherChannelHeader; 
@property (nonatomic,readonly) BOOL useExactThumbnailSize; 
@property (nonatomic,readonly) BOOL enableVideoPrefetching; 
@property (nonatomic,readonly) BOOL enableVideoPrefetchingInVideoHome; 
@property (nonatomic,readonly) unsigned long long estimatedAveragePrefetchLength; 
@property (nonatomic,readonly) unsigned long long maxConcurrentPrefetchInVideoHome; 
@property (nonatomic,readonly) unsigned long long maxDepthPrefetchInVideoHome; 
@property (nonatomic,readonly) unsigned long long minimumBandwithRequiredForPrefetching; 
@property (nonatomic,readonly) long long maxVideoPrefetchingDepthForPrefetchedDataInVideoHome; 
@property (nonatomic,readonly) BOOL includeCreatorsUnit; 
@property (nonatomic,readonly) long long searchInVideoHomeStatus; 
@property (nonatomic,readonly) BOOL enableHybridDenseListFeed; 
+(id)configWithContextInSession:(id)arg1 ;
+(id)configWithAutoexposedContextInSession:(id)arg1 ;
-(void)logExposure;
-(BOOL)experimentActivated;
-(void)searchInVideoHomeLogExposureIfNeeded;
-(id)initWithGkOn:(BOOL)arg1 enableListKit:(BOOL)arg2 experimentContext:(id)arg3 defaults:(id)arg4 ;
-(BOOL)gkOn;
-(id)vhExperimentContext;
-(BOOL)enableHybridDenseListWithFeed;
-(BOOL)showMessengerInNavigationBarForVideosTab;
-(unsigned long long)leftRightSwipingBehavior;
-(BOOL)enableBadging;
-(BOOL)enableListKit;
-(BOOL)enabled;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

