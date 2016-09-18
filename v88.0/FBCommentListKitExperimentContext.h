/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBCommentListKitExperimentContext : FBExperimentContext {

	BOOL _enableForSentences;
	BOOL _enableForIndividualReply;
	BOOL _enableForListOfReplies;
	BOOL _enableForStory;
	BOOL _enableForFooter;
	BOOL _enablePermalinkListViewController;

}

@property (nonatomic,readonly) BOOL enableForSentences;                             //@synthesize enableForSentences=_enableForSentences - In the implementation block
@property (nonatomic,readonly) BOOL enableForIndividualReply;                       //@synthesize enableForIndividualReply=_enableForIndividualReply - In the implementation block
@property (nonatomic,readonly) BOOL enableForListOfReplies;                         //@synthesize enableForListOfReplies=_enableForListOfReplies - In the implementation block
@property (nonatomic,readonly) BOOL enableForStory;                                 //@synthesize enableForStory=_enableForStory - In the implementation block
@property (nonatomic,readonly) BOOL enableForFooter;                                //@synthesize enableForFooter=_enableForFooter - In the implementation block
@property (nonatomic,readonly) BOOL enablePermalinkListViewController;              //@synthesize enablePermalinkListViewController=_enablePermalinkListViewController - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enableForSentences;
-(BOOL)enableForIndividualReply;
-(BOOL)enableForListOfReplies;
-(BOOL)enableForStory;
-(BOOL)enableForFooter;
-(BOOL)enablePermalinkListViewController;
@end

