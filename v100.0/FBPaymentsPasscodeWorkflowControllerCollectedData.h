/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBPaymentsPasscodeWorkflowControllerCollectedData : FBValueObject <NSCopying> {

	long long _workflowType;
	long long _graphRequestType;

}

@property (nonatomic,readonly) long long workflowType;                  //@synthesize workflowType=_workflowType - In the implementation block
@property (nonatomic,readonly) long long graphRequestType;              //@synthesize graphRequestType=_graphRequestType - In the implementation block
-(id)initWithWorkflowType:(long long)arg1 graphRequestType:(long long)arg2 ;
-(long long)workflowType;
-(long long)graphRequestType;
@end

