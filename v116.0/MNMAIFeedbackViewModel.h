/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMAIFeedbackViewModel : FBValueObject <NSCopying> {

	NSString* _prompt;
	NSString* _placeholder;
	NSString* _submitButtonTitle;
	NSString* _dismissButtonTitle;

}

@property (nonatomic,copy,readonly) NSString * prompt;                          //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholder;                     //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * submitButtonTitle;               //@synthesize submitButtonTitle=_submitButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
-(id)initWithPrompt:(id)arg1 placeholder:(id)arg2 submitButtonTitle:(id)arg3 dismissButtonTitle:(id)arg4 ;
-(NSString *)submitButtonTitle;
-(NSString *)prompt;
-(NSString *)placeholder;
-(NSString *)dismissButtonTitle;
@end

