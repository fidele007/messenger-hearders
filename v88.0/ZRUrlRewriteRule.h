/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSRegularExpression, NSString;

@interface ZRUrlRewriteRule : NSObject <NSCoding> {

	int _flags;
	NSRegularExpression* _matcher;
	NSString* _replacer;

}

@property (nonatomic,retain,readonly) NSRegularExpression * matcher;              //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,retain,readonly) NSString * replacer;                        //@synthesize replacer=_replacer - In the implementation block
@property (nonatomic,readonly) int flags;                                         //@synthesize flags=_flags - In the implementation block
+(id)ruleFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithMatcher:(id)arg1 replacer:(id)arg2 flags:(int)arg3 ;
-(NSRegularExpression *)matcher;
-(NSString *)replacer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(int)flags;
@end

