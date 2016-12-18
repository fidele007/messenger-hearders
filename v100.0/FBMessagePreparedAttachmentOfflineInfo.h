/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBMessagePreparedAttachmentAdditionalRetrievalInfo, FBMessageOutgoingAttachmentPreparationConfiguration;

@interface FBMessagePreparedAttachmentOfflineInfo : FBValueObject <NSCopying, NSCoding> {

	NSString* _fbId;
	NSString* _offlineId;
	long long _attachmentSizeInBytes;
	FBMessagePreparedAttachmentAdditionalRetrievalInfo* _additionalRetrievalInfo;
	unsigned long long _uploadRoute;
	FBMessageOutgoingAttachmentPreparationConfiguration* _preparationConfig;

}

@property (nonatomic,copy,readonly) NSString * fbId;                                                                           //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineId;                                                                      //@synthesize offlineId=_offlineId - In the implementation block
@property (nonatomic,readonly) long long attachmentSizeInBytes;                                                                //@synthesize attachmentSizeInBytes=_attachmentSizeInBytes - In the implementation block
@property (nonatomic,copy,readonly) FBMessagePreparedAttachmentAdditionalRetrievalInfo * additionalRetrievalInfo;              //@synthesize additionalRetrievalInfo=_additionalRetrievalInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadRoute;                                                                 //@synthesize uploadRoute=_uploadRoute - In the implementation block
@property (nonatomic,copy,readonly) FBMessageOutgoingAttachmentPreparationConfiguration * preparationConfig;                   //@synthesize preparationConfig=_preparationConfig - In the implementation block
-(NSString *)fbId;
-(NSString *)offlineId;
-(FBMessagePreparedAttachmentAdditionalRetrievalInfo *)additionalRetrievalInfo;
-(long long)attachmentSizeInBytes;
-(unsigned long long)uploadRoute;
-(FBMessageOutgoingAttachmentPreparationConfiguration *)preparationConfig;
-(id)initWithFbId:(id)arg1 offlineId:(id)arg2 attachmentSizeInBytes:(long long)arg3 additionalRetrievalInfo:(id)arg4 uploadRoute:(unsigned long long)arg5 preparationConfig:(id)arg6 ;
@end

