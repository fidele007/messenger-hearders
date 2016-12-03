/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNOmniMMiniAppListening.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation;
@class MNReactModule, MNOmniMMiniAppCoordinator, NSString;

@interface MNQuickReplyOpenAppHandler : NSObject <MNOmniMMiniAppListening, FBClassProvidable> {

	MNReactModule* _reactModule;
	id<MNModalPresentation> _navigationCoordinator;
	MNOmniMMiniAppCoordinator* _miniAppCoordinator;
	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleOpenAppRequestForType:(unsigned long long)arg1 withTitle:(id)arg2 forThreadKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didDismissMiniAppWithSuccess:(BOOL)arg1 ;
@end
