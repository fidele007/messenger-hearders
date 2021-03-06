/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class FBAnalytics, MNFriendStatusFetcher, NSString;

@interface MNContactAnalyticsLogger : NSObject <FBClassProvidable> {

	FBAnalytics* _analytics;
	MNFriendStatusFetcher* _friendStatusFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logAddContactShownForUserId:(id)arg1 suggestionRank:(long long)arg2 source:(id)arg3 ;
-(void)logContactAddedForUserId:(id)arg1 source:(id)arg2 ;
-(id)initWithAnalytics:(id)arg1 friendStatusFetcher:(id)arg2 ;
-(void)_executeLogContactAddedForUserId:(id)arg1 source:(id)arg2 isFriend:(BOOL)arg3 ;
-(void)_fetchFriendStatusForUserId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_executeLogContactShownForUserId:(id)arg1 suggestionRank:(long long)arg2 source:(id)arg3 isFriend:(BOOL)arg4 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

