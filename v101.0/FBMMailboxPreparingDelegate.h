/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMMailboxPreparingDelegate <NSObject>
@required
-(void)didFetchAdditionalInformation;
-(void)didFailToFetchAdditionalInformation;
-(void)didFinishingPreparingThreadList:(long long)arg1 didLoadAllThreads:(BOOL)arg2;
-(void)didCancelFetchThreads;
-(void)couldNotPrepareThreadList:(long long)arg1 dueToError:(id)arg2;

@end
