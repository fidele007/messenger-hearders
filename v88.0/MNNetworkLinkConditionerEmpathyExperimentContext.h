/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface MNNetworkLinkConditionerEmpathyExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _enabledByDefault;
	long long _upstreamBytesRate;
	long long _upstreamBytesBurst;
	long long _downstreamBytesRate;
	long long _downstreamBytesBurst;
	double _receiveLatencySeconds;
	NSString* _daysOfWeek;
	long long _hourStart;
	long long _hourEnd;
	NSString* _toastText;
	NSString* _toastAlertText;

}

@property (nonatomic,readonly) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long upstreamBytesRate;                 //@synthesize upstreamBytesRate=_upstreamBytesRate - In the implementation block
@property (nonatomic,readonly) long long upstreamBytesBurst;                //@synthesize upstreamBytesBurst=_upstreamBytesBurst - In the implementation block
@property (nonatomic,readonly) long long downstreamBytesRate;               //@synthesize downstreamBytesRate=_downstreamBytesRate - In the implementation block
@property (nonatomic,readonly) long long downstreamBytesBurst;              //@synthesize downstreamBytesBurst=_downstreamBytesBurst - In the implementation block
@property (nonatomic,readonly) double receiveLatencySeconds;                //@synthesize receiveLatencySeconds=_receiveLatencySeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * daysOfWeek;                  //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (nonatomic,readonly) long long hourStart;                         //@synthesize hourStart=_hourStart - In the implementation block
@property (nonatomic,readonly) long long hourEnd;                           //@synthesize hourEnd=_hourEnd - In the implementation block
@property (nonatomic,readonly) BOOL enabledByDefault;                       //@synthesize enabledByDefault=_enabledByDefault - In the implementation block
@property (nonatomic,copy,readonly) NSString * toastText;                   //@synthesize toastText=_toastText - In the implementation block
@property (nonatomic,copy,readonly) NSString * toastAlertText;              //@synthesize toastAlertText=_toastAlertText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enabledByDefault;
-(long long)upstreamBytesRate;
-(long long)upstreamBytesBurst;
-(long long)downstreamBytesRate;
-(long long)downstreamBytesBurst;
-(double)receiveLatencySeconds;
-(NSString *)toastAlertText;
-(NSString *)toastText;
-(long long)hourEnd;
-(long long)hourStart;
-(BOOL)enabled;
-(NSString *)daysOfWeek;
@end

