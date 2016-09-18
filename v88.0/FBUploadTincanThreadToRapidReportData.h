/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBUploadTincanThreadToRapidReportData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _rapidReportingPromptNodeToken;
	NSString* _srtJobId;
	NSArray* _tincanThreadData;
	NSString* _clientThreadId;
	NSString* _clientDeviceId;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * rapidReportingPromptNodeToken;              //@synthesize rapidReportingPromptNodeToken=_rapidReportingPromptNodeToken - In the implementation block
@property (nonatomic,copy) NSString * srtJobId;                                   //@synthesize srtJobId=_srtJobId - In the implementation block
@property (nonatomic,copy) NSArray * tincanThreadData;                            //@synthesize tincanThreadData=_tincanThreadData - In the implementation block
@property (nonatomic,copy) NSString * clientThreadId;                             //@synthesize clientThreadId=_clientThreadId - In the implementation block
@property (nonatomic,copy) NSString * clientDeviceId;                             //@synthesize clientDeviceId=_clientDeviceId - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setRapidReportingPromptNodeToken:(NSString *)arg1 ;
-(void)setSrtJobId:(NSString *)arg1 ;
-(void)setTincanThreadData:(NSArray *)arg1 ;
-(void)setClientThreadId:(NSString *)arg1 ;
-(NSString *)srtJobId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)rapidReportingPromptNodeToken;
-(NSArray *)tincanThreadData;
-(NSString *)clientThreadId;
-(NSString *)clientDeviceId;
-(void)setClientDeviceId:(NSString *)arg1 ;
@end

