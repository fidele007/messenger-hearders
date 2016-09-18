/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBWebrtcLoggingConfigContext : FBExperimentContext {

	int _basic_log_permyriad;
	int _debug_pct;
	int _summary_debug_permyriad;
	NSString* _levels;
	NSString* _enabled_temp_modules;

}

@property (nonatomic,readonly) int basic_log_permyriad;                           //@synthesize basic_log_permyriad=_basic_log_permyriad - In the implementation block
@property (nonatomic,readonly) int debug_pct;                                     //@synthesize debug_pct=_debug_pct - In the implementation block
@property (nonatomic,copy,readonly) NSString * levels;                            //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSString * enabled_temp_modules;              //@synthesize enabled_temp_modules=_enabled_temp_modules - In the implementation block
@property (nonatomic,readonly) int summary_debug_permyriad;                       //@synthesize summary_debug_permyriad=_summary_debug_permyriad - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)debug_pct;
-(NSString *)enabled_temp_modules;
-(int)summary_debug_permyriad;
-(int)basic_log_permyriad;
-(NSString *)levels;
@end

