/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxUnitsMetadata, NSArray, NSDictionary;

@interface MNInboxUnitsViewModel : FBValueObject <NSCopying> {

	MNInboxUnitsMetadata* _inboxUnitsMetadata;
	NSArray* _inboxUnits;
	NSArray* _inboxUnitsPYMMOrder;
	NSDictionary* _inboxUnitsAdditionalUsers;
	NSDictionary* _inboxUnitsAdditionalThreadSummaries;
	NSDictionary* _inboxUnitsAdditionalThreadRows;

}

@property (nonatomic,copy,readonly) MNInboxUnitsMetadata * inboxUnitsMetadata;                       //@synthesize inboxUnitsMetadata=_inboxUnitsMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inboxUnits;                                            //@synthesize inboxUnits=_inboxUnits - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inboxUnitsPYMMOrder;                                   //@synthesize inboxUnitsPYMMOrder=_inboxUnitsPYMMOrder - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inboxUnitsAdditionalUsers;                        //@synthesize inboxUnitsAdditionalUsers=_inboxUnitsAdditionalUsers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inboxUnitsAdditionalThreadSummaries;              //@synthesize inboxUnitsAdditionalThreadSummaries=_inboxUnitsAdditionalThreadSummaries - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inboxUnitsAdditionalThreadRows;                   //@synthesize inboxUnitsAdditionalThreadRows=_inboxUnitsAdditionalThreadRows - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNInboxUnitsMetadata *)inboxUnitsMetadata;
-(NSArray *)inboxUnits;
-(NSDictionary *)inboxUnitsAdditionalUsers;
-(NSDictionary *)inboxUnitsAdditionalThreadSummaries;
-(NSArray *)inboxUnitsPYMMOrder;
-(NSDictionary *)inboxUnitsAdditionalThreadRows;
-(id)initWithInboxUnitsMetadata:(id)arg1 inboxUnits:(id)arg2 inboxUnitsPYMMOrder:(id)arg3 inboxUnitsAdditionalUsers:(id)arg4 inboxUnitsAdditionalThreadSummaries:(id)arg5 inboxUnitsAdditionalThreadRows:(id)arg6 ;
@end

