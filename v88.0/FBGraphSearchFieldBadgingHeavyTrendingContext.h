/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBGraphSearchFieldBadgingHeavyTrendingContext : FBExperimentContext {

	BOOL _enableSearchFieldBadge;
	BOOL _enableSearchFieldTicker;
	double _badgeReloadInterval;
	NSString* _badgeModel;

}

@property (nonatomic,readonly) BOOL enableSearchFieldBadge;               //@synthesize enableSearchFieldBadge=_enableSearchFieldBadge - In the implementation block
@property (nonatomic,readonly) BOOL enableSearchFieldTicker;              //@synthesize enableSearchFieldTicker=_enableSearchFieldTicker - In the implementation block
@property (nonatomic,readonly) double badgeReloadInterval;                //@synthesize badgeReloadInterval=_badgeReloadInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * badgeModel;                //@synthesize badgeModel=_badgeModel - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)badgeReloadInterval;
-(BOOL)enableSearchFieldBadge;
-(BOOL)enableSearchFieldTicker;
-(NSString *)badgeModel;
@end
