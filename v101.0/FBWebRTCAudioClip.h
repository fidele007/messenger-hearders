/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBWebRTCAudioClip : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _emoji;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;              //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                //@synthesize key=_key - In the implementation block
-(id)initWithTitle:(id)arg1 emoji:(id)arg2 key:(id)arg3 ;
-(NSString *)emoji;
-(NSString *)key;
-(NSString *)title;
@end

