/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNChainRequestResultProcessing.h>

@protocol MNThreadListRequestListener;
@class MNThreadListResponse, MNHandlerThreadListRequest, NSString;

@interface MNThreadListRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNThreadListResponse* _currentResponse;
	MNHandlerThreadListRequest* _handlerRequest;
	id<MNThreadListRequestListener> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 listener:(id)arg2 ;
-(void)updateResponse:(id)arg1 completesSubResponse:(BOOL)arg2 ;
-(BOOL)isWaitingForSubResponses;
-(BOOL)validatePreliminaryResponse;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(BOOL)arg1 ;
-(BOOL)validateFinalResponse;
-(void)announceSuccess;
-(void)announceFailureWithError:(id)arg1 ;
@end

