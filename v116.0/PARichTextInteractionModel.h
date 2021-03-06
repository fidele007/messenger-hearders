/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBIntentTarget;

@interface PARichTextInteractionModel : NSObject {

	BOOL _linkBacked;
	NSString* _clipboardText;
	FBIntentTarget* _shareIntentTarget;
	NSString* _speechText;

}

@property (nonatomic,copy,readonly) NSString * clipboardText;                        //@synthesize clipboardText=_clipboardText - In the implementation block
@property (getter=isLinkBacked,nonatomic,readonly) BOOL linkBacked;                  //@synthesize linkBacked=_linkBacked - In the implementation block
@property (nonatomic,copy,readonly) FBIntentTarget * shareIntentTarget;              //@synthesize shareIntentTarget=_shareIntentTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * speechText;                           //@synthesize speechText=_speechText - In the implementation block
+(id)interactionModelWithClipboardText:(id)arg1 linkBacked:(BOOL)arg2 shareIntentTarget:(id)arg3 speechText:(id)arg4 ;
-(FBIntentTarget *)shareIntentTarget;
-(id)initWithClipboardText:(id)arg1 linkBacked:(BOOL)arg2 shareIntentTarget:(id)arg3 speechText:(id)arg4 ;
-(NSString *)clipboardText;
-(BOOL)isLinkBacked;
-(NSString *)speechText;
@end

