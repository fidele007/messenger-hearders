/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMigrationConfig, NSArray;

@interface FBMigration : FBValueObject <NSCopying> {

	FBMigrationConfig* _configuration;
	NSArray* _steps;

}

@property (nonatomic,copy,readonly) FBMigrationConfig * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * steps;                                //@synthesize steps=_steps - In the implementation block
-(id)initWithConfiguration:(id)arg1 steps:(id)arg2 ;
-(FBMigrationConfig *)configuration;
-(NSArray *)steps;
@end

