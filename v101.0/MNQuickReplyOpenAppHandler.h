/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNOmniMMiniAppListening.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation;
@class MNOmniMMiniAppCoordinator, NSString;

@interface MNQuickReplyOpenAppHandler : NSObject <MNOmniMMiniAppListening, FBClassProvidable> {

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
