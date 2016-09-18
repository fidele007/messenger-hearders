/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSDictionary;

@interface FBMessagePreparedAttachment : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _contentType;
	NSArray* _offlineInfos;
	NSDictionary* _requestParameters;
	long long _attachmentSizeInBytes;
	long long _numberOfSubAttachments;
	NSDictionary* _extraLoggingData;

}

@property (nonatomic,readonly) unsigned long long contentType;                     //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * offlineInfos;                        //@synthesize offlineInfos=_offlineInfos - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,readonly) long long attachmentSizeInBytes;                    //@synthesize attachmentSizeInBytes=_attachmentSizeInBytes - In the implementation block
@property (nonatomic,readonly) long long numberOfSubAttachments;                   //@synthesize numberOfSubAttachments=_numberOfSubAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraLoggingData;               //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
-(NSArray *)offlineInfos;
-(NSDictionary *)extraLoggingData;
-(long long)attachmentSizeInBytes;
-(long long)numberOfSubAttachments;
-(id)initWithContentType:(unsigned long long)arg1 offlineInfos:(id)arg2 requestParameters:(id)arg3 attachmentSizeInBytes:(long long)arg4 numberOfSubAttachments:(long long)arg5 extraLoggingData:(id)arg6 ;
-(unsigned long long)contentType;
-(NSDictionary *)requestParameters;
@end

