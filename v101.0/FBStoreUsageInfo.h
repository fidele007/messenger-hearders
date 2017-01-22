/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface FBStoreUsageInfo : NSObject {

	NSNumber* _databaseSize;
	NSNumber* _freeSize;
	NSNumber* _extendedSize;

}

@property (nonatomic,readonly) NSNumber * databaseSize;              //@synthesize databaseSize=_databaseSize - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSize;                  //@synthesize freeSize=_freeSize - In the implementation block
@property (nonatomic,readonly) NSNumber * extendedSize;              //@synthesize extendedSize=_extendedSize - In the implementation block
+(id)storeUsageInfoWithDatabaseURL:(id)arg1 extendedSize:(id)arg2 ;
+(id)storeUsageInfoWithDatabaseURL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 extendedSize:(id)arg2 ;
-(NSNumber *)freeSize;
-(NSNumber *)extendedSize;
-(id)debugDescription;
-(NSNumber *)databaseSize;
@end
