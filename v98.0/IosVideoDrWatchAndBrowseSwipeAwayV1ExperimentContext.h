/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosVideoDrWatchAndBrowseSwipeAwayV1ExperimentContext : FBExperimentContext {

	BOOL _video_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled;
	BOOL _carousel_swipe_away_enabled;

}

@property (assign,nonatomic) BOOL video_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled;              //@synthesize video_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled=_video_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled - In the implementation block
@property (assign,nonatomic) BOOL carousel_swipe_away_enabled;                                                                  //@synthesize carousel_swipe_away_enabled=_carousel_swipe_away_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)carousel_swipe_away_enabled;
-(BOOL)video_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled;
-(void)setVideo_direct_response_watch_and_browse_with_swipe_away_video_swipe_away_enabled:(BOOL)arg1 ;
-(void)setCarousel_swipe_away_enabled:(BOOL)arg1 ;
@end
