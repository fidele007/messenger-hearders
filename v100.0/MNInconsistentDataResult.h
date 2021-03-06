/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNInconsistentDataResult : FBValueObject <NSCopying> {

	NSString* _comparisonType;
	NSString* _entityIdentifier;
	NSString* _clientData;
	NSString* _serverData;

}

@property (nonatomic,copy,readonly) NSString * comparisonType;                //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientData;                    //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverData;                    //@synthesize serverData=_serverData - In the implementation block
-(id)initWithComparisonType:(id)arg1 entityIdentifier:(id)arg2 clientData:(id)arg3 serverData:(id)arg4 ;
-(NSString *)comparisonType;
-(NSString *)entityIdentifier;
-(NSString *)serverData;
-(NSString *)clientData;
@end

