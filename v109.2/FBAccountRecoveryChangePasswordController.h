/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class FBAccountRecoveryFlowData;

@interface FBAccountRecoveryChangePasswordController : NSObject {

	FBAccountRecoveryFlowData* _flowData;
	id<FBNetworkDispatch> _requesterConfiguration;

}
-(id)initWithFlowData:(id)arg1 requesterConfiguration:(id)arg2 ;
-(void)changePassword:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

