/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, FBDateInput, FBAttachmentLifeEventExtraData;

@interface FBAttachmentLifeEventData : FBGraphQLInput {

	NSString* _icon;
	NSString* _source;
	NSString* _lifeEventType;
	FBDateInput* _startDate;
	FBAttachmentLifeEventExtraData* _extras;

}

@property (nonatomic,copy) NSString * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * lifeEventType;                             //@synthesize lifeEventType=_lifeEventType - In the implementation block
@property (nonatomic,copy) FBDateInput * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) FBAttachmentLifeEventExtraData * extras;              //@synthesize extras=_extras - In the implementation block
-(NSString *)lifeEventType;
-(void)setLifeEventType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBAttachmentLifeEventExtraData *)extras;
-(void)setExtras:(FBAttachmentLifeEventExtraData *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)icon;
-(void)setStartDate:(FBDateInput *)arg1 ;
-(FBDateInput *)startDate;
@end

