/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString;

@interface FBComposerAttributedStringReductionTracker : NSObject {

	NSAttributedString* _accumulatedAttributedText;
	unsigned long long _consumedUpToLocationInText;
	NSAttributedString* _text;

}

@property (nonatomic,copy,readonly) NSAttributedString * accumulatedAttributedText;              //@synthesize accumulatedAttributedText=_accumulatedAttributedText - In the implementation block
@property (nonatomic,readonly) unsigned long long consumedUpToLocationInText;                    //@synthesize consumedUpToLocationInText=_consumedUpToLocationInText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                   //@synthesize text=_text - In the implementation block
-(NSAttributedString *)accumulatedAttributedText;
-(unsigned long long)consumedUpToLocationInText;
-(id)initWithText:(id)arg1 accumulatedAttributedText:(id)arg2 consumedUpToLocationInText:(unsigned long long)arg3 ;
-(id)description;
-(NSAttributedString *)text;
@end
