/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBFeedStoryPromptExperimentContext : FBExperimentContext {

	BOOL _promptUnderFeedStory;
	BOOL _showAfterInteraction;
	NSString* _buttonTitleInsideAttachment;
	NSString* _buttonTitleUnderFeedStory;

}

@property (nonatomic,readonly) BOOL promptUnderFeedStory;                                //@synthesize promptUnderFeedStory=_promptUnderFeedStory - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitleInsideAttachment;              //@synthesize buttonTitleInsideAttachment=_buttonTitleInsideAttachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitleUnderFeedStory;                //@synthesize buttonTitleUnderFeedStory=_buttonTitleUnderFeedStory - In the implementation block
@property (nonatomic,readonly) BOOL showAfterInteraction;                                //@synthesize showAfterInteraction=_showAfterInteraction - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)buttonTitleInsideAttachment;
-(NSString *)buttonTitleUnderFeedStory;
-(BOOL)promptUnderFeedStory;
-(BOOL)showAfterInteraction;
@end

