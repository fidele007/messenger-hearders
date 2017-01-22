/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBRtcMultiwayRembAggregationExperimentContext : FBExperimentContext {

	int _incoming_bitrate_window_ms;
	int _ts_delta_thresh_ms;
	int _var4;
	int _var5;
	int _var6;
	NSString* _aggregation_algorithm;

}

@property (nonatomic,copy,readonly) NSString * aggregation_algorithm;              //@synthesize aggregation_algorithm=_aggregation_algorithm - In the implementation block
@property (nonatomic,readonly) int incoming_bitrate_window_ms;                     //@synthesize incoming_bitrate_window_ms=_incoming_bitrate_window_ms - In the implementation block
@property (nonatomic,readonly) int ts_delta_thresh_ms;                             //@synthesize ts_delta_thresh_ms=_ts_delta_thresh_ms - In the implementation block
@property (nonatomic,readonly) int var4;                                           //@synthesize var4=_var4 - In the implementation block
@property (nonatomic,readonly) int var5;                                           //@synthesize var5=_var5 - In the implementation block
@property (nonatomic,readonly) int var6;                                           //@synthesize var6=_var6 - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)aggregation_algorithm;
-(int)incoming_bitrate_window_ms;
-(int)ts_delta_thresh_ms;
-(int)var4;
-(int)var5;
-(int)var6;
@end
