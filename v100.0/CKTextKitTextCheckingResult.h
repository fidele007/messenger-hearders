/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {

	NSRange _rangeOverride;
	unsigned long long _resultTypeOverride;
	CKTextKitEntityAttribute* _entityAttribute;

}

@property (nonatomic,readonly) CKTextKitEntityAttribute * entityAttribute;              //@synthesize entityAttribute=_entityAttribute - In the implementation block
-(id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(NSRange)arg3 ;
-(CKTextKitEntityAttribute *)entityAttribute;
-(NSRange)range;
-(unsigned long long)resultType;
@end

