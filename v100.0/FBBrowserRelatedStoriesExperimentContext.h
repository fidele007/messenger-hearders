/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBBrowserRelatedStoriesExperimentContext : FBExperimentContext {

	long long _numberOfStories;
	BOOL _isEnabled;
	long long _minimumTimeRequired;
	double _minimumScrollPercentRequired;
	long long _minimumStoriesCount;

}

@property (assign,nonatomic) long long numberOfStories;                        //@synthesize numberOfStories=_numberOfStories - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                   //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) long long minimumTimeRequired;                    //@synthesize minimumTimeRequired=_minimumTimeRequired - In the implementation block
@property (assign,nonatomic) double minimumScrollPercentRequired;              //@synthesize minimumScrollPercentRequired=_minimumScrollPercentRequired - In the implementation block
@property (assign,nonatomic) long long minimumStoriesCount;                    //@synthesize minimumStoriesCount=_minimumStoriesCount - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)minimumScrollPercentRequired;
-(long long)minimumStoriesCount;
-(long long)minimumTimeRequired;
-(long long)numberOfStories;
-(void)setNumberOfStories:(long long)arg1 ;
-(void)setMinimumTimeRequired:(long long)arg1 ;
-(void)setMinimumScrollPercentRequired:(double)arg1 ;
-(void)setMinimumStoriesCount:(long long)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
@end
