/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface IosVideoSaveToWatchLaterExperimentContext : FBExperimentContext {

	long long _watch_later_label_display_duration_seconds;
	long long _watch_later_label_display_delay;
	NSString* _watch_later_label_text;
	long long _watch_later_label_impression_count;
	long long _watch_later_label_impression_cooldown_seconds;
	long long _watch_later_button_display_duration;

}

@property (assign,nonatomic) long long watch_later_label_display_duration_seconds;                 //@synthesize watch_later_label_display_duration_seconds=_watch_later_label_display_duration_seconds - In the implementation block
@property (assign,nonatomic) long long watch_later_label_display_delay;                            //@synthesize watch_later_label_display_delay=_watch_later_label_display_delay - In the implementation block
@property (nonatomic,copy) NSString * watch_later_label_text;                                      //@synthesize watch_later_label_text=_watch_later_label_text - In the implementation block
@property (assign,nonatomic) long long watch_later_label_impression_count;                         //@synthesize watch_later_label_impression_count=_watch_later_label_impression_count - In the implementation block
@property (assign,nonatomic) long long watch_later_label_impression_cooldown_seconds;              //@synthesize watch_later_label_impression_cooldown_seconds=_watch_later_label_impression_cooldown_seconds - In the implementation block
@property (assign,nonatomic) long long watch_later_button_display_duration;                        //@synthesize watch_later_button_display_duration=_watch_later_button_display_duration - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)watch_later_button_display_duration;
-(long long)watch_later_label_display_delay;
-(long long)watch_later_label_display_duration_seconds;
-(long long)watch_later_label_impression_cooldown_seconds;
-(long long)watch_later_label_impression_count;
-(NSString *)watch_later_label_text;
-(void)setWatch_later_label_display_duration_seconds:(long long)arg1 ;
-(void)setWatch_later_label_display_delay:(long long)arg1 ;
-(void)setWatch_later_label_text:(NSString *)arg1 ;
-(void)setWatch_later_label_impression_count:(long long)arg1 ;
-(void)setWatch_later_label_impression_cooldown_seconds:(long long)arg1 ;
-(void)setWatch_later_button_display_duration:(long long)arg1 ;
@end

