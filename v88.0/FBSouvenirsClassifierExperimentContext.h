/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSouvenirsClassifierExperimentContext : FBExperimentContext {

	BOOL _classifierEnabledV52;
	BOOL _shouldSortStoriesByClassifierScoreV55;
	BOOL _disableMaxStoriesCountV55;
	BOOL _overrideMaximumAgeForStorygenV55;
	BOOL _overrideMaximumAgeForPromptV55;
	BOOL _useSouvenirClassifierForSlideshows;
	BOOL _shouldOverridePromptRankerScore;
	BOOL _shouldClampBoostedRankerScore;
	BOOL _slideshowShouldOverridePromptRankerScore;
	BOOL _slideshowShouldClampBoostedRankerScore;
	unsigned long long _maximumAgeForStorygenValueV55;
	unsigned long long _maximumAgeForPromptValueV55;
	double _fetchNewModelParamsIntervalInMinutes;
	double _fetchNewServerFeaturesIntervalInMinutes;
	double _rerunStoryGenerationIntervalInMinutes;
	double _boostingWeightSouvenirClassifier;
	double _boostingWeightPromptsRanker;
	double _boostingWeightAbsoluteTerm;
	double _boostingWeightSlideshowClassifier;
	double _slideshowBoostingWeightPromptsRanker;
	double _slideshowBoostingWeightAbsoluteTerm;

}

@property (nonatomic,readonly) BOOL classifierEnabledV52;                                     //@synthesize classifierEnabledV52=_classifierEnabledV52 - In the implementation block
@property (nonatomic,readonly) BOOL shouldSortStoriesByClassifierScoreV55;                    //@synthesize shouldSortStoriesByClassifierScoreV55=_shouldSortStoriesByClassifierScoreV55 - In the implementation block
@property (nonatomic,readonly) BOOL disableMaxStoriesCountV55;                                //@synthesize disableMaxStoriesCountV55=_disableMaxStoriesCountV55 - In the implementation block
@property (nonatomic,readonly) BOOL overrideMaximumAgeForStorygenV55;                         //@synthesize overrideMaximumAgeForStorygenV55=_overrideMaximumAgeForStorygenV55 - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumAgeForStorygenValueV55;              //@synthesize maximumAgeForStorygenValueV55=_maximumAgeForStorygenValueV55 - In the implementation block
@property (nonatomic,readonly) BOOL overrideMaximumAgeForPromptV55;                           //@synthesize overrideMaximumAgeForPromptV55=_overrideMaximumAgeForPromptV55 - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumAgeForPromptValueV55;                //@synthesize maximumAgeForPromptValueV55=_maximumAgeForPromptValueV55 - In the implementation block
@property (nonatomic,readonly) double fetchNewModelParamsIntervalInMinutes;                   //@synthesize fetchNewModelParamsIntervalInMinutes=_fetchNewModelParamsIntervalInMinutes - In the implementation block
@property (nonatomic,readonly) double fetchNewServerFeaturesIntervalInMinutes;                //@synthesize fetchNewServerFeaturesIntervalInMinutes=_fetchNewServerFeaturesIntervalInMinutes - In the implementation block
@property (nonatomic,readonly) double rerunStoryGenerationIntervalInMinutes;                  //@synthesize rerunStoryGenerationIntervalInMinutes=_rerunStoryGenerationIntervalInMinutes - In the implementation block
@property (nonatomic,readonly) BOOL useSouvenirClassifierForSlideshows;                       //@synthesize useSouvenirClassifierForSlideshows=_useSouvenirClassifierForSlideshows - In the implementation block
@property (nonatomic,readonly) BOOL shouldOverridePromptRankerScore;                          //@synthesize shouldOverridePromptRankerScore=_shouldOverridePromptRankerScore - In the implementation block
@property (nonatomic,readonly) BOOL shouldClampBoostedRankerScore;                            //@synthesize shouldClampBoostedRankerScore=_shouldClampBoostedRankerScore - In the implementation block
@property (nonatomic,readonly) double boostingWeightSouvenirClassifier;                       //@synthesize boostingWeightSouvenirClassifier=_boostingWeightSouvenirClassifier - In the implementation block
@property (nonatomic,readonly) double boostingWeightPromptsRanker;                            //@synthesize boostingWeightPromptsRanker=_boostingWeightPromptsRanker - In the implementation block
@property (nonatomic,readonly) double boostingWeightAbsoluteTerm;                             //@synthesize boostingWeightAbsoluteTerm=_boostingWeightAbsoluteTerm - In the implementation block
@property (nonatomic,readonly) BOOL slideshowShouldOverridePromptRankerScore;                 //@synthesize slideshowShouldOverridePromptRankerScore=_slideshowShouldOverridePromptRankerScore - In the implementation block
@property (nonatomic,readonly) BOOL slideshowShouldClampBoostedRankerScore;                   //@synthesize slideshowShouldClampBoostedRankerScore=_slideshowShouldClampBoostedRankerScore - In the implementation block
@property (nonatomic,readonly) double boostingWeightSlideshowClassifier;                      //@synthesize boostingWeightSlideshowClassifier=_boostingWeightSlideshowClassifier - In the implementation block
@property (nonatomic,readonly) double slideshowBoostingWeightPromptsRanker;                   //@synthesize slideshowBoostingWeightPromptsRanker=_slideshowBoostingWeightPromptsRanker - In the implementation block
@property (nonatomic,readonly) double slideshowBoostingWeightAbsoluteTerm;                    //@synthesize slideshowBoostingWeightAbsoluteTerm=_slideshowBoostingWeightAbsoluteTerm - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldOverridePromptRankerScore;
-(double)boostingWeightPromptsRanker;
-(double)boostingWeightSouvenirClassifier;
-(double)boostingWeightAbsoluteTerm;
-(double)fetchNewModelParamsIntervalInMinutes;
-(double)fetchNewServerFeaturesIntervalInMinutes;
-(double)rerunStoryGenerationIntervalInMinutes;
-(BOOL)shouldSortStoriesByClassifierScoreV55;
-(BOOL)disableMaxStoriesCountV55;
-(BOOL)overrideMaximumAgeForStorygenV55;
-(unsigned long long)maximumAgeForStorygenValueV55;
-(BOOL)classifierEnabledV52;
-(BOOL)overrideMaximumAgeForPromptV55;
-(unsigned long long)maximumAgeForPromptValueV55;
-(BOOL)useSouvenirClassifierForSlideshows;
-(BOOL)shouldClampBoostedRankerScore;
-(BOOL)slideshowShouldOverridePromptRankerScore;
-(BOOL)slideshowShouldClampBoostedRankerScore;
-(double)boostingWeightSlideshowClassifier;
-(double)slideshowBoostingWeightPromptsRanker;
-(double)slideshowBoostingWeightAbsoluteTerm;
@end

