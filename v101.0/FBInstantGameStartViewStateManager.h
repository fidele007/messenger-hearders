/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStateMachineDelegate.h>

@protocol FBInstantGameStartViewStateManagerDelegate;
@class FBStateMachine;

@interface FBInstantGameStartViewStateManager : NSObject <FBStateMachineDelegate> {

	FBStateMachine* _stateMachine;
	long long _state;
	id<FBInstantGameStartViewStateManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameStartViewStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                             //@synthesize state=_state - In the implementation block
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(void)setDelegate:(id<FBInstantGameStartViewStateManagerDelegate>)arg1 ;
-(id<FBInstantGameStartViewStateManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithState:(long long)arg1 ;
@end

