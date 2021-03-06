/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingSendHandling.h>

@protocol MNSecureMessagingSendHandlingDelegate;
@class MNSecureMessagingStoredProcedureRunner, NSString;

@interface MNSecureMessagingOmnistoreSendHandler : NSObject <MNSecureMessagingSendHandling> {

	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	id<MNSecureMessagingSendHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSecureMessagingSendHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)sendPacket:(id)arg1 withPacketId:(id)arg2 ;
-(id)initWithStoredProcedureRunner:(id)arg1 ;
-(BOOL)_didSendWithResult:(id)arg1 ;
-(void)setDelegate:(id<MNSecureMessagingSendHandlingDelegate>)arg1 ;
-(id<MNSecureMessagingSendHandlingDelegate>)delegate;
@end

