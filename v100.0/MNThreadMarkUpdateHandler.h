/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadMarkService;

@interface MNThreadMarkUpdateHandler : NSObject {

	MNThreadMarkService* _threadMarkService;

}
-(void)processSideEffectsForClientAction:(id)arg1 ;
-(void)runMarkAction:(id)arg1 threadKey:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)initWithThreadMarkService:(id)arg1 ;
@end

