/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface IosMessengerVideoRecordingTooltipUniverseExperimentContext : FBExperimentContext {

	NSString* _video_recording_tooltip_type;
	double _video_recording_tooltip_transient_display_duration;
	NSString* _video_recording_tooltip_text;
	long long _video_recording_tooltip_show_until_recordings_count;

}

@property (nonatomic,copy) NSString * video_recording_tooltip_type;                                      //@synthesize video_recording_tooltip_type=_video_recording_tooltip_type - In the implementation block
@property (assign,nonatomic) double video_recording_tooltip_transient_display_duration;                  //@synthesize video_recording_tooltip_transient_display_duration=_video_recording_tooltip_transient_display_duration - In the implementation block
@property (nonatomic,copy) NSString * video_recording_tooltip_text;                                      //@synthesize video_recording_tooltip_text=_video_recording_tooltip_text - In the implementation block
@property (assign,nonatomic) long long video_recording_tooltip_show_until_recordings_count;              //@synthesize video_recording_tooltip_show_until_recordings_count=_video_recording_tooltip_show_until_recordings_count - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)video_recording_tooltip_show_until_recordings_count;
-(NSString *)video_recording_tooltip_text;
-(double)video_recording_tooltip_transient_display_duration;
-(NSString *)video_recording_tooltip_type;
-(void)setVideo_recording_tooltip_type:(NSString *)arg1 ;
-(void)setVideo_recording_tooltip_transient_display_duration:(double)arg1 ;
-(void)setVideo_recording_tooltip_text:(NSString *)arg1 ;
-(void)setVideo_recording_tooltip_show_until_recordings_count:(long long)arg1 ;
@end

