/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString, NSArray;

@interface FBRobotext : NSObject <NSCoding, NSCopying> {

	NSAttributedString* _attributedStringRepresentation;
	unsigned long long _hash;
	NSString* _stringRepresentation;
	NSArray* _tags;

}

@property (nonatomic,copy,readonly) NSArray * tags;              //@synthesize tags=_tags - In the implementation block
-(void)enumerateTagsUsingBlock:(/*^block*/id)arg1 ;
-(id)attributedStringRepresentation;
-(id)initWithString:(id)arg1 tags:(id)arg2 ;
-(NSArray *)tags;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
@end

