/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosStorySetsUniverseExperimentContext : FBExperimentContext {

	BOOL _newAspectRatio;
	BOOL _showBlingLine;
	BOOL _shouldAutoplayToNext;
	BOOL _showSingleStoryRecommended;
	BOOL _showSeeAll;
	BOOL _singleStory;
	long long _numStories;
	BOOL _showSocialContext;
	long long _summaryDuration;
	BOOL _enabled;
	BOOL _friendsVideos;
	BOOL _videoCarouselOnTop;
	BOOL _recommendedVideos;
	BOOL _shouldHideSummary;
	BOOL _showUfi;

}

@property (assign,nonatomic) BOOL newAspectRatio;                          //@synthesize newAspectRatio=_newAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL showBlingLine;                           //@synthesize showBlingLine=_showBlingLine - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoplayToNext;                    //@synthesize shouldAutoplayToNext=_shouldAutoplayToNext - In the implementation block
@property (assign,nonatomic) BOOL showSingleStoryRecommended;              //@synthesize showSingleStoryRecommended=_showSingleStoryRecommended - In the implementation block
@property (assign,nonatomic) BOOL showSeeAll;                              //@synthesize showSeeAll=_showSeeAll - In the implementation block
@property (assign,nonatomic) BOOL singleStory;                             //@synthesize singleStory=_singleStory - In the implementation block
@property (assign,nonatomic) long long numStories;                         //@synthesize numStories=_numStories - In the implementation block
@property (assign,nonatomic) BOOL showSocialContext;                       //@synthesize showSocialContext=_showSocialContext - In the implementation block
@property (assign,nonatomic) long long summaryDuration;                    //@synthesize summaryDuration=_summaryDuration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL friendsVideos;                           //@synthesize friendsVideos=_friendsVideos - In the implementation block
@property (assign,nonatomic) BOOL videoCarouselOnTop;                      //@synthesize videoCarouselOnTop=_videoCarouselOnTop - In the implementation block
@property (assign,nonatomic) BOOL recommendedVideos;                       //@synthesize recommendedVideos=_recommendedVideos - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSummary;                       //@synthesize shouldHideSummary=_shouldHideSummary - In the implementation block
@property (assign,nonatomic) BOOL showUfi;                                 //@synthesize showUfi=_showUfi - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)friendsVideos;
-(BOOL)newAspectRatio;
-(long long)numStories;
-(BOOL)recommendedVideos;
-(BOOL)shouldAutoplayToNext;
-(BOOL)shouldHideSummary;
-(BOOL)showBlingLine;
-(BOOL)showSeeAll;
-(BOOL)showSingleStoryRecommended;
-(BOOL)showSocialContext;
-(BOOL)showUfi;
-(BOOL)singleStory;
-(long long)summaryDuration;
-(BOOL)videoCarouselOnTop;
-(void)setNewAspectRatio:(BOOL)arg1 ;
-(void)setShowBlingLine:(BOOL)arg1 ;
-(void)setShouldAutoplayToNext:(BOOL)arg1 ;
-(void)setShowSingleStoryRecommended:(BOOL)arg1 ;
-(void)setShowSeeAll:(BOOL)arg1 ;
-(void)setSingleStory:(BOOL)arg1 ;
-(void)setNumStories:(long long)arg1 ;
-(void)setShowSocialContext:(BOOL)arg1 ;
-(void)setSummaryDuration:(long long)arg1 ;
-(void)setFriendsVideos:(BOOL)arg1 ;
-(void)setVideoCarouselOnTop:(BOOL)arg1 ;
-(void)setRecommendedVideos:(BOOL)arg1 ;
-(void)setShouldHideSummary:(BOOL)arg1 ;
-(void)setShowUfi:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

