/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsContactInfoDataActionProviding <NSObject>
@required
-(void)addOrUpdateContactData:(id)arg1 withCollectedData:(id)arg2 setDefault:(BOOL)arg3 actionSuccessBlock:(/*^block*/id)arg4 actionFailureBlock:(/*^block*/id)arg5;
-(void)deleteContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3;
-(void)setDefaultContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3;

@end

