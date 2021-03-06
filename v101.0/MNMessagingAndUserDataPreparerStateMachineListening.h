/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagingAndUserDataPreparerStateMachineListening <NSObject>
@required
-(void)stateForPreparationWithId:(unsigned long long)arg1 didUpdateFromThreadRequestState:(unsigned long long)arg2 toThreadRequestState:(unsigned long long)arg3 userRequestState:(unsigned long long)arg4 collectedState:(id)arg5 error:(id)arg6;
-(void)stateForPreparationWithId:(unsigned long long)arg1 didUpdateFromUserRequestState:(unsigned long long)arg2 toUserRequestState:(unsigned long long)arg3 threadRequestState:(unsigned long long)arg4 collectedState:(id)arg5 error:(id)arg6;
-(void)didCleanUpMessagingAndUserDataRequestWithId:(unsigned long long)arg1;

@end

