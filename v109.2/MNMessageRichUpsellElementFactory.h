/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSupplementaryElementFactory.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider;
@class NSString;

@interface MNMessageRichUpsellElementFactory : NSObject <MNMessageSupplementaryElementFactory, FBClassProvidable> {

	id<FBProvider> _messageRichUpsellControllerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supplementaryViewForViewModel:(id)arg1 ;
-(id)controllerForSupplementaryViewModel:(id)arg1 ;
-(id)appearanceTransitioningForViewModel:(id)arg1 ;
-(id)appearingTransformerForViewModel:(id)arg1 ;
-(id)disappearingTransformerForViewModel:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

