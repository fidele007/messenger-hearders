/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBSearchResultsActivityListenerAnnouncer, FBSearchResultsLogEventListenerAnnouncer, FBSearchResultsReachingEndLoadingEventListenerAnnouncer, FBSearchResultsMultiTabNavigationListenerAnnouncer, FBSearchResultsPictureBoardActivityListenerAnnouncer, FBNTAnnounceActionListenerAnnouncer, FBSearchResultsStoryLoggingManager, NSString, FBSerpConfig, NSDictionary, CLLocation, FBSearchResultsContextCustomizationSet;


@protocol FBSearchResultsContextProtocol <FBCommonComponentContextProtocol>
@property (nonatomic,readonly) FBSearchResultsActivityListenerAnnouncer * resultsActivityAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsLogEventListenerAnnouncer * logAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsReachingEndLoadingEventListenerAnnouncer * reachingEndLoadingEventAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsMultiTabNavigationListenerAnnouncer * multiTabNavigationAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsPictureBoardActivityListenerAnnouncer * pictureBoardActivityAnnouncer; 
@property (nonatomic,readonly) FBNTAnnounceActionListenerAnnouncer * nativeTemplatesActionAnnouncer; 
@property (nonatomic,readonly) FBSearchResultsStoryLoggingManager * storyLoggingManager; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,readonly) FBSerpConfig * serpConfig; 
@property (nonatomic,copy,readonly) NSDictionary * optionalDependencies; 
@property (nonatomic,copy,readonly) CLLocation * userLocation; 
@property (nonatomic,readonly) BOOL isGrid; 
@property (nonatomic,copy,readonly) FBSearchResultsContextCustomizationSet * customizationSet; 
@required
-(FBSearchResultsMultiTabNavigationListenerAnnouncer *)multiTabNavigationAnnouncer;
-(FBSearchResultsPictureBoardActivityListenerAnnouncer *)pictureBoardActivityAnnouncer;
-(FBNTAnnounceActionListenerAnnouncer *)nativeTemplatesActionAnnouncer;
-(NSString *)verticalToLog;
-(FBSearchResultsActivityListenerAnnouncer *)resultsActivityAnnouncer;
-(FBSearchResultsLogEventListenerAnnouncer *)logAnnouncer;
-(FBSearchResultsReachingEndLoadingEventListenerAnnouncer *)reachingEndLoadingEventAnnouncer;
-(FBSearchResultsStoryLoggingManager *)storyLoggingManager;
-(FBSerpConfig *)serpConfig;
-(NSDictionary *)optionalDependencies;
-(BOOL)isGrid;
-(FBSearchResultsContextCustomizationSet *)customizationSet;
-(CLLocation *)userLocation;

@end

