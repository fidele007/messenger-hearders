/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBExtensibleMessageCustomizationData, FBExtensibleMessagePlatformData, FBExtensibleMessageMontageData, FBExtensibleMessageSourceData, FBExtensibleMessageProfileRangeData, FBExtensibleMessageMetaRangeData;

@interface FBExtensibleMessageData : FBValueObject <NSCoding, NSCopying> {

	FBExtensibleMessageCustomizationData* _customizationData;
	FBExtensibleMessagePlatformData* _platformData;
	FBExtensibleMessageMontageData* _montageData;
	FBExtensibleMessageSourceData* _messageSourceData;
	FBExtensibleMessageProfileRangeData* _profileRangeData;
	FBExtensibleMessageMetaRangeData* _metaRangeData;

}

@property (nonatomic,copy,readonly) FBExtensibleMessageCustomizationData * customizationData;              //@synthesize customizationData=_customizationData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessagePlatformData * platformData;                        //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageMontageData * montageData;                          //@synthesize montageData=_montageData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageSourceData * messageSourceData;                     //@synthesize messageSourceData=_messageSourceData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageProfileRangeData * profileRangeData;                //@synthesize profileRangeData=_profileRangeData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageMetaRangeData * metaRangeData;                      //@synthesize metaRangeData=_metaRangeData - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithCustomizationData:(id)arg1 platformData:(id)arg2 montageData:(id)arg3 messageSourceData:(id)arg4 profileRangeData:(id)arg5 metaRangeData:(id)arg6 ;
-(FBExtensibleMessagePlatformData *)platformData;
-(FBExtensibleMessageSourceData *)messageSourceData;
-(FBExtensibleMessageCustomizationData *)customizationData;
-(FBExtensibleMessageProfileRangeData *)profileRangeData;
-(FBExtensibleMessageMetaRangeData *)metaRangeData;
-(FBExtensibleMessageMontageData *)montageData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

