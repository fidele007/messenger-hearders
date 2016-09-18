/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray, CLLocation;

@interface FBFeedGraphQLConnectionQueryParameters : FBValueObject <NSCopying> {

	BOOL _includeBatteryInfo;
	long long _feedType;
	NSString* _targetID;
	unsigned long long _refreshMode;
	NSString* _caller;
	NSDictionary* _queryOptions;
	NSArray* _recentVPVds;
	CLLocation* _cachedLocation;

}

@property (nonatomic,readonly) long long feedType;                            //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetID;                      //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,readonly) unsigned long long refreshMode;                //@synthesize refreshMode=_refreshMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                        //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryOptions;              //@synthesize queryOptions=_queryOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recentVPVds;                    //@synthesize recentVPVds=_recentVPVds - In the implementation block
@property (nonatomic,readonly) BOOL includeBatteryInfo;                       //@synthesize includeBatteryInfo=_includeBatteryInfo - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * cachedLocation;              //@synthesize cachedLocation=_cachedLocation - In the implementation block
-(long long)feedType;
-(unsigned long long)refreshMode;
-(id)initWithFeedType:(long long)arg1 targetID:(id)arg2 refreshMode:(unsigned long long)arg3 caller:(id)arg4 queryOptions:(id)arg5 recentVPVds:(id)arg6 includeBatteryInfo:(BOOL)arg7 cachedLocation:(id)arg8 ;
-(NSDictionary *)queryOptions;
-(NSArray *)recentVPVds;
-(BOOL)includeBatteryInfo;
-(NSString *)targetID;
-(CLLocation *)cachedLocation;
-(NSString *)caller;
@end

