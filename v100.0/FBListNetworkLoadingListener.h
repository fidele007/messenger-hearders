/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBListNetworkLoadingListener <NSObject>
@required
-(void)didStartLoadingData:(unsigned long long)arg1 loggableSectionComponentName:(id)arg2 sectionComponentIdentifier:(id)arg3;
-(void)didSuccessfullyFinishLoadingData:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 sectionComponentIdentifier:(id)arg3;
-(void)didFailInLoadingDataWithError:(id)arg1 fetchType:(unsigned long long)arg2 sectionComponentIdentifier:(id)arg3;
-(void)didCancelLoadingData:(unsigned long long)arg1 sectionComponentIdentifier:(id)arg2;

@end

