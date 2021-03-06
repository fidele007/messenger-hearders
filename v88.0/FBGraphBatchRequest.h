/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFacebookAPIRequest.h>

@class NSMutableArray, NSString, FBRequestDeviceAPIContext, NSArray;

@interface FBGraphBatchRequest : FBFacebookAPIRequest {

	NSMutableArray* _requests;
	BOOL _requireAllRequestsToSucceed;
	BOOL _flush;
	BOOL _rollbackOnFailure;
	NSString* _batchName;
	NSString* _callerContext;
	NSString* _batchAppID;
	FBRequestDeviceAPIContext* _deviceAPIContext;

}

@property (nonatomic,copy) NSString * batchName;                              //@synthesize batchName=_batchName - In the implementation block
@property (nonatomic,copy) NSString * callerContext;                          //@synthesize callerContext=_callerContext - In the implementation block
@property (nonatomic,readonly) BOOL requireAllRequestsToSucceed;              //@synthesize requireAllRequestsToSucceed=_requireAllRequestsToSucceed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests;                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSString * batchAppID;                             //@synthesize batchAppID=_batchAppID - In the implementation block
@property (assign,nonatomic) BOOL flush;                                      //@synthesize flush=_flush - In the implementation block
@property (assign,nonatomic) BOOL rollbackOnFailure;                          //@synthesize rollbackOnFailure=_rollbackOnFailure - In the implementation block
@property (retain) FBRequestDeviceAPIContext * deviceAPIContext;              //@synthesize deviceAPIContext=_deviceAPIContext - In the implementation block
-(id)initWithRequest:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2 ;
-(void)addGraphRequest:(id)arg1 ;
-(void)setDeviceAPIContext:(FBRequestDeviceAPIContext *)arg1 ;
-(FBRequestDeviceAPIContext *)deviceAPIContext;
-(void)setRollbackOnFailure:(BOOL)arg1 ;
-(id)initWithRequests:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2 ;
-(void)setFlush:(BOOL)arg1 ;
-(id)requestForUDPPriming;
-(void)setBatchName:(NSString *)arg1 ;
-(void)setCallerContext:(NSString *)arg1 ;
-(id)analyticsName;
-(BOOL)useMultipartForm;
-(id)methodForSignature;
-(BOOL)requireAllRequestsToSucceed;
-(NSString *)batchName;
-(NSString *)callerContext;
-(NSString *)batchAppID;
-(void)setBatchAppID:(NSString *)arg1 ;
-(BOOL)rollbackOnFailure;
-(unsigned long long)compressionMethod;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)flush;
-(id)host;
-(id)parameters;
-(id)initWithRequest:(id)arg1 ;
-(NSArray *)requests;
-(id)httpMethod;
-(id)relativePath;
@end

