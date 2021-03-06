/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageComponentFlowDataFetcherDelegate, FBServiceTransactionMutating;
@class FBUserSession, NSString;

@interface FBPageComponentFlowDataFetcher : NSObject {

	FBUserSession* _session;
	id<FBPageComponentFlowDataFetcherDelegate> _delegate;
	id<FBServiceTransactionMutating> _partialUpdateToken;
	NSString* _entryEntID;
	NSString* _referrer;

}
-(void)_fetchSucceededWithData:(id)arg1 forUUID:(id)arg2 ;
-(void)_fetchFailedWithError:(id)arg1 forUUID:(id)arg2 forScreenId:(id)arg3 isPartialData:(BOOL)arg4 ;
-(void)_fetchSucceededWithPartialData:(id)arg1 forUUID:(id)arg2 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 entryEntId:(id)arg3 referrer:(id)arg4 ;
-(void)fetchDataWithComponentFlowId:(id)arg1 initialInput:(id)arg2 formFields:(id)arg3 optionalData:(id)arg4 originalScreenId:(id)arg5 requestType:(id)arg6 screenId:(id)arg7 screenElementId:(id)arg8 UUID:(id)arg9 ;
-(void)fetchPartialDataWithComponentFlowId:(id)arg1 formFields:(id)arg2 screenId:(id)arg3 screenElementId:(id)arg4 targetScreenElementIds:(id)arg5 screenEvent:(id)arg6 rawEventData:(id)arg7 UUID:(id)arg8 ;
@end

