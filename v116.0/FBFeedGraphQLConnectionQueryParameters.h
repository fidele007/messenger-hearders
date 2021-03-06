/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray, CLLocation;

@interface FBFeedGraphQLConnectionQueryParameters : FBValueObject <NSCopying> {

	BOOL _includeBatteryInfo;
	BOOL _allowPinnedDummyStories;
	BOOL _exploreFeedPrefetch;
	NSString* _targetID;
	NSString* _refreshMode;
	NSString* _caller;
	NSDictionary* _queryOptions;
	NSArray* _recentVPVdsV2;
	CLLocation* _cachedLocation;

}

@property (nonatomic,copy,readonly) NSString * targetID;                      //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * refreshMode;                   //@synthesize refreshMode=_refreshMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                        //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryOptions;              //@synthesize queryOptions=_queryOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recentVPVdsV2;                  //@synthesize recentVPVdsV2=_recentVPVdsV2 - In the implementation block
@property (nonatomic,readonly) BOOL includeBatteryInfo;                       //@synthesize includeBatteryInfo=_includeBatteryInfo - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * cachedLocation;              //@synthesize cachedLocation=_cachedLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowPinnedDummyStories;                  //@synthesize allowPinnedDummyStories=_allowPinnedDummyStories - In the implementation block
@property (nonatomic,readonly) BOOL exploreFeedPrefetch;                      //@synthesize exploreFeedPrefetch=_exploreFeedPrefetch - In the implementation block
-(NSString *)refreshMode;
-(id)initWithTargetID:(id)arg1 refreshMode:(id)arg2 caller:(id)arg3 queryOptions:(id)arg4 recentVPVdsV2:(id)arg5 includeBatteryInfo:(BOOL)arg6 cachedLocation:(id)arg7 allowPinnedDummyStories:(BOOL)arg8 exploreFeedPrefetch:(BOOL)arg9 ;
-(NSDictionary *)queryOptions;
-(NSArray *)recentVPVdsV2;
-(BOOL)includeBatteryInfo;
-(BOOL)allowPinnedDummyStories;
-(BOOL)exploreFeedPrefetch;
-(NSString *)targetID;
-(CLLocation *)cachedLocation;
-(NSString *)caller;
@end

