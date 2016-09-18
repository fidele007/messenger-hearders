/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsCurrency : FBValueObject <NSCopying> {

	NSString* _iso;
	NSString* _format;
	NSString* _symbol;
	NSString* _offset;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * iso;                 //@synthesize iso=_iso - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbol;              //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(NSString *)iso;
-(id)initWithIso:(id)arg1 format:(id)arg2 symbol:(id)arg3 offset:(id)arg4 name:(id)arg5 ;
-(NSString *)name;
-(NSString *)offset;
-(NSString *)symbol;
-(NSString *)format;
@end

