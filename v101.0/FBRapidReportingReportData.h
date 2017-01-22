/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBRapidReportingReportData : FBValueObject <NSCopying> {

	NSArray* _tags;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSArray * tags;                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)initWithTags:(id)arg1 reason:(id)arg2 ;
-(NSArray *)tags;
-(NSString *)reason;
@end
