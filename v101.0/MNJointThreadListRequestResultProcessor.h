/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNChainRequestResultProcessing.h>

@protocol MNJointThreadListRequestListening;
@class MNHandlerJointThreadListRequest, MNSecureAndSyncedThreadListResponse, NSString;

@interface MNJointThreadListRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNHandlerJointThreadListRequest* _request;
	MNSecureAndSyncedThreadListResponse* _currentResponse;
	id<MNJointThreadListRequestListening> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validatePreliminaryResponse;
-(BOOL)validateFinalResponse;
-(void)updateResponse:(id)arg1 completesSubResponse:(BOOL)arg2 ;
-(BOOL)isWaitingForSubResponses;
-(void)announceSuccess;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(BOOL)arg1 ;
-(void)announceFailureWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 listener:(id)arg2 ;
@end
