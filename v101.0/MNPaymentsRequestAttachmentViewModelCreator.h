/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNAttachmentStyleViewModelCreator.h>

@class FBMessengerPaymentsPlugin, FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNPaymentsRequestAttachmentViewModelCreator : NSObject <FBViewerContextClassProvidable, MNAttachmentStyleViewModelCreator> {

	FBMessengerPaymentsPlugin* _paymentsPlugin;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewModelForAttachment:(id)arg1 message:(id)arg2 ;
-(id)viewModelForOutgoingAttachment:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentsPlugin:(id)arg2 configManager:(id)arg3 ;
@end
