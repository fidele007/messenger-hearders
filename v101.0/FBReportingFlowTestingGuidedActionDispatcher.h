/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReportingFlowGuidedActionDispatchingProtocol.h>

@protocol FBReportingFlowGuidedActionDispatchingDelegateProtocol;
@class NSTimer;

@interface FBReportingFlowTestingGuidedActionDispatcher : NSObject <FBReportingFlowGuidedActionDispatchingProtocol> {

	id<FBReportingFlowGuidedActionDispatchingDelegateProtocol> _delegate;
	NSTimer* _timer;
	/*^block*/id _completionBlock;

}
-(void)performGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performMessageGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(/*^block*/id)arg3 targetFBID:(id)arg4 message:(id)arg5 ;
-(void)guidedActionWasDone;
@end

