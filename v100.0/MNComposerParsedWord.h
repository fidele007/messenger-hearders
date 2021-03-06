/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNComposerParsedWord : FBValueObject <NSCopying> {

	NSString* _word;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSString * word;              //@synthesize word=_word - In the implementation block
@property (nonatomic,readonly) NSRange range;                     //@synthesize range=_range - In the implementation block
-(id)initWithWord:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)range;
-(NSString *)word;
@end

