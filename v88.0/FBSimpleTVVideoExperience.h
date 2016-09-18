/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSimpleTVVideoPlaybackItem, NSNumber;


@protocol FBSimpleTVVideoExperience <FBConnectedExperienceBase>
@property (assign,nonatomic,__weak) id<FBSimpleTVVideoExperienceDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * currentlyPlayingVideoID; 
@property (nonatomic,retain) FBSimpleTVVideoPlaybackItem * nextPlaybackItem; 
@property (assign,nonatomic) BOOL feedbackEnabled; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) double position; 
@property (nonatomic,copy,readonly) NSNumber * length; 
@required
-(void)seekTo:(double)arg1;
-(void)playVideo;
-(void)skipVideo;
-(NSString *)currentlyPlayingVideoID;
-(FBSimpleTVVideoPlaybackItem *)nextPlaybackItem;
-(void)setNextPlaybackItem:(id)arg1;
-(void)setFeedbackEnabled:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBSimpleTVVideoExperienceDelegate>)delegate;
-(long long)state;
-(NSNumber *)length;
-(double)position;
-(BOOL)feedbackEnabled;
-(void)setVolume:(float)arg1;
-(void)stopVideo;
-(void)pauseVideo;
-(float)volume;

@end

