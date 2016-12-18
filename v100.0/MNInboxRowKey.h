/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNInboxRowKeyMetadata;

@interface MNInboxRowKey : FBValueObject <NSCopying> {

	NSString* _unitId;
	NSString* _itemId;
	MNInboxRowKeyMetadata* _inboxRowMetadata;
	long long _serviceType;

}

@property (nonatomic,copy,readonly) NSString * unitId;                                     //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemId;                                     //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,copy,readonly) MNInboxRowKeyMetadata * inboxRowMetadata;              //@synthesize inboxRowMetadata=_inboxRowMetadata - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                      //@synthesize serviceType=_serviceType - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNInboxRowKeyMetadata *)inboxRowMetadata;
-(NSString *)unitId;
-(id)initWithUnitId:(id)arg1 itemId:(id)arg2 inboxRowMetadata:(id)arg3 serviceType:(long long)arg4 ;
-(long long)serviceType;
-(NSString *)itemId;
@end

