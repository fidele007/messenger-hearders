/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBMMessagingStoreDatabaseQueryCommand : FBValueObject <NSCopying> {

	NSString* _dbStatementKey;
	NSArray* _parameterList;

}

@property (nonatomic,copy,readonly) NSString * dbStatementKey;              //@synthesize dbStatementKey=_dbStatementKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parameterList;                //@synthesize parameterList=_parameterList - In the implementation block
-(id)initWithDbStatementKey:(id)arg1 parameterList:(id)arg2 ;
-(NSString *)dbStatementKey;
-(NSArray *)parameterList;
@end

