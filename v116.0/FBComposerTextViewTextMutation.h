/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerTextViewTextMutation : FBValueObject <NSCopying> {

	NSString* _fromText;
	NSString* _replacementText;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSString * fromText;                     //@synthesize fromText=_fromText - In the implementation block
@property (nonatomic,readonly) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
-(id)initWithFromText:(id)arg1 range:(NSRange)arg2 replacementText:(id)arg3 ;
-(NSString *)fromText;
-(NSString *)replacementText;
-(NSRange)range;
@end

