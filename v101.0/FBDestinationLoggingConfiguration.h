/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FBDestinationLoggingConfiguration : FBValueObject <NSCopying> {

	NSString* _name;
	NSSet* _finishConditions;
	NSSet* _failureConditions;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * finishConditions;               //@synthesize finishConditions=_finishConditions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * failureConditions;              //@synthesize failureConditions=_failureConditions - In the implementation block
-(NSSet *)finishConditions;
-(NSSet *)failureConditions;
-(id)initWithName:(id)arg1 finishConditions:(id)arg2 failureConditions:(id)arg3 ;
-(NSString *)name;
@end
