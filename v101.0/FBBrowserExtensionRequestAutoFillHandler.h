/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScriptMessageHandling.h>
#import <Messenger/FBBrowserExtensionHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBUserSession, FBMemPlatformInstantExperienceFeatureEnabledList, AutoFillCache, FBBrowserExtensionAutofillMultiRecordCache, NSURL, NSString;

@interface FBBrowserExtensionRequestAutoFillHandler : NSObject <FBScriptMessageHandling, FBBrowserExtensionHandling> {

	id<FBBrowserExtensionDelegate> _delegate;
	FBUserSession* _session;
	FBMemPlatformInstantExperienceFeatureEnabledList* _featureEnabledList;
	AutoFillCache* _autoFillCache;
	FBBrowserExtensionAutofillMultiRecordCache* _autofillMultiRecordCache;
	NSURL* _websiteURL;
	NSString* _messageName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
+(id)supportedMessageNames;
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 featureEnabledList:(id)arg3 ;
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(id)initWithDelegate:(id)arg1 session:(id)arg2 featureEnabledList:(id)arg3 ;
-(id)_listOfFieldsInViewFromMessageParams:(id)arg1 ;
-(id)_selectedAutoFillFieldFromMessageParams:(id)arg1 ;
-(void)_hideAutoFillBanner;
-(void)_showAutofillBannerWithAutofillGroups:(id)arg1 webView:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)_fetchAutofillGroupsForGroupType:(id)arg1 requestedTags:(id)arg2 onAutofillGroupsFetch:(/*^block*/id)arg3 ;
-(id)_filterOutDisplaySubsetGroups:(id)arg1 ;
-(void)_fetchAutofillGraphQLGroupsForGroupType:(id)arg1 requestedTags:(id)arg2 onAutofillGroupsFetch:(/*^block*/id)arg3 ;
-(void)_updateAutofillCacheDataWithGraphQLResponse:(id)arg1 groupType:(id)arg2 requestedTags:(id)arg3 onAutofillGroupsFetch:(/*^block*/id)arg4 ;
@end

