/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBLazyCreator, FBMobileConfigContextManager;

@interface MNMessageLocationAttachmentRideServicePresenter : NSObject {

	FBLazyCreator* _rideServiceListPresenterCreator;
	FBMobileConfigContextManager* _configManager;

}
-(BOOL)shouldPresentForProviderName:(id)arg1 viewModel:(id)arg2 threadKey:(id)arg3 ;
-(void)presentWithProviderName:(id)arg1 entryPoint:(id)arg2 viewModel:(id)arg3 threadKey:(id)arg4 ;
-(id)initWithRideServicePresenterProvider:(id)arg1 configManager:(id)arg2 ;
@end

