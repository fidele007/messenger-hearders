/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSearchResultsDisableVideoAutoplayExperimentContext : FBExperimentContext {

	BOOL _enable_video_autoplay;
	BOOL _use_h_scroll_format;
	BOOL _disable_video_autoplay;

}

@property (assign,nonatomic) BOOL enable_video_autoplay;               //@synthesize enable_video_autoplay=_enable_video_autoplay - In the implementation block
@property (assign,nonatomic) BOOL use_h_scroll_format;                 //@synthesize use_h_scroll_format=_use_h_scroll_format - In the implementation block
@property (assign,nonatomic) BOOL disable_video_autoplay;              //@synthesize disable_video_autoplay=_disable_video_autoplay - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)disable_video_autoplay;
-(BOOL)enable_video_autoplay;
-(BOOL)use_h_scroll_format;
-(void)setEnable_video_autoplay:(BOOL)arg1 ;
-(void)setUse_h_scroll_format:(BOOL)arg1 ;
-(void)setDisable_video_autoplay:(BOOL)arg1 ;
@end
