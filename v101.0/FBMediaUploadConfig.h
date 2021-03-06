/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBMediaUploadConfig : FBValueObject <NSCopying> {

	NSString* _protocol;
	NSString* _mediaCreationRequestPath;
	NSString* _mimeType;
	NSString* _fileName;
	NSString* _serverDedupeKey;
	NSString* _jobId;
	NSDictionary* _params;
	NSDictionary* _extraLoggingData;
	NSDictionary* _extraHeaders;
	NSString* _mailboxUserID;
	NSDictionary* _optionalConfig;

}

@property (nonatomic,copy,readonly) NSString * protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaCreationRequestPath;              //@synthesize mediaCreationRequestPath=_mediaCreationRequestPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;                              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName;                              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverDedupeKey;                       //@synthesize serverDedupeKey=_serverDedupeKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobId;                                 //@synthesize jobId=_jobId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * params;                            //@synthesize params=_params - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraLoggingData;                  //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraHeaders;                      //@synthesize extraHeaders=_extraHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSString * mailboxUserID;                         //@synthesize mailboxUserID=_mailboxUserID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * optionalConfig;                    //@synthesize optionalConfig=_optionalConfig - In the implementation block
-(id)initWithProtocol:(id)arg1 mediaCreationRequestPath:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4 serverDedupeKey:(id)arg5 jobId:(id)arg6 params:(id)arg7 extraLoggingData:(id)arg8 extraHeaders:(id)arg9 mailboxUserID:(id)arg10 optionalConfig:(id)arg11 ;
-(NSDictionary *)extraLoggingData;
-(NSString *)jobId;
-(NSDictionary *)extraHeaders;
-(NSString *)mailboxUserID;
-(NSString *)mediaCreationRequestPath;
-(NSString *)serverDedupeKey;
-(NSDictionary *)optionalConfig;
-(NSString *)mimeType;
-(NSString *)protocol;
-(NSDictionary *)params;
-(NSString *)fileName;
@end

