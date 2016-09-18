/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSDate;

@interface MNEmojiUsage : FBValueObject <NSCopying, NSCoding> {

	NSNumber* _counter;
	NSDate* _lastUsedTime;

}

@property (nonatomic,copy,readonly) NSNumber * counter;                 //@synthesize counter=_counter - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
-(id)initWithCounter:(id)arg1 lastUsedTime:(id)arg2 ;
-(NSNumber *)counter;
-(NSDate *)lastUsedTime;
@end

