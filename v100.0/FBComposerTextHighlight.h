/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerTextHighlight : FBValueObject <NSCopying, NSCoding> {

	NSString* _textOfHighlight;
	NSRange _rangeOfHighlightInAllText;

}

@property (nonatomic,copy,readonly) NSString * textOfHighlight;                //@synthesize textOfHighlight=_textOfHighlight - In the implementation block
@property (nonatomic,readonly) NSRange rangeOfHighlightInAllText;              //@synthesize rangeOfHighlightInAllText=_rangeOfHighlightInAllText - In the implementation block
-(id)initWithTextOfHighlight:(id)arg1 rangeOfHighlightInAllText:(NSRange)arg2 ;
-(NSRange)rangeOfHighlightInAllText;
-(NSString *)textOfHighlight;
@end
